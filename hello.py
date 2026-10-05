def main():
    x=int(input("whats x?"))
    if is_even(x)==True:
        print("even")
    else:
        print("odd")

def is_even(n):
    return True if n%2==0 else return False

main()
