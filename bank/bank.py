x=input("Greeting: ").strip().lower()
if x.startswith("hello"):
#.startswith checks if the specified word/letter/number is at the start of the string
    print("$0")
elif x.startswith("h"):
    print("$20")

else: print("$100")
