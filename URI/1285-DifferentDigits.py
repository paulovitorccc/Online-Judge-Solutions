#coding: utf-8

def qtdNaoRepetidos(inicio, fim):
	
	total = 0
	for i in range(inicio, fim + 1):
		num = str(i)
		conj = {int(e) for e in num}
		if len(num) == len(conj):
			total = total + 1
		
	return total
	
while True:
	try:
		inicio, fim = map (int, raw_input().split())
		print(qtdNaoRepetidos(inicio, fim))
	except EOFError: break
