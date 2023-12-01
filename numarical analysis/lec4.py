import math

def fx(x):
    return 1 / (x + 1) 

def menu():
    print("please, choose from following menu: \n")
    print("press 1 for trapezoidal method")
    print("press 2 for Simpson's method")
    print("press 3 for Simpson's 3/8 method")
    print("press 0 to exit\n")
    t = int(input())
    return t

# main program
print("please enter a and b\n")
x0, xn = map(float, input().split())
print("please enter n")
n = float(input())
while n < 1 :
    print("n should be greater than 0")
    print("please enter n")
    n = float(input())

h = (xn - x0) / n
y = [fx(i) for i in list(map(lambda x: x0 + h*x, range(int(n)+1)))]

choose = menu()
while choose:
    if choose == 1:
        # trapezoidal method
        sum = y[0] + y[-1]
        for i in range(1, len(y)-1):
            sum += 2 * y[i]
        sum *= (h / 2)
        print("result by using trapezoidal method = ", sum, "\n")
    elif choose == 2:
        # Simpson's method
        if n % 2:
            print("not valid, n must be even\n")
        else:
            sum = y[0] + y[-1]
            for i in range(1, len(y)-1):
                if i % 2:
                    sum += 4 * y[i]
                else:
                    sum += 2 * y[i]
            sum *= (h / 3)
            print("result by using Simpson's method = ", sum, "\n")
    elif choose == 3:
        # Simpson's 3/8 method
        if n % 3:
            print("not valid, n must be divisible by 3\n")
        else:
            sum = y[0] + y[-1]
            for i in range(1, len(y)-1):
                if i % 3:
                    sum += 3 * y[i]
                else:
                    sum += 2 * y[i]
            sum *= ((3*h) / 8)
            print("result by using Simpson's 3/8 method = ", sum, "\n")
    else:
        print("not in the menu\n")
    choose = menu()
    
print("thank you DR moanis")