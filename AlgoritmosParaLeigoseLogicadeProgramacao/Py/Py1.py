c = input("Enter your ID: ")
h = int(input("How many hours have you worked in this week?\n"))
if h > 50:
    print(f"Total gain this week: U${50*10+((h-50)*20)}.\nYou earned U${(h-50)*20} dollars of overtime.")
else:
    print(f"Total gain in this week: {h*10}")