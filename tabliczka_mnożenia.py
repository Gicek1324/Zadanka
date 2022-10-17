#skończone
def main():
    
    print("{:4s}".format("    |"), end="")
    
    for x in range(1,11):
        print("{:4d}".format(x), end="")
        
    print("")
    print("---------------------------------------------")
    
    for r in range(1,11):
        print("{:4d}".format(r), "|" ,sep="", end="")
        
        for c in range(1,11):
            print("{:4d}".format(c*r), sep="", end="")
            
        print("")
        
        
if __name__ == "__main__":
    main()
