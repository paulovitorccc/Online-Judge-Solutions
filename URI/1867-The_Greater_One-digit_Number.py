def numeroAlgarismo(numero):
	while len(numero) != 1:
		novoNumero = 0
		
		for i in numero:
			novoNumero += int(i)
		
		numero = str(novoNumero)
	
	return numero
	
while True:
	M, N = map(str, raw_input().split())
	
	if M == "0" and N == "0":
		break
	
	numeroAlgarismoM = numeroAlgarismo(M)
	numeroAlgarismoN = numeroAlgarismo(N)
	
	if numeroAlgarismoM > numeroAlgarismoN:
		print 1
	elif numeroAlgarismoN > numeroAlgarismoM:
		print 2
	else:
		print 0
		