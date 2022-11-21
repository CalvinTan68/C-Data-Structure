#include <iostream>
using namespace std;

typedef struct stu {
    int num;
    int score;
} student;

int main() {
    student * sp = new student[3];

    for (int i = 0; i < 3; i++) {
        cout << "Enter number : ";
        cin >> (*(sp+i)).num;
        cout << "Enter score : ";
        cin >> (*(sp+i)).score;
        cout << endl;
    };

    for (int i = 0; i < 3; i++) {
        cout << "Number : " << (*(sp+i)).num << endl;
        cout << "Score : " << (*(sp+i)).score << endl;
        cout << endl;
    };
    delete []sp;
    return 0;
}
