def parenteses(k):
  s = []
  for i in k:
    if i == "(":
      s.append("(")
    elif i == ")":
      if s == []:
        return "incorrect"
      else:
        s.pop()
  if s == []:
    return "correct"
  else:
    return "incorrect"


while True:
  try:
    nome = raw_input()
    print(parenteses(nome))
  except EOFError: break