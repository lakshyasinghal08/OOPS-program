# number guessing 
# import random

# target = random.randint(1 ,100)

# while True :
#     userchoice = int(input("guess the number or Quit(Q):"))
    
#     if(userchoice  == "Q"):
#         break
#     userchoice = int(userchoice)
    
#     if(userchoice  == target):
#         print("success -- you won the game :")
#         break
    
#     elif(userchoice  < target):
#         print("your guess is too small guess a bigger number :")
        
#     else:
#         print("your guess is to big guess a smaller number :")
        
# print("----GAME OVER----")

# random password
# import random
# import string

# pass_len = 8
# charval = string.ascii_letters + string.digits + string.punctuation

# password = "".join([random.choice(charval) for i in range(pass_len)])

# password = ""
# for i in range(pass_len):
#     password  += random.choice(charval)
    
# print("your password is :" , password)

# Simple calculator
# class calculator:
#   def __init__(self , num1 , num2): 
#     self.num1  = num1
#     self.num2  =num2
    
#   def add(self ):
#     addition = self.num1 + self.num2
#     print("addition of two numbers :", addition)
    
#   def sub(self):
#     substraction  = self.num1 - self.num2
#     print("sunstraction of two numbers is :", substraction)
    
#   def mul(self):
#     mutiply  = self.num1 * self.num2
#     print("multiplication of two numbers is :", mutiply)
    
#   def div(self):
#     division  = self.num1 / self.num2
#     print("division of two numbers is :", division)
    
#   def mod(self):
#     modulus = self.num1 % self.num2
#     print("sunstraction of two numbers is :", modulus)
    
# c1 = calculator(22 , 12)
# c1.add()
# c1.sub()
# c1.mul()
# c1.div()
# c1.mod()

# dice roller
# import random
# import time
    
# def roll_dice():
#      dice_face = random.randint(1,6)
#      print("rolling the dice...")
#      time.sleep(1)
     
#      print("your rolled dice..")
#      return dice_face
# def main():
#       print("welcome! to the dice roller simulator : ")
# roll_count = 0
# history = [ ]
      
# while True :
#         user_input  = input("press enter to roll the dice and q for quit the game  :")
#         if(user_input == "q"):
#             print("thanks for playing :")
#             print("your dice rolls :", roll_count)
#             print("your dice rolling history is  :" , history)
#             break
#         else:
#             result = roll_dice()
#             history.append(result)
#             print("result is ", result)
#             roll_count += 1
#             print("----GAME OVER----")
        
# main()

# Quiz app
questions = [
    {
        "question": "What is the capital of India?",
        "options": ["Mumbai", "Delhi", "Bangalore", "Chennai", "Kolkata"],
        "answer": "Delhi"
    },
    {
        "question": "What is the capital of Rajasthan?",
        "options": ["Jaipur", "Bhilwara", "Karauli", "Ajmer", "Alwar"],
        "answer": "Jaipur"
    },
    {
        "question": "Who has more centuries in international cricket?",
        "options": ["Virat", "Dhoni", "Rohit", "Dhawan", "Bumrah"],
        "answer": "Virat"
    },
    {
        "question": "Which number is largest in given options?",
        "options": ["98", "99", "120", "28", "97"],
        "answer": "120"
    },
    {
        "question": "Who is the largest mammal in the world?",
        "options": ["Lion", "Blue Whale", "Elephant", "Giraffe", "Zebra"],
        "answer": "Blue Whale"
    }
]

score = 0

print("Welcome to the quiz game:\n")

for i, q in enumerate(questions, start=1):
    print(f"Q{i}: {q['question']}")
    for idx, option in enumerate(q['options']):
        print(f"{idx}. {option}")
    
    try:
        user_input = int(input("Enter your option (0 to 4): "))
        if q['options'][user_input].lower() == q['answer'].lower():
            print(" Answer is correct!\n")
            score += 1
        else:
            print(f" Wrong! Correct answer is: {q['answer']}\n")
    except (ValueError, IndexError):
        print(" Invalid input. Skipping question.\n")

print(" Quiz Completed!")
print(f"Your score: {score}/{len(questions)}")
percentage = (score / len(questions)) * 100
print(f"Your percentage: {percentage:.2f}%")