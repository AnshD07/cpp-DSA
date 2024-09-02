info = {
    "books":[],
    "borrowers":[],
    "checkOuts":[]
}

def take_Input(): 
    inp = input()
    if inp == "Books": 
        while True:
            inp = input()
            if inp == "Borrowers":
                break
            info["books"].append(inp)

    if inp == "Borrowers": 
        while True:
            inp = input() 
            if inp == "Checkouts":
                break
            info["borrowers"].append(inp)

    if inp == "Checkouts": 
        while True:
            inp = input()
            if inp == "EndOfInput":
                break
            info["checkOuts"].append(inp)


def user_checkOut():
    temp = []
    for i in info["checkOuts"]:
        check_username = i.split("~")[0]
        for j in info["borrowers"]:
            borro_username = j.split("~")[0]
            if borro_username == check_username:

                due_date = i.split("~")[2]
                full_name = j.split("~")[1]
                accession_num = i.split("~")[1]

                data = [due_date ,full_name , accession_num]
                temp.append(data)
    return temp


def final_merging(user): 
    for small_list in user:
        user_accession = small_list[2]
        for j in info["books"]:
            book_accession = j.split("~")[0]  
            if user_accession == book_accession: 
                small_list.append(j.split("~")[1])
    return user

take_Input()
half_merg = user_checkOut() 
result  = final_merging(half_merg)
result.sort()

for i in result:
    print(f"{i[0]}~{i[1]}~{i[2]}~{i[3]}")

'''
Books
APM-001~Advanced Potion-Making
GWG-001~Gadding With Ghouls
APM-002~Advanced Potion-Making
DMT-001~Defensive Magical Theory
DMT-003~Defensive Magical Theory
GWG-002~Gadding With Ghouls
DMT-002~Defensive Magical Theory
Borrowers
SLY2301~Hannah Abbott
SLY2302~Euan Abercrombie
SLY2303~Stewart Ackerley
SLY2304~Bertram Aubrey
SLY2305~Avery
SLY2306~Malcolm Baddock
SLY2307~Marcus Belby
SLY2308~Katie Bell
SLY2309~Sirius Orion Black
Checkouts
SLY2304~DMT-002~2019-03-27
SLY2301~GWG-001~2019-03-27
SLY2308~APM-002~2019-03-14
SLY2303~DMT-001~2019-04-03
SLY2301~GWG-002~2019-04-03
EndOfInput
'''