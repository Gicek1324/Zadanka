#skończone
def translate_to_words(input_number):

    number_to_word = {
        "0": "zero",
        "1": "jeden",
        "2": "dwa",
        "3": "trzy",
        "4": "cztery",
        "5": "pięć",
        "6": "sześć",
        "7": "siedem",
        "8": "osiem",
        "9": "dziewięć",}
       
    result = ""
    
    for digit in input_number:
        if digit in number_to_word:
            result += number_to_word[digit] + " "

    return (result)

def main():
    print(translate_to_words(input("Podaj liczbe: ")))


if __name__ == "__main__":
    main()
