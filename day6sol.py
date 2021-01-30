#Class to create default student blueprint
class Student:
    def __init__(self,id,name,stuClass,sec,totMarks):
        self.id=id
        self.name=name
        self.stuClass=stuClass
        self.sec=sec
        self.totMarks=totMarks
    def output(self):
        print( 'Student ID   Name       Class   Section   Total Marks')
        print (self.id, '\t    ', self.name, '      ', self.stuClass, '    ' , self.sec, '\t    ' , self.totMarks)


s1= Student(1,'John', 12, 'A.', 490)
s2= Student(2,'Bob', 11, 'A.', 401)
s3= Student(3,'Dean', 9, 'C.', 468)
s4= Student(4,'Sean', 12, 'B.', 450)
s5= Student(5,'Jack', 8, 'C.', 438)
s=[s1,s2,s3,s4,s5]
n=int(input())
s[n].output()

#Adarsh S Thambi
#adarshsthambi@gmail.com
