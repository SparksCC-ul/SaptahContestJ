'''
ANISH KUMAR
anish2272002@gmail.com
ISE 2020-21
PYTHON
'''

class student():
    Student_ID=int()
    Name=str()
    Class=int()
    Section=str()
    Total_marks=int()

st_record1=student()
st_record1.Student_ID=6
st_record1.Name='Anish'
st_record1.Class=12
st_record1.Section='A'
st_record1.Total_marks=450

st_record2=student()
st_record2.Student_ID=9
st_record2.Name='Aryan'
st_record2.Class=10
st_record2.Section='B'
st_record2.Total_marks=500

st_record3=student()
st_record3.Student_ID=4
st_record3.Name='Lily'
st_record3.Class=11
st_record3.Section='C'
st_record3.Total_marks=367

st_record4=student()
st_record4.Student_ID=7
st_record4.Name='Sam'
st_record4.Class=10
st_record4.Section='B'
st_record4.Total_marks=400

st_record5=student()
st_record5.Student_ID=1
st_record5.Name='John'
st_record5.Class=12
st_record5.Section='A'
st_record5.Total_marks=490

st_record=[st_record1,st_record2,st_record3,st_record4,st_record5]

rnum=int(input())-1
print('Student ID   Name     Class    Section   Total Marks')
print(st_record[rnum].Student_ID,'      '+st_record[rnum].Name,st_record[rnum].Class,' '+st_record[rnum].Section+'   ',st_record[rnum].Total_marks,sep='      ')
