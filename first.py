# name = input("what is your name:")
# print("length of your name is ",len(name))
# print("hello lakshya")
# a = int(input("enter the number"))
# print("the number is :",a)
# num  = int(input("enter the integer value"))
# vote = ["yess can do" , "no cannot"][num>=18]
# print(vote)
# list = [12.12,13,14,15,11,11,11,11,11]


# print(list.count(11))
# num1 = int(input("enter the first number"))
# num2 = int(input("enter the second number"))
# num3 = int(input("enter the third number"))

# if(num1 >= num2 and num1 >= num3):
#     print("num1 is greatest:",num1)

# elif(num2 >= num3 ):
#     print("num2 is the greatest:",num2)

# else:
#     print("num3 is the greatest:",num3)
# def average ():
#     a = int(input("enter the first number"))
#     b= int(input("enter the second number"))
#     c= int(input("enter the third number"))

#     avg = (a+b+c)/3
#     print(avg)
#     print("lakshya")
# average()
# def sum (a,b,c):
  
#    add = a+b+c
#    print(add)
   
   
# sum(8,18,13)
# for el in range(1,10):
      
#       print(el)
# for table in range(2,22,2):
#    print(table)
# for table in range(30 , 0 , -3):
#    print(table)

# n = 4
# fact = 1
# for i in range(1,n+1):
#    fact *= i
   
# print(fact)  
# n = int(input("enter the nmber :"))
# fact = 1
# i = 1
# while i<= n:
#    fact *= i
#    i += 1
   
# print(fact)

# basics
# question1.
# def greet(name):
#     name = "lakshya"
#     print("name =",name)
    
# greet("lakshya")

# question2.
# def summ ():
#     a = int(input("enter the value of a : "))
#     b = float(input("enter the value of b : "))
#     sum = a + b
#     print("sum : ", sum)
    
# summ()

# question3.
# def check_even ():
#     n = int(input("enter the value of n :"))
#     if(n % 2 == 0):
#         print("n is even" , n)
    
#     elif(n % 2 != 0):
#         print("odd number",n)
#     else:
#         print("number is float or invalid")
        
# check_even()

# question4.
# def squarelist():
#     n = 10
#     for lst in range(1,n+1):
#         print(lst*lst)
        
# squarelist()

# question5.
# def factorial():
#     n = int(input("enter the value of n :"))
#     fact = 1
#     for i in range(1,n+1):
#         fact *= i
        
#     print(fact)
        
# factorial()

# intermediate:
#     question1.
# def count_vowel(name):
#     name = "lakshya"
#     count = 0
#     for i in name :
#         if(i == "a" or i == "e" or i == "i" or i == "o" or i == "u"):
#             count = count + 1
            
#     print("the count in the name is :",count , name)

# count_vowel("lakshya")

# question2.
# def reverse_words(name):
#     name = "lakshya"
    
#     print (name[::-1])
    
# reverse_words("lakshya")
    
# name = input("enetr the name")
# name_list = list(name)

# name_list.reverse()
# print(name_list)
# print("".join(name_list))

# quetsion3.
# def check_palindrome(name):
#     name  = ["lakshya"]
#     if name == name.reverse():
#         print(name , "name is palindrome :" )
#     else:
#         print(name , "name is not palindrome :")
        
# check_palindrome("lakshya")

# queestion4.
def fibonacci():
    n = int(input("enter the number :"))
    a = 0
    b = 1
    for i in range(1,n+1):
        print(a)
        c = a + b
        a = b
        b = c       
        
fibonacci()