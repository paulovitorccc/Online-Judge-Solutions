#coding: utf-8
 
casos = int(input())
for i in range(0, casos):
	qtdTiros = int(raw_input())
	tiros = [int(j) for j in raw_input().split()]
	movimentos = raw_input()
 
	total = 0;
	for e in range(0, qtdTiros):
		tiroAtual = tiros[e]
		movimentoAtual = movimentos[e]
		if tiroAtual == 1 or tiroAtual == 2:
			if movimentoAtual == 'S':
				total += 1
		if tiroAtual > 2 and tiroAtual <= 7:
			if movimentoAtual == 'J':
				total += 1
 
	print "%d" % total