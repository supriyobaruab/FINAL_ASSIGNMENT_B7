#include<iostream>
using namespace std;
class Customer{
private:
int inbal;
float ist;
public:
void setinitialBalance(int b)
{
inbal=b;
}
int getinitialBalanc()
{
return inbal;
}
void getInterest(int it){

ist=it;
}
float setInterest(){
return ist;
}
float getYearEndBalance(){
    return inbal+(inbal*ist/100);
}
void display(){
    cout<<"initial balance="<<inbal;
    cout<<"\ninterest rate="<<ist;
    cout<<"\nyear end balance="<<getYearEndBalance()<<endl;
}
};
int main(){
Customer c1,c2;
c1.setinitialBalance(50000);
c2.setinitialBalance(50000);
c1.getInterest(10);
c2.getInterest(20);
cout<<"customer 1 details===="<<endl;
c1.display();
cout<<"customer 2 display===="<<endl;
c2.display();

    return 0;
}