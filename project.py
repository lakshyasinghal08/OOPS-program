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
import random
import string

pass_len = 8
charval = string.ascii_letters + string.digits + string.punctuation

password = "".join([random.choice(charval) for i in range(pass_len)])

# password = ""
# for i in range(pass_len):
#     password  += random.choice(charval)
    
print("your password is :" , password)