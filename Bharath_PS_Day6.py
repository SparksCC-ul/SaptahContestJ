#Name=Bharath.P.S
#email=pedaballibharath@gmail.com

class Student:
    
    def __init__(self,st_id,name,st_class,section,tot_marks):
        self.st_id = st_id
        self.name = name
        self.st_class = st_class
        self.section = section
        self.tot_marks = tot_marks
        
    def display(self):
        print("Student ID \t Name \t   Class \t Section \t Total Marks")
        print("{} \t\t {}    {}    \t {} \t\t {}".format(self.st_id, self.name, self.st_class, self.section, self.tot_marks))

        
st1=Student(122,'Pranav', 12,'B.',483)
st2=Student(102,'Ajay  ',11,'C.',302)
st3=Student(108,'Pawan ',11,'A.',267)
st4=Student(144,'Tom   ',12,'B.',401)
st5=Student(100,'John  ',12,'A.',490)

st_arr = [st1,st2,st3,st4,st5]
n=int(input())
st_arr[n].display()
