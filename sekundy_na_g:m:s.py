#skończone
i = int(input("podaj liczbę sekund: "))

h = i // 3600
m = (i % 3600) // 60
s = (i % 3600) % 60

print(h,":",m,":",s, sep = "" )
