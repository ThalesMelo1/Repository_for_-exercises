print('Escreva 3 numeros')

lado1 = int(input('Primeiro lado: '))
lado2 = int(input('Segundo lado: '))
lado3 = int(input('Terceiro lado: '))

if((lado1 + lado2 < lado3)|(lado2 + lado3 < lado1)|(lado1 + lado3 < lado2)):
    print('Triângulo inválido. Escreva de novo')
    lado1 = int(input('Primeiro lado: '))
    lado2 = int(input('Segundo lado: '))
    lado3 = int(input('Terceiro lado: '))

if((lado1 == lado2)&(lado1==lado3)):
    print('O triângulo é equilátero')
elif((lado1 == lado2)|(lado1 == lado3)|(lado2 == lado3)):
    print('O triangulo é isósceles')
else: 
    print('O trianhulo é escaleno')        