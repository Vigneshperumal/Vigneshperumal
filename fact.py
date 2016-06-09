n=int(input(""))
def factorial(n):
  if(n==0):
    print(0)
  else:
    print(factorial(n)+factorial(n-1))
  
