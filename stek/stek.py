stek=[]
check=1
print('Введите элементы. Для завершения ввода, введите "0"')
while check != 0:
    check=int(input('Введите элемент: ').strip())
    stek.append(check)
stek.pop()
print(f'Стек:{stek}')
exclude = int(input('Введите число элементов, которые вы хотите исключить: '))
for i in range(exclude):
    print(stek.pop())
print(f'Стек:{stek}')



