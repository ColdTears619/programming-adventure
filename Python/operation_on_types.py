# This code prompts the user to enter two values and then attempts to perform multiplication on them.
# If the values can be converted to integers, it multiplies them together and prints the result. If
# the values cannot be converted to integers, it attempts to concatenate them as strings and prints
# the result. If any errors occur during the process, it prints 'Error'.
value1 = input("Enter first value: ")
value2 = input("Enter second value: ")

try:
    val1 = int(value1)
    val2 = int(value2)
    print(val1 * val2)
except:
    try:
        val1 = str(value1)
        val2 = str(value2)
        print(val1 + val2)
    except:
        print('Error')

