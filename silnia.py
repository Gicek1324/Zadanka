#skończone
def main():
    
    while True:
        n = int(input("Podaj liczbę:"))
    
        if n == 0 or n == 1:
            break
        
        else:
            s = 1
            
            for n in range(1, n + 1):
                s *= n
                
        print(s)

if __name__ == "__main__":
    main()
