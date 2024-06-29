import os
path ="E:/C++ DSA"
list = os.listdir(path)

list = [i for i in list if i != "main.py"]


def is_exe(file_path):
    # Check if the file exists
    if not os.path.isfile(file_path):
        return False
    _, file_extension = os.path.splitext(file_path)
    return file_extension.lower() == '.exe'

for i in list:
    path2 = os.path.join(path,i)
    l1 = os.listdir(path2)
    
    for j in l1:
        new_path = os.path.join(path2,j)
        if os.path.isdir(new_path):
            l2 = os.listdir(new_path)
            for k in l2:
                np = os.path.join(new_path,k)
                
                if os.path.isdir(np):
                    l3 = os.listdir(np)

                    for l in l3:
                        np2 = os.path.join(np,l)

                        if is_exe(np2):
                            os.remove(np2)
                if is_exe(np):
                    os.remove(np)
            
        if is_exe(new_path):
            os.remove(new_path)


print("completed")

print("this is my file remover program it is good hai na bro")