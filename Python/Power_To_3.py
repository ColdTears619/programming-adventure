# The code is using a `for` loop to iterate three times. In each iteration, it prompts the user to
# enter a number using the `input()` function. The entered number is then converted to an integer
# using `int()`.
for counter in range(3):
    number = int(input(f'Enter number {counter+1}: '))
    compute = number**3
    print(f"Power 3 for number {counter+1} is: {compute}")