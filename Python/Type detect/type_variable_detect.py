# This code prompts the user to enter any type of variable. It then tries to convert the input into an
# integer using the `int()` function. If the conversion is successful, it prints "Your input is
# integer!". If the conversion raises a `ValueError`, it means the input is not an integer, so it
# tries to convert it into a float using the `float()` function. If this conversion is successful, it
# prints "Your input is float!". If the second conversion also raises a `ValueError`, it means the
# input is not a float or an integer, so it prints "Your input is string!".
variable = input("Enter any type of variable your want: ")

try:
    tmp = int(variable)
    print("Your input is integer!")

except ValueError:

    try:
        tmp = float(variable)
        print("Your input is float!")
    except ValueError:
        print("Your input is string!")

