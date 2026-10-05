def main():
    dollars = dollars_to_float(input("How much was the meal? ").replace("$", ""))
    percent = percent_to_float(input("What percentage would you like to tip? ").replace("%", ""))
    x= float(dollars)
    y= float(percent)
    tip = x * (y/100)
    print(f"Leave ${tip:.2f}")


def dollars_to_float(d):
    return(d)


def percent_to_float(p):
    return(p)


main()
