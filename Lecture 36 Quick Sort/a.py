info = {
    "books":[],
    "borrowers":[],
    "checkOuts":[]
}

def take_Input(): 
    inp = "as"
    while inp != "EndOfInput":
        inp = input()
        if inp == "Books":
            info["books"].append(inp)
        elif inp == "Borrowers":
            info["borrowers"].append(inp)
        elif inp == "Checkouts":
            info["checkOuts"].append(inp)

# take_Input()
inp = info()
count = 0
while inp != "EndOfInput":
    if count != 0:
        inp = input()
print(input)

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