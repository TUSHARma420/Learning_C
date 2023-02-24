#include <iostream>
using namespace std;

class student

{

    int prn, marks[5];
    float percentage;
    char name[20];

public:
    void data_in()
    {

        cout << "Name-> ";
        cin.getline(name, 20);
        cout << "PRN-> ";
        cin >> prn;
        cout << "Marks-> ";
        for (int i = 0; i < 5; i++)
            cin >> marks[i];
    }

    float calc()
    {
        percentage = 0;
        for (int i = 0; i < 5; i++)
            percentage += marks[i];
        percentage /= 5;
        return percentage;
    }

    void disp()
    {
        cout << "\nName->" << name << endl;
        cout << "PRN->" << prn << endl;
        cout << "Percentage->" << calc();
    }
};

int main()
{
    student s;
    s.data_in();
    s.disp();
    return 0;
}
