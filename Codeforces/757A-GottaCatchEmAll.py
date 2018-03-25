#coding: utf-8
 
nome = raw_input()
Bulbasaur = [0, 0, 0, 0, 0, 0, 0]
 
for i in nome:
	if i ==  "B":
		Bulbasaur[0] += 1
	elif i ==  "l":
		Bulbasaur[1] += 1
	elif i ==  "b":
		Bulbasaur[2] += 1
	elif i ==  "s":
		Bulbasaur[3] += 1
	elif i ==  "r":
		Bulbasaur[4] += 1
	elif i ==  "a":
		Bulbasaur[5] += 1
	elif i ==  "u":
		Bulbasaur[6] += 1
 
menor = Bulbasaur[0];
for e in range(1, 5):
	if Bulbasaur[e] < menor:
		menor = Bulbasaur[e]
 
menorAux = Bulbasaur[5]
if Bulbasaur[6] < menorAux:
	menorAux = Bulbasaur[6]
 
for j in range(0, menor + 1):
	if (2 * menor) > menorAux:
		menor = menor - 1
 
print "%d" % menor