from socket import*
s = socket()
s.bind(('0.0.0.0', 8888))
s.listen()
s, addr = s.accept()

print(addr)
print('1关机，2重启，3看看')

choice = input('选择要做的事：')
s.send(choice.encode())

