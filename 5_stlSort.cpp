#include <iostream>
#include <algorithm>

using namespace std;

class Student {
public:
    string name;
    int score;
    Student(string name, int score) : name(name), score(score) {}
    bool operator <(const Student& student) const {
        return this->score < student.score;
    }
};

bool compare(int a, int b) {
    return a > b;
}


int main() {
    Student students[] = {
        Student("A", 90),
        Student("B", 80),
        Student("C", 100),
        Student("D", 70),
        Student("E", 60)
    };
    sort(students, students + 5);
    for (int i = 0; i < 5; i++) {
        cout << students[i].name << " ";
    }
}