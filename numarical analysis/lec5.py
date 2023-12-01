import math


def AB():
    global A, B
    mul1 = eq2[1]
    mul2 = eq1[1]
    for i in range(3):
        eq1[i] *= mul1
        eq2[i] *= mul2

    print()
    res = [0] * 3
    for i in range(3):
        res[i] = eq1[i] - eq2[i]
    
    A = res[0] / res[2]
    B = (eq1[0] - (eq1[2] * A)) / eq1[1]


def ahmed():
    print("enter number of points")
    n = int(input())
    x = []
    y = []
    for i in range(n):
        print(f"enter x{i}")
        a = float(input())
        x.append(a)
        print(f"enter y{i}")
        b = float(input())
        y.append(b)
    tt = 0
    # fit to exp
    for i in range(n):
        if (y[i] < 1) :
            print("not valid to fit to ae^(bx) or ab^x")
            tt = 1
            break
        y[i] = math.log(y[i])
    if (tt == 0):
        sum_x = 0
        sum_y = 0
        sum_xy = 0
        sum_x2 = 0
        for i in range(n):
            sum_x += x[i]
            sum_y += y[i]
            sum_xy += x[i] * y[i]
            sum_x2 += pow(x[i], 2)

        eq1[0] = sum_y
        eq1[1] = sum_x
        eq1[2] = n
        eq2[0] = sum_xy
        eq2[1] = sum_x2
        eq2[2] = sum_x

        AB()

        a = math.exp(A)
        b = B
        print("fit to (a * e^(b*X))")
        print(f"equation = {a} * e^( {b}X )")
        print()

        # to fit a*b^x
        print("to fit (a * b^(x))")
        b = math.exp(B)
        print(f"equation = {a} * {b}^( X )")
        print()

        # to fit a*x^b
        tt1 = 0
        sum_x = 0
        for i in range(n):
            if (x[i] < 1):
                print ("not valid to fit to ax^b")
                tt1 = 1
                break 
            x[i] = math.log(x[i])
            sum_x += x[i]

        if (tt1 == 0):
            eq1[1] = sum_x
            eq2[2] = sum_x
            AB()
            b = B
            a = math.exp(A)
            print("to fit (a * x^(b))")
            print(f"equation = {a} * X ^ ( {b} )")
            print()


eq1 = [0] * 3
eq2 = [0] * 3
A = 0
B = 0

t = 1
while t:
    ahmed()
    t -= 1