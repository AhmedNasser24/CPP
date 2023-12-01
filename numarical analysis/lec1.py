import  math

def fx(x):
    return pow(x, 2) - x - 3 

def menu():
    print("choose from following menu :")
    print("press 1 for using by section method")
    print("press 2 for using secant method")
    print("press 0 to exit")
    choose = int(input())
    return choose

a, b, c, x0, x1, x2 = 0, 0, 0, 0, 0, 0
print("Hello DR MOANIS, this program implements the section method and secant method.")
print("Press 1 to get the positive root and 2 to get the negative root.")
k = int(input())
if k == 2:
    k = -1

if fx(0) > 0:
    i = 1 * k
    while True:
        if fx(i) < 0:
            a = i - k
            b = i
            c = (a + b) / 2
            break
        i += k
elif fx(0) < 0:
    i = 1 * k
    while True:
        if fx(i) > 0:
            a = i - k
            b = i
            c = (a + b) / 2
            break
        i += k

print(f"intervel time : [ {a} , {b} ]")
x0 = a
x1 = b

# by section method
if fx(0) < 0:
    for i in range(10):
        if fx(c) < 0:
            a = c
            c = (a + b) / 2
        elif fx(c) > 0:
            b = c
            c = (a + b) / 2
else:
    for i in range(9):
        if fx(c) > 0:
            a = c
            c = (a + b) / 2
        elif fx(c) < 0:
            b = c
            c = (a + b) / 2

# secant method
v = [x1]
for i in range(100):
    if fx(x1) - fx(x0) == 0 or x1 - x0 == 0:
        break
    x2 = x1 - ((fx(x1) * (x1 - x0)) / (fx(x1) - fx(x0)))
    v.append(x2)
    x0 = x1
    x1 = x2

while True:
    choose = menu()
    print("\n")    
    if choose == 1:
        print("by using by section method :")
        print(f"root = {c}")
    elif choose == 2:
        print("by using secant method :")
        print(f"root = {x2}")
    elif choose == 0:
        print("thank you DR MOANIS")
        break
    else : 
        print("not valid , please choose from menu")
    print("\n")    