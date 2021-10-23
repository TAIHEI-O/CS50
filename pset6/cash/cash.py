from cs50 import get_float

count = 0

# Get dollars from user
while True:
    dollars = get_float("Change owed: ")
    if dollars > 0:
        break

# Unit conversion
cent = round(dollars * 100)

# Caluculate number of count
while cent > 24:
    cent = cent - 25
    count += 1

while cent > 9:
    cent = cent - 10
    count += 1

while cent > 4:
    cent = cent - 5
    count += 1

while cent > 0:
    cent = cent - 1
    count += 1

# Print number of count
print(count)