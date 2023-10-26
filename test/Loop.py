while True:
    x = input("Are you okay? Yes or No? ")
    if x.lower() in ["yes", "y", ]:
        print("okay good")
        break
    elif x.lower() in ["no", "n"]:
        print("Wrong answer, try again ")
    else:
        print("Answer either yes or no ")

while True:
    y = input("Press E to exit this application")
    if y.lower() in ["e"]:
        exit()
    else:
        print("There's nothing else this app offers. Press E.")
