from cs50 import get_string

letter = 0
word = 1
sentence = 0

# Get the text from user
text = get_string("Text: ")

# Set the length of text
text_length = len(text)

# Count
for i in range(text_length):

    # Count letters
    if (text[i].isalpha()):
        letter += 1

    # Count words
    if (text[i].isspace()):
        word += 1

    # Count sentences
    if (text[i] == '.' or text[i] == '?' or text[i] == '!'):
        sentence += 1

# Caluculate Coleman-Liau index
grade = (0.0588 * letter / word * 100) - (0.296 * sentence / word * 100) - 15.8

index = round(grade)

# Print grade
if index < 1:
    print("Before Grade 1")
elif index > 16:
    print("Grade 16+")
else:
    print(f"Grade {index}")