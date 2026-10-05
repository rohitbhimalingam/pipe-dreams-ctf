expression=input("Expression:").strip()
x, y, z = expression.split(" ")
x=float(x)
z=float(z)
if y==("+"):
    ans1 = x + z
    print(ans1)
elif y==("-"):
    ans2= x - z
    print(ans2)
elif y==("*"):
    ans3= x * z
    print(ans3)
elif y==("/"):
    ans3= x / z
    print(ans3)
