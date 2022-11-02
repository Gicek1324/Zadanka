#skończone
def calc_avg_var(input_list):
    average = 0 
    variance = 0 
  
    
    for n in input_list:
        average += n / len(input_list)
        
    for i in input_list:
        variance +=(average-i)**2 / len(input_list)
  
    return(average,variance)

def main():
    solution_1 = calc_avg_var([3,3,3,3])
    solution_2 = calc_avg_var([5,6,7,8,9])
    
    print("Średnia wynosi:", solution_1[0])
    print("Wariancja wynosi:", solution_1[1])
    print("")
    print("Średnia wynosi:", solution_2[0])
    print("Wariancja wynosi:", solution_2[1])
    
if __name__ == "__main__":
    main()
