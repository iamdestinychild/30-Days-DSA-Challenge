def increment_large_integer(digits):
  """Increments a large integer represented as an integer array.

  Args:
    digits: A list of integers representing the large integer.

  Returns:
    A list of integers representing the incremented large integer.
  """

  carry = 1
  for i in range(len(digits) - 1, -1, -1):
    digits[i] += carry
    if digits[i] >= 10:
      digits[i] -= 10
      carry = 1
    else:
      carry = 0

  if carry == 1:
    digits.insert(0, 1)

  return digits
