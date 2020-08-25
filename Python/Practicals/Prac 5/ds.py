table_number = 1
counter = 1
while table_number <= 12:
    print('\n===== ',table_number,'x table =====\n',sep= '')
    while counter <= 12:
        print(counter,'x',table_number,'=',counter*table_number)
        counter = counter + 1
        counter = 1
        table_number = table_number + 1
