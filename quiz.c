#include <stdio.h>

struct Song {
	char title[100];
	char artist[100];
	int time;
	int timesPlayed;
};

struct Playlist {
	char name[100];
	int numOfSongs;
	struct Song songs[10];
};

void addSong(struct Playlist *p, struct Song *s);

void addSong(struct Playlist *p, struct Song *s) {
	p->songs[p->numOfSongs] = *s;
	// (*p).songs
	p->numOfSongs++;
}

void totalTimeListened(int *time, struct Playlist *p);

void totalTimeListened(int *time, struct Playlist *p) {
	*time = 0;
	for(int i=0; i<p->numOfSongs; i++) {
		*time += p->songs[i].time * p->songs[i].timesPlayed;
	}
}


int main() {
	struct Song s1 = {
		"Another Sky",
		"Taro Hakase",
		354,
		100
	};

	struct Song s2 = {
		"River Flows In You",
		"Yiruma",
		188,
		10
	};

	struct Playlist favorites = {
		"Favorites",
		0
	};

	addSong(&favorites, &s1);
	addSong(&favorites, &s2);

	int totalSeconds;

	totalTimeListened(&totalSeconds, &favorites);

	printf("%d", totalSeconds);

	return 0;
}
