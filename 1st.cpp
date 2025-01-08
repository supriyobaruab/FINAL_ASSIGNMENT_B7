#include <iostream>
using namespace std;

int marks[6];
int total = 0;
int percentage = 0;
int flag = 0; // for checking prime number

int main()
{
    for (int i = 0; i < 6; i++)
    {
        cout << "Enter the marks of course " << i + 1 << " :";
        cin >> marks[i];
        if (marks[i] < 0 || marks[i] > 100)
        {
            cout << "The program takes only 0 to 100 as input." << endl
                 << "Write again :";
            cin >> marks[i];
        }
        total += marks[i];
    }
    // cout <<total;
    percentage = (total / 600) * 100;
    cout << "Total percentage :" << percentage << "%" << endl;

    if (percentage % 2 == 0)
    {
        cout << "Total percentage is even";
    }
    else
    {
        cout << "Total percentage is odd";
    }
    for (int i = 2; i < percentage; i++)
    {
        flag = 1;
    }
    if (flag == 0)
    {
        cout << "Total percentage is Prime";
    }
    else
    {
        cout << " Total percentage isn't Prime";
    }
    return 0;
}