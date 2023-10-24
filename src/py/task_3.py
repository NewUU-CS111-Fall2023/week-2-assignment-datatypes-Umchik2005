from random import randint
class generateBigInteger():
    def arithmeticProcess(self, A):
        B = randint(10**99, 10**100-1) #we generate random num between 10^99 and (10^100)-1. It generates any 100-digit integer.
        print("Generated number(B): ",B,"\nB/A = ", B/A)

if __name__=="__main__": # It's somehow identical to main() function in c++
    numbers=generateBigInteger()
    numbers.arithmeticProcess(float(input("A = ")))