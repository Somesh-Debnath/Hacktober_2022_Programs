print("This program converts temperature from celsius to fahrenheit and vice-versa\nChoose which one do you want.\n\n")

try:
    imp = int(input("1.celsius to fahrenheit\n2.fahrenheit to celsius\n(Enter 1 or 2)\n>>"))

    if imp == 1:
        celsius = float(input("Enter temperature in celsius\n>>"))
        change = celsius * 1.8 + 32
        print(f"{celsius} degree celsius is {change} in fahrenheit")
    elif imp == 2:
        fahrenheit = float(input("Enter temperature in fahrenheit\n>>"))
        change2 = fahrenheit - 32
        change3 = change2 * 5/9
        print(f"{fahrenheit} degree fahrenheit is {change3} in celsius.")

    else:
        print("Invalid input.\nExiting the program....")
except:
    print("Invalid input.\nExiting the program....")

