#skończone
def common_elements(sequence_1, sequence_2):
    return list(set([element_1 for element_1 in sequence_1 for element_2 in sequence_2 if element_1 == element_2]))

def main():
    (common_elements([1,2,3,4,5,6], (1,3,5,7)))

if __name__ == "__main__":
    main()
