print('Hello World')#!

num1=int(input())#2
num2=int(input())
print(num1+num2)

num3=int(input())#3
num4=int(input())
print(num3*2 + num4*2)

num5=int(input())#4
print(num5*1,8+32)

num6=int(input())#5
print(num6/1000)

num7=int(input())#6
for i in range(1,11):
    print(num7*i)

num8=int(input())#7
s=1
for i in range (1,num8+1):
    s*=i
print(s)

num9=int(input())#8
count=0
for i in range(2, int(num9 ** 0.5) + 1):
    if num9%i==0:
        count=1
        break
if count == 1:
    print('Не простое')
else:
    print('Простое')

num10=int(input())#9
if num10%4==0:
    print('Високосный')
else:
    print('Не високосный')

words=input()#10
print(words[::-1])

words1=input()#11
k=0
for i in words1:
    if i in 'АаУуОоЫыИиЭэЯяЮюЕеЁё':
        k+=1
print(k)



