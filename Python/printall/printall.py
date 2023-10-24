# The code is creating an empty list called `values`. It then prompts the user to enter a value four
# times using a for loop. Each time, it stores the user's input in a variable called `value` and
# appends it to the `values` list. Finally, it prints all the values in the `values` list using the
# `print(*values)` syntax, which unpacks the list and prints each value separated by a space.
values = []

for i in range(4):
    value = input(f"Enter value {i}: ")
    values.append(value)
print(*values)
