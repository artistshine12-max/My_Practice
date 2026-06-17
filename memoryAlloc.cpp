#include <iostream>
using namespace std;
class shop{
    int itemID[100];
    int itemPrice[100];
int counter;
public :
void initcounter(void) { counter=0;}
void setPrice(void);
void displayPrice(void);
};
void shop :: setPrice(void){
cout<<"Enter the ID of your item"<<endl;
cin>>itemID[counter];
cout<<"Enter the Price of your item"<<endl;
cin>>itemPrice[counter];
counter++;   }
void shop :: displayPrice(void){
    for(int i; i< counter; i++){
cout<<"The Price of item with ID: "<<itemID[i]<<"is"<<itemPrice[i]<<endl; 
    }
}
int main(){
    shop s;
    s.setPrice();
s.setPrice();
s.setPrice();
s.displayPrice();

    return 0;
}