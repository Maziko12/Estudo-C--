import string
import random
print('=' * 20, 'Gerador de senhas', "-" * 20)
pedidoUsuario = int(input("Digite o número de caractéres, no mínimo 8 e no máximo 100: "))
keygenerator = (random.sample(string.whitespace, pedidoUsuario) for i in range(pedidoUsuario))
print(f"A sua senha é: \n  {keygenerator}") if pedidoUsuario > 8 and pedidoUsuario < 100 else print('Mensagem inválida!')