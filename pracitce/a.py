# Function to calculate the maximum product for a single test case
def max_product(n, a):
    min_digit = min(a)  # Find the minimum digit
    if min_digit == 9:
        return prod(a)  # If the minimum digit is 9, return the product as it is
    else:
        # Find the index of the minimum digit
        min_index = a.index(min_digit)
        # Replace the minimum digit with 9
        a[min_index] = 9
        return prod(a)  # Return the product after replacement

# Function to calculate the product of all elements in a list
def prod(lst):
    result = 1
    for x in lst:
        result *= x
    return result

# Input the number of test cases
t = int(input())

# Process each test case
for _ in range(t):
    n = int(input())  # Number of digits in the array
    a = list(map(int, input().split()))  # List of digits
    result = max_product(n, a)  # Calculate the maximum product
    print(result)  # Output the result for this test case
