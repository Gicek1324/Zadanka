#skończone
import random

x = random.randint(1,10)
z = 0

while z < 3:
    z += 1
    y = int(input("spróbuj zgadnąć liczbę od 1 do 10 "))
    
    if y > x:
        print("mniej")
        
    elif y < x:
        print("więcej")
        
    else:
        print("gratulacje zgadłeś")
        break
    
else:
    print("nie udało ci się zgadnąć")
