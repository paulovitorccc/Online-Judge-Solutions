#coding: utf-8
 
nome = raw_input()
vogais = ['a', 'e', 'i', 'o', 'u', 'y', 'A', 'E', 'I', 'O', 'U', 'Y']
final = ''
for i in nome:
	if i not in vogais:
		final += '.'
		final += i.lower()
 
 
print "%s" % final