x=input("what is the answer to the Great Question of Life, the Universe and Everything?").strip().lower()

if x in ("42", "4 2" , "forty two", "forty-two"):
#Asked cs50 duck and it suggested to use "in" for a tuple
    print("yes")
else:
    print("no")

