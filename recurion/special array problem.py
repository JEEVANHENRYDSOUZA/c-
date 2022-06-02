def productSum(array,multiplier=1):
	sum=0
	for i in array:
		if type(i) is list:
			sum+=productSum(i,multiplier+1)
		else:
			sum+=i
	return sum*multiplier
