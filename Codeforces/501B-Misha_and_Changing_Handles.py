antigos = {}
atuais = {}

casos = int(raw_input())
for i in range(casos):
	antigo, atual = map(str, raw_input().split())
	if antigo not in atuais:
		antigos[antigo] = atual
		atuais[atual] = antigo
	else:
		antigos[atuais[antigo]] = atual
		atuais[atual] = atuais[antigo]
		del atuais[antigo]
		
print len(antigos)
for j in antigos:
	print j + " " + antigos[j]