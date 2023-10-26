import random

while True:
    secret = random.randint(0, 9)
    guess = int(input("Guess a random number between 0 and 9"))
    if guess == secret:
        print("You guessed correctly")
        break
    elif guess not in range(0, 10):
        print("I said to choose between 0 and 9")
    elif guess != secret:
        print("Try again")

while True:
    y = input("Type E to exit this application")
    if y.lower() in ["e"]:
        exit()
    else:
        print("There's nothing else this app offers. Press E.")

