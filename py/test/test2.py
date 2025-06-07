#x = 97
#print(90 <= x <= 100)

score = int(input())
if(0 <= score <= 59):
    print("E")
elif(60 <= score <= 69):
    print("D")
elif(70 <= score <= 79):
    print("C")
elif(80 <= score <= 89):
    print("B")
elif(90 <= score <=100):
    print("A")
else:
    print("Error")
