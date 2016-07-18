n = int(input())
revinteger=0
orinteger=n
while(n!=0):
 remainder=int(n%10)
 revinteger=int(revinteger*10)+int(remainder)
 n=int(n/10)
if(orinteger==revinteger):
 print("palindrome")
else:
 print("not palindrome")
	
