# import numpy

# a = '''
# "'111'"
# '''
# print(f"{a}")

# #eval 去掉字符串两端的双引号
# a = input("a = ?")
# # 


x = input()
sum = 0
x = (int)x
while (x != 0):
    temp = x%10
    sum += temp
    x/=10

print(sum)