def __init__(self, name, age, course, grade):
        self.name = name
        self.age = age
        self.course = course
        self.grade = grade

    def display(self):
        print('The name of the student is ' + self.name)
        print('Age: ' + str(self.age))
        print('Course: ' + self.course)
        print('Grade: ' + self.grade)

st1 = students("Bekele", 22, "applied", 'A-')
st1.display()

st2 = students("Chala", 26, "physics", 'A')
st2.display()
