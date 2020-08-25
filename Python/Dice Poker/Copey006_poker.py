import dice         # calls the dice file 
import random       # calls the random function from the python standard library

def display_details():          # defines the display_details function
    print("File : Copey006_poker.py")       #combination of print statements
    print("Author : Ethan Copeland")        #used to display desired output
    print("Stud ID : 110285013")
    print("Email ID : Copey006")
    print("This is my own work as defined by the")
    print("University's Academic Misconduct Policy.")
display_details()               #calls the display_details funtion

play = "x"  #variable for play again loop, set to x so loop runs at least once
print("")
games = 0           #variable for counter number of games played
player_wins = 0     #3 variables to store the number of wins, loses and ties
dealer_wins = 0
draws = 0

while play != "y" and play != "n":      # loop that runs at least once to begin game
    play = input("Would you like to play dice poker [y|n]? ") # asks user to input play choice
    if play != "y" and play != 'n':     # statement verifys the input
        print("Please enter either 'y' or 'n'")
    elif play == 'n':       #checks to verify if the user does not want to play
        print("")
        print("No worries... another time perhaps... :)")
    
    print("")
    while play == "y" and play != "n":  # loops the entire game segment of code

        player_hand = [0, 0, 0, 0, 0]   # list of the players hand
        dealer_hand = [0, 0, 0, 0, 0]   # list of the dealers hand
        
        rank = 0        # stores the rank of the players hand as an integer so it can be compared to determine victor
        dealer_rank = 0     # stores the rank of the dealers hand as an integer so it can be compared to determine victor
    
        def roll_die():     # defines the roll_die function
            die = random.randint(1,6)   #generates a random value between 1-6 and stores it in 'die' variable
            return die       # returns the value stored in die

        def deal_hand():    # defines the deal_hand funtion
    
            index = 0       #stores the index value locally
    
            for index in range(len(player_hand)):   #a for loop that cycles through the player_hand list
                player_hand[index] = roll_die()     #updates the values in player_hand using the roll_die() funtion assigning a random integer between 1- 6
            print("Player's hand:")
            dice.display_hand(player_hand, 5)       #uses the dice file to display the player_hand
    
        deal_hand()         # calls the deal_hand function

        def rank_hand():    # defines the rank_hand function
            global rank     #access the variable rank globally so it can be used in other functions 
            i = 0               # stores an integer value locally
            x = 0               # stores an integer value locally
            die_count = [0, 0, 0, 0, 0, 0, 0]   #a list to store the number of times a value appears in the player_hand

            while i <= 4:       #a while loop to circle through an update the die_count list
                die_value = player_hand[i]      # assigns die_value to be equal to the player_hand element
                die_count[die_value] = die_count[die_value] + 1 #increases the value of an the element in die_count that matches the value rolled
                i += 1      # increases i by one to further the loop
    
            if 5 in die_count:      #checks to see if their is a '5' in die_count if so sets the rank to 6
                rank = 6
            elif 4 in die_count:    #checks to see if their is a '4' in die_count if so sets the rank to 5
                rank = 5
            elif 3 in die_count and 2 in die_count: #checks to see if their is a '3' and a '2' in die_count if so sets the rank to 4
                rank = 4
            elif 3 in die_count:    #checks to see if their is a '3' in die_count if so sets the rank to 3
                rank = 3
            elif die_count.count(2) == 2:   #checks to see if their is 2 '2s' in die_count if so sets the rank to 2
                rank = 2
            elif 2 in die_count:    #checks to see if their is a '2' in die_count if so sets the rank to 1
                rank = 1
            else:       #all else sets rank to 0 
                rank = 0
                
        rank_hand()     #calls the rank_hand() function

        def display_rank():     #defines the display_rank function
            global rank     #allows access the the global variable rank so it can take the value determined in rank_hand()

            if rank == 6:       # if statement that checks what the rank is equal to and displays the text version of the rank
                print("-- Player has Five of a kind")
            elif rank == 5:
                print("-- Player has Four of a kind")
            elif rank == 4:
                print("-- Player has a Full house")
            elif rank == 3:
                print("-- Player has Three of a kind")
            elif rank == 2:
                print("-- Player has Two pairs")
            elif rank == 1:
                print("-- Player has One pair")
            elif rank == 0:
                print("-- Player has Nothing special")
        
        def roll_dealer_die():      # defines the roll_dealer_die function
            dealer_die = random.randint(1,6)    #generates a random value between 1-6 and stores it in 'die' variable
            return dealer_die   # returns dealer_die value
        
        def dealers_hand():     # defines dealers_hand functionm(the functions name is plural, unlike the list)
    
            index = 0   
    
            for index in range(len(dealer_hand)):   #a for loop that cycles through the dealer_hand list
                dealer_hand[index] = roll_dealer_die()  #updates the values in dealer_hand using the roll_die() funtion assigning a random integer between 1- 6
                
            print("Dealer's hand:")
            dice.display_hand(dealer_hand, 5)       #calls the dice file and displays the dealer_hand
            
        dealers_hand()  # calls the dealers_hand function

        def rank_dealer_hand():     # defines rank_dealer_hand function 
            global dealer_rank          # allows access to dealer_rank to be global
            
            i = 0       #defines variables locally
            x = 0
            dealer_die_count = [0, 0, 0, 0, 0, 0, 0]    # creates a list name dealer_die_count

            while i <= 4:        #a while loop to circle through an update the die_count list
                die_value = dealer_hand[i]   # assigns die_value to be equal to the dealer_hand element
                dealer_die_count[die_value] = dealer_die_count[die_value] + 1       #increases the value of an the element in die_count that matches the value rolled
                i += 1  #increases i by 1 to further loop 
                
            if 5 in dealer_die_count:   #checks to see if their is a '5' in die_count if so sets the rank to 6
                dealer_rank = 6
            elif 4 in dealer_die_count: #checks to see if their is a '4' in die_count if so sets the rank to 5
                dealer_rank = 5
            elif 3 in dealer_die_count and 2 in dealer_die_count: #checks to see if their is a '3' and '2' in die_count if so sets the rank to 4
                dealer_rank = 4
            elif 3 in dealer_die_count: #checks to see if their is a '3' in die_count if so sets the rank to 3
                dealer_rank = 3
            elif dealer_die_count.count(2) == 2: #checks to see if their is 2 '2s' in die_count if so sets the rank to 2
                dealer_rank = 2
            elif 2 in dealer_die_count: #checks to see if their is a '2' in die_count if so sets the rank to 1
                dealer_rank = 1
            else:   # if none of these values are found then rank is set to 0
                dealer_rank = 0

        rank_dealer_hand()  # calls ranl_dealer_hand function

        def display_dealer_rank():      # defines the display_dealer_rank function
            global player_wins          # allows all these variables to be globally accessed 
            global dealer_wins
            global draws
            global games
            global dealer_rank

            if dealer_rank == 6:    # Matches the rank integer to the text form and displays it
                print("-- Dealer has Five of a kind")
            elif dealer_rank == 5:
                print("-- Dealer has Four of a kind")
            elif dealer_rank == 4:
                print("-- Dealer has a Full house")
            elif dealer_rank == 3:
                print("-- Dealer has Three of a kind")
            elif dealer_rank == 2:
                print("-- Dealer has Two pairs")
            elif dealer_rank == 1:
                print("-- Dealer has One pair")
            elif dealer_rank == 0:
                print("-- Dealer has Nothing special")
                
            print("")
            
            if rank > dealer_rank:  # Determines winner of the match and increases the wins draws or dealer_wins by 1
                print("** Player wins! **")
                print("")
                player_wins += 1
            elif rank < dealer_rank:
                print("** Dealer wins! **")
                print("")
                dealer_wins += 1
            else:
                print("** Draw! **")
                print("")
                draws += 1
            games += 1      # increases games played by 1
            print("")
        print("")
        display_rank()      # calls display_rank function
        display_dealer_rank()       #calls display_dealer_rank function
        

        die_count = [0, 0, 0, 0, 0, 0, 0]       # resets the die count and dealer_die_count so playing again does not return same result
        dealer_die_count = [0, 0, 0, 0, 0, 0, 0]
        play = input("Play again [y|n]? ")  # asks user to input whether they are going to play again
        while play != "y" and play != "n":      # valiates the input
            print("Please enter either 'y' or 'n'")
            print("")
            play = input("Play again [y|n]? ")
        
print("")           # Displays a game summary that is displayed after the user prompts 'n' to playing again 
print("")
print("Game Summary")
print("============")
print("You played", games, "games")
print(" | --> Games won: " , player_wins)
print(" | --> Games lost: ", dealer_wins)
print(" | --> Games drawn: ", draws)
print("")
print("Thanks for playing!")
print("")






