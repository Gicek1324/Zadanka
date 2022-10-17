#skończone
def main():
    
    l = int(input("Podaj liczbe poziomów: "))
    
    for c in range(1, l + 1):
        
        for i in range(l - c ):
            print(" ", end="")
            
        for i in range(2 * c - 1):
            print("*", end="")
            
        print("")
        
if __name__ == "__main__":
    main()
