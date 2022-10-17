#skończone ale rozwiązanie nie do końca zgodne z poleceniem bo nie ma pętli for/else
def main():
    
    for n in range(2,100):
    
        if n == 2:
            p = True
        
        elif n % 2 == 0: 
            p = False
        
        else:
            p = True
            
            for i in range(3, int(n*0.5)):
                
                if n % i == 0:
                   p = False
                
        if p:
            print(n)

if __name__ == "__main__":
    main()
