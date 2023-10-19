# This code prompts the user to enter two numbers and stores them in the variables `num1` and `num2`.
# It then compares the values of `num1` and `num2` using an if-elif-else statement.
num1 = input("Enter Your First Number: ")
num2 = input("Enter Your Second Number: ")

if num1 > num2:
    print("first number is big")
elif num1 < num2:
    print("Second number is big")
else:
    print("numbers are equal")