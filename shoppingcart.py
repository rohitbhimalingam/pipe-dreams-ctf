x=input("what item would you like to buy:")
y=float(input("what is the price of each item: "))
z=int(input("how many would you like: "))

total = y * z

if total>0:
    print((f"You have bought {z} {x}s"))
else:
    print((f"You have bought {z} {x}"))

print(f"Total: ${total:.2f}")
    