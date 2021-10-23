from cs50 import get_int


# Get hight from user
hight = get_int("Hight: ")

while hight < 1 or hight > 8:
    hight = int(input("Hight: "))


# Print out blocks
for i in range(hight):
    for k in range(hight - i - 1):
        # Print space
        print(" ", end="")
    for j in range(i + 1):
        # Print hashtag
        print("#", end="")
    print()
