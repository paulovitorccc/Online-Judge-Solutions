#coding: utf-8
 
while True:
	jogadores, quadrados = map (int, raw_input().split())
	if jogadores == 0 and quadrados == 0:
		break
	arms = [int(g) for g in raw_input().split()]
 
	casos = int(raw_input())
 
	passos = []
	for e in range(0, jogadores):
		passos.append(0)
 
	presos = []
	for y in range(0, jogadores):
		presos.append(0)
 
	jogadorAtual = 1;
	for i in range(0, casos):
		dado1, dado2 = map (int, raw_input().split())
		resultado = dado1 + dado2
 
		aux = True
		while(aux):
			if presos[jogadorAtual - 1] == 0 :
				passos[jogadorAtual - 1] += resultado
				aux = False
 
				if(passos[jogadorAtual - 1] in arms):
					presos[jogadorAtual - 1] = 1
 
 
				jogadorAtual = jogadorAtual + 1
				if jogadorAtual > jogadores:
					jogadorAtual = 1
 
 
			else:
				presos[jogadorAtual - 1] = 0
 
				jogadorAtual = jogadorAtual + 1
				if jogadorAtual > jogadores:
					jogadorAtual = 1
 
 
 
	for k in range(0, jogadores):
		if passos[k] > quadrados:
			num = k + 1
			print "%d" % num