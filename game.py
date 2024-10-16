#Rock , Paper and Scissors game 
import random

print("....Welcome to Rock Paper Scissors game....")
print("Enter your choice: \n 1. Rock \n 2. Paper \n 3. Scissors")

user_choice = int(input("Your choice: "))

computer_choice = random.randint(1, 3)

print(f"Your Choice: {user_choice}")
print(f"Computer's Choice: {computer_choice}")

if computer_choice == user_choice:
    print("...It's a tie...")

elif (computer_choice == 1 and user_choice == 3) or (computer_choice == 2 and user_choice == 1) or (computer_choice == 3 and user_choice == 2):
    print("Computer Wins!")

else:
    print("You win!")
