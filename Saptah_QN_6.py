#Name-Chandan.H
#email id-chandanhariharan@gmail.com
#     CODE WRITTEN IN PYTHON

n = int(input())
class Student:

    ar=[[["Student ID","1"],["Name","John"],["Class","12"],
         ["Section","A"],["Total Marks","490"]],
        [["Student ID", "2"], ["Name", "Johnson"], ["Class", "11"],
         ["Section", "B"], ["Total Marks", "480"]],
        [["Student ID", "3"], ["Name", "Jay"], ["Class", "12"],
         ["Section", "A"], ["Total Marks", "470"]],
        [["Student ID", "4"], ["Name", "July"], ["Class", "12"],
         ["Section", "B"], ["Total Marks", "460"]],
        [["Student ID", "5"], ["Name", "Joe"], ["Class", "10"],
         ["Section", "C"], ["Total Marks", "450"]]]
    if (n == 0):
        print(ar[0])
    elif (n == 1):
        print(ar[1])
    elif (n == 2):
        print(ar[2])
    elif (n == 3):
        print(ar[3])
    elif (n == 4):
        print(ar[4])
class main:

    a=Student()
    print(a)
