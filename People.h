#ifndef PEOPLE_H_INCLUDED
#define PEOPLE_H_INCLUDED

#include <ostream>

class People {

    protected:
        std::string name;
        int age;

    public:
        People(std::string name = "nobody", int age = 0): name(name), age(age) {}

        std::string getName() { return name; }
        int getAge() { return age; }

        void setName(const std::string& name) { this->name = name; }
        void setAge(const int& age) { this->age = age; }

        friend std::ostream& operator<<(std::ostream& out, const People& people) {
            out << people.name << ", " << people.age;
            return out;
        }
};


#endif // PEOPLE_H_INCLUDED
