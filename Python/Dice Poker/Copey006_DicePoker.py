import dice
import random

def display_details():
    print("File : Copey006_poker.py")
    print("Author : Ethan Copeland")
    print("Stud ID : 110285013")
    print("Email ID : Copey006")
    print("This is my own work as defined by the")
    print("University's Academic Misconduct Policy.")
display_details()
print("")
player_hand = []
index = 0
i = 0
x = 0
while index <= 4:
    player_hand.append(random.randint(1,6))
    index += 1
    
print("Player's hand:")
dice.display_hand(player_hand, 5)

die_count = [0, 0, 0, 0, 0, 0, 0]

while i <= 4:
    die_value = player_hand[i]
    die_count[die_value] = die_count[die_value] + 1
    i += 1

rank = 0
while x <= 6:
    if 5 in die_count:
        rank = 6
    elif 4 in die_count:
        rank = 5
    elif 3 in die_count and 2 in die_count:
        rank = 4
    elif 3 in die_count:
        rank = 3
    elif die_count.count(2) == 2:
        rank = 2
    elif 2 in die_count:
        rank = 1
    else:
        rank = 0
    x += 1

if rank == 6:
    print("Five of a Kind!")
elif rank == 5:
    print("Four of a Kind!")
elif rank == 4:
    print("Full House!")
elif rank == 3:
    print("Three of a Kind!")
elif rank == 2:
    print("Two Pairs")
elif rank == 1:
    print("One Pair")
else:
    print("Nothing Special")

dealer_hand = []
index = 0
i = 0
x = 0
while index <= 4:
    dealer_hand.append(random.randint(1,6))
    index += 1

print("")
print("Dealer's hand:")
dice.display_hand(dealer_hand, 5)

dealer_count = [0, 0, 0, 0, 0, 0, 0]

while i <= 4:
    dealer_value = dealer_hand[i]
    dealer_count[dealer_value] = dealer_count[dealer_value] + 1
    i += 1

dealer_rank = 0
while x <= 6:
    if 5 in dealer_count:
        dealer_rank = 6
    elif 4 in dealer_count:
        dealer_rank = 5
    elif 3 in dealer_count and 2 in dealer_count:
        dealer_rank = 4
    elif 3 in dealer_count:
        dealer_rank = 3
    elif dealer_count.count(2) == 2:
        dealer_rank = 2
    elif 2 in dealer_count:
        dealer_rank = 1
    else:
        dealer_rank = 0
    x += 1

if dealer_rank == 6:
    print("Five of a Kind!")
elif dealer_rank == 5:
    print("Four of a Kind!")
elif dealer_rank == 4:
    print("Full House!")
elif dealer_rank == 3:
    print("Three of a Kind!")
elif dealer_rank == 2:
    print("Two Pairs")
elif dealer_rank == 1:
    print("One Pair")
else:
    print("Nothing Special")

if rank > dealer_rank:
    print("** Player wins! **")
elif rank < dealer_rank:
    print("** Dealer wins! **")
else:
    print("** Draw! **")

