import random

#This function uses a seed to change vars in the matrix.
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

#This function calculates the win for a given roll matrix.
def payOut(matrix):
    totalWin = 0
    for i in range(0, len(matrix)):
        if matrix[i][0] == matrix[i][1]:
            if matrix [i][1] == matrix[i][2]:
                totalWin += 250
            totalWin += 150
        if i == 0:
            if matrix[i][0] == matrix[2][1]:
                if matrix[i][0] == matrix[1][2]:
                    totalWin += 250
                totalWin += 150
        if i == 1:
            if matrix[i][0] == matrix[0][1]:
                totalWin += 150
                if matrix[i][0] == matrix[1][1]:
                    totalWin += 250
        if i == 2:
            if matrix[i][0] == matrix[0][1]:
                totalWin += 150
                if matrix[i][0] == matrix[i][2]:
                    totalWin += 250
        for token in matrix[i]:
            if token == ' ƒ':
                totalWin *= 1.5
    return totalWin

#Here we print the matrix of each reel to show what the player rolled.
def printMatrix(bet):

    

    topLeft, topMiddle, topRight = 'A', 'A', 'A'
    midLeft, midMiddle, midRight = 'A', 'A', 'A'
    botLeft, botMiddle, botRight = 'A', 'A', 'A'
    
    matrix = [[topLeft, topMiddle, topRight],
              [midLeft, midMiddle, midRight],
              [botLeft, botMiddle, botRight]]
    
    shuffleSymbols(matrix)
    win = payOut(matrix)

    print("============================================")
    print(f"            == {matrix[0][0]} == {matrix[0][1]} == {matrix[0][2]} ==            ")
    print(f"            == {matrix[1][0]} == {matrix[0][1]} == {matrix[1][2]} ==            ")
    print(f"            == {matrix[2][0]} == {matrix[2][1]} == {matrix[2][2]} ==            ")
    print("============================================")
    print(f"==================={win}======================")
    

    return  win #Needs to return bet * ways * multi


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