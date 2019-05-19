x = (input())
if (x.isnumeric()) == True:
    if x > 0:
        print("Positive number")
    elif x < 0:
        print("Negative")
    else:
        print("zero")
else:
    print("invalid input")
