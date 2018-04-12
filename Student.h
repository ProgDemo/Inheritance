#ifndef STUDENT_H_INCLUDED
#define STUDENT_H_INCLUDED

#include <ostream>

class Student : public People {

    private:
        std::string neptun;

    public:
        Student(const std::string& name, const std::string& neptun, const int& age):
            People(name, age), neptun(neptun) {}
            //name(name), neptun(neptun), age(age) {}

        std::string getNeptun() { return neptun; }
        void setNeptun(const std::string& neptun) { this->neptun = neptun; }
        friend std::ostream& operator<<(std::ostream& out, const Student& student) {
            out << student.name << ", " << student.neptun << ", " << student.age;
            return out;
        }
};

#endif // STUDENT_H_INCLUDED
