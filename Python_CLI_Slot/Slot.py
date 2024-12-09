import random

def shuffleSymbols(matrix):
    symbolOptions = [' A', ' K', ' Q', ' ♠', ' ♥', ' ♣', ' ♦', ' J', '10', ' ƒ']
    for i in range(0, len(matrix)):
        for n in range(0, len(matrix)):
            rand_seed = random.seed()
            rand_num = random.randint(0, 218375187)
            if rand_num % 327 == 0 or rand_num % 568 == 0:
                matrix[i][n] = symbolOptions[8]
            else:
                matrix[i][n] = symbolOptions[rand_num % 9]
    return matrix



def printMatrix(bet):

    topLeft, topMiddle, topRight = 'A', 'A', 'A'
    midLeft, midMiddle, midRight = 'A', 'A', 'A'
    botLeft, botMiddle, botRight = 'A', 'A', 'A'
    
    matrix = [[topLeft, topMiddle, topRight],
              [midLeft, midMiddle, midRight],
              [botLeft, botMiddle, botRight]]
    
    shuffleSymbols(matrix)

    print("============================================")
    print(f"            == {matrix[0][0]} == {matrix[0][1]} == {matrix[0][2]} ==            ")
    print(f"            == {matrix[1][0]} == {matrix[0][1]} == {matrix[1][2]} ==            ")
    print(f"            == {matrix[2][0]} == {matrix[2][1]} == {matrix[2][2]} ==            ")
    print("============================================")

    return None #Needs to return bet * ways * multi


def rollSlot(bet):
    win = printMatrix(bet)



    return win

def printStart():
    print("============================================")
    print("============ Welcome To PySlot =============")

def main():
    money = 100.0
    printStart()
    while(True): 
        userInput = input("Would you like to roll the slot? (y/n)")
        userInput.lower()
        if userInput == 'y':
            rollSlot(money)
        else:
            break


main()