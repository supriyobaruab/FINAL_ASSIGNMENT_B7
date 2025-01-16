#include <iostream>
using namespace std;

int marks[6];
int total = 0;
int percentage = 0;
int flag = 0; // প্রাইম চেক করার জন্য।

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
    percentage = (total * 100) / 600;
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
        if (percentage % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        cout << endl
             << "Total percentage is Prime";
    }
    else
    {
        cout << endl
             << "Total percentage isn't Prime";
    }
    return 0;
}