temp = -100 # in F
freezing = 32
boiling = 212

print(temp)
if temp <= freezing:
    print("I'm freezing!")
    if temp <= 0:
        print("I'm super freezing!")
elif temp >= boiling:
    print("I'm boiling!")
else:
    print("I'm somewhere in between")

