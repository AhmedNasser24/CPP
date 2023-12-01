import math
from collections import deque

def menu():
    print("choose from following menu : \n")
    print("press 1 for using lagrange method ")
    print("press 2 for using newton forward method")
    print("press 3 for using newton backward method")
    print("press 0 to exit")
    d = int(input())
    return d

print("this program is to process la granch , newton forward or backward method \n")

n = int(input("please, enter number of points: "))
x1 = []
y1 = []

for i in range(n):
    x = float(input(f"enter value of x{i}: "))
    x1.append(x)
    y = float(input(f"enter value of y{i}: "))
    y1.append(y)


while True :
    t = int(input("if you want to enter value of x to get value of y press 1 \nif you want to enter value of y to get x press 2 \n"))
    x = 0
    y = 0
    if t == 1:
        x = float(input("enter x: "))
        break 
    elif ( t == 2 ):
        y = float(input("enter y: "))
        x1, y1 = y1, x1
        x, y = y, x
        break 
    print("not valid , choose 1 or 2 ")

cnt = 1
m = n
forward_newton = y1.copy()
back_newton = deque([y1[-1]])
tt = 0 
while m:
    for i in range(n - 1, cnt - 1, -1):
        if (x1[i] - x1[i-cnt] == 0):
            tt = 1 
            break 
        forward_newton[i] = (forward_newton[i] - forward_newton[i-1]) / (x1[i] - x1[i-cnt])
        if i == n - 1:
            back_newton.appendleft(forward_newton[i])
    if (tt == 1) : 
        break 
    cnt += 1
    m -= 1

d = menu()

while d:
    if (tt == 1) :
        break 
    y = 0
    if d == 1:
        for i in range(n):
            num = 1
            den = 1
            for j in range(n):
                if j == i:
                    continue
                num *= (x - x1[j])
                den *= (x1[i] - x1[j])
            y += (num / den) * y1[i]

        if t == 1:
            print(f"at x = {x}, y = {y}")
        else:
            print(f"at y = {x}, x = {y}")
    elif d == 2:
        for i in range(n):
            product = 1
            for j in range(i):
                product *= (x - x1[j])
            y += forward_newton[i] * product

        if t == 1:
            print(f"at x = {x}, y = {y}")
        elif t == 2:
            print(f"at y = {x}, x = {y}")
    elif d == 3:
        for i in range(n):
            product = 1
            for j in range(n - 1, i, -1):
                product *= (x - x1[j])
            y += back_newton[i] * product

        if t == 1:
            print(f"at x = {x}, y = {y}")
        elif t == 2:
            print(f"at y = {x}, x = {y}")
    elif d != 0 :
        print ("not valid , choose from menu ")

    d = menu()
if (t==1):
    print("error : not valid to enter the same value twice or more  ")
    print("try again")
print("\nThank you DR MOANIS \n")