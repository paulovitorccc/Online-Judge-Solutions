import math

n = int(raw_input())
 
for i in range(n):
	lado = int(raw_input())
	 
	area = (5 * lado**2) / (4 * (math.sqrt(5 - (2 * math.sqrt(5)))))
	
	print "%.3f" % area