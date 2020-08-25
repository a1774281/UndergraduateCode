def determine_grade():
    testScore = int(input("Please enter the test score"))
    if testScore >= 0 and testScore <= 39:
        grade = "F2"
    elif testScore > 39 and testScore <= 49:
        grade = "F1"
    elif testScore > 49 and testScore <= 54:
        grade = "P2"
    elif testScore > 54 and testScore <= 64:
        grade = "P1"
    elif testScore > 64 and testScore <= 74:
        grade = "C"
    elif testScore > 74 and testScore <= 84:
        grade = "D"
    elif testScore > 84 and testScore <= 100:
        grade = "HD"
    print(grade)
    #return grade
    
determine_grade()
    
