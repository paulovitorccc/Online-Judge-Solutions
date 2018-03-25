tam = int(raw_input())
nome = raw_input()
nome = nome.upper()
nome = set(nome)

if len(nome) == 26:
	print "YES"
else:
	print "NO"