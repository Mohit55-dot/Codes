data = input("Enter today's date:")
mode = input("rate you mood out of 10:")
journal = input("Enter you thoughts about today:\n")


with open(f"{data}.txt","w") as file:
     file.write(mode+ "\n")
     file.write(journal)



