/*Create a C++ program to manage staff salaries for a farm. Define a struct named Staff, which includes the attributes- stfID and monthlyWages. Implement methods within the struct-setData to set the staff information, displayData to display the staff details. Additionally, include an operational method called yearlyWagesWithBonus() to calculate the yearly wages with bonuses for each staff. The company provides two bonuses per year, each equal to 50 percent of the monthly wages. In the main function, demonstrate the usage of the Staff struct by creating an instance named s1, setting details, displaying the product information, and showing the yearly wages of this staff with 2 bonuses.*/
#include <iostream>
using namespace std;
struct Staff
{
    int stfID;
    float monthlyWages;

    void setData(int a, int b)
    {
        stfID = a;
        monthlyWages = b;
    }
    void displayData()
    {
        cout << "The stuff id : " << stfID << endl;
        cout << "monthly wages " << monthlyWages << endl;
    }
    void yearlyWagesWithBonus()
    {
        float yearly = monthlyWages * 12;
        cout << "Yearly wages :" << yearly << endl;
        float total = monthlyWages; // বছরে ২ টা বোনাস বেতনের ৫০% হলে টোটাল বোনাস হবে একমাসের বেতন এর সমান।
        float wages_with_bonus = yearly + total;
        cout << "Yearly wages with bonus : " << wages_with_bonus << endl;
    }
} stuff1;

int main()
{
    int id;
    float wages;
    cout << "Enter the stuff id :";
    cin >> id;
    cout << "Enter the monthly wages :";
    cin >> wages;
    stuff1.setData(id, wages);
    stuff1.displayData();
    stuff1.yearlyWagesWithBonus();

    return 0;
}
