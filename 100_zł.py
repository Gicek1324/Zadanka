#skończone
def main():
    
    s = 0
    for t in range(11):
        
        for f in range(21):
            
            for x in range(51):
                
                if t * f * x == 100:
                    s += 1
                    
    print(s)

if __name__ == "__main__":
    main()
