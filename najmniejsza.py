#skończone
n = int(input("podaj dowolną liczbe:"))

for i in range(9):
    x = int(input("podaj dowolną liczbe:"))
    
    if x < n:
        n = x
        
print("najmniejsza liczba wynosi:", n)
