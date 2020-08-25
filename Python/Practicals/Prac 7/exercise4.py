#
# Problem Solving and Programming - Debugging exercise
#


MAX_VERSES = 100     # maximum number of verses
numberOfVerses = 0   # users choice of number of verses 
currentVerseNo = 0   # stores current verse number      
answer = 0           # user's response                  


# Prompt and read whether the user wishes to sing a song.
answer = input("Would you like to sing a song? ")


# While user continues to enter yes. 
while answer == 'Y' or answer == 'y':


    # Prompt and read how many verses the user wishes to sing.  
    numberOfVerses = int(input("\nHow many verses of the song do you wish to sing? "))
    
    # Validate input. Can't be less than or equal to zero or grater than 100. 
    while numberOfVerses <= 0 or numberOfVerses > MAX_VERSES:
        print("Not possible my friend ... \n")
        numberOfVerses = int(input("\nHow many verses of the song do you wish to sing? "))


    # Always start at 100 bottles of beer on the wall. 
    currentVerseNo = MAX_VERSES

    # Loop number of verses times.
    for k in range(numberOfVerses):

       # Display verse. 
       if currentVerseNo == 1:
         print(currentVerseNo, "bottle of beer on the wall")
         print(currentVerseNo, "bottle of beer")
         print("If one of those bottles should happen to fall")
         print("No bottles of beer on the wall!!\n")
       else:
         print(currentVerseNo, "bottles of beer on the wall")
         print(numberOfVerses, "bottles of beer")
         print("If one of those bottles should happen to fall")

         currentVerseNo = currentVerseNo - 2
       
         if currentVerseNo == 1:
            print(currentVerseNo, "bottle of beer on the wall\n\n")
         else:
            print(currentVerseNo, "bottles of beer on the wall\n\n")

   
# Prompt again. 
answer = input("\nThat was fun! Would you like to sing again? ")






