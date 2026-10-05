def main():
    time = input("What time is it? ")
    t = convert(time)
    hours, minutes = time.split(":")
    if float(t) >= 7 and float(t) <= 8:
        print("breakfast time")
    elif float(t) >= 12 and float(t) <= 13:
        print("lunch time")

    elif float(t) >= 18 and float(t) <= 20:
        print("dinner time")


def convert(time):
    hours, minutes = time.split(":")
    return float(hours)+float(minutes) / 60


if __name__ == "__main__":
    main()
