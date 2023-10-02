
def process(operations):
  record: List[int] = []
  for op in operations:
    if (op=='C'):
      # Remove the previous record
      del record[-1]
    elif (op=='D'):
      # Double the last score
      record.append(record[-1]*2)
    elif (op=='+'):
      # Add previous two records
      record.append(record[-1]+record[-2])
    else:
      # cast and add number to record
      record.append(int(op))
  # return the sum
  return sum(record)


# 30
print(process(["5","2","C","D","+"]))

# 27
print(process(["5","-2","4","C","D","9","+","+"]))

# 0
print(process(["1", "C"]))
