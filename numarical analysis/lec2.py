import math

def fx(x, y):
    return x + 1 + pow(y,2) 

def ahmed():
    print ("this is a program of oylar methods ")
    print()
    x0, y0 = map(float, input("fx(x0) = y0, please enter x0 and y0: ").split())
    a, b = map(float, input("Please enter interval: ").split())
    if ( a > b ):
        temp = a 
        a = b 
        b = temp 
    h = float(input("Please enter step: "))
    if ( h <= 0):
        print ("not valid , step should be greater than 0 ")
        h = float(input("Please enter step: "))
    elif (h > b):
        print ("not valid , step should be less than or equal "  , b )
        h = float(input("Please enter step: "))
            


    x = []
    y = []

    k = x0
    while k <= b:
        x.append(k)
        k += h

    y.append(y0)

    for i in range(1, len(x)):
        y.append(y[i-1] + h * fx(x[i-1], y[i-1]))

    ye1 = []
    yi = []

    yi.append(y0)
    
    
    for j in range(len(x)):
        
        if j > 0:
            yi.append(yi[j-1] + (h / 2) * abs(fx(x[j-1], yi[j-1]) + fx(x[j], ye1[j-1])))
        if j != len(x) - 1 :
            ye1.append(  yi[j] + h * fx(x[j], yi[j]))
      
    print()
    print("by using oylar method:")
    print("at x =", x[i], ", y =", y[i])
    print()
    print("by using modified oylar method:")
    print("at x =", x[i], ", y =", yi[i])
    print()
    print("thank you DR MOUNIS")
    print()

if __name__ == '__main__':
    t = 1
    # t = int(input())
    while t > 0:
        ahmed()
        t -= 1