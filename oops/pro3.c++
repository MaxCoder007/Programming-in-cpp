#include<iostream>
using namespace std;

class shop{
    int itemprice[10];
    int itemnumber[10];
    int count;
    public:
   
    void countitem(void){
        count=0;
    }
    void setprice(void);
    void displayprice(void);
};
void shop :: setprice(){
    cout << "Enter Id of your item no " << count + 1 << endl;
    cin >> itemnumber[count];
    cout << "Enter Price of your item" << endl;
    cin >> itemprice[count];
    count++;
}
void shop ::  displayprice(){
    for (int i = 0; i < count; i++)
{
    cout << "The Price of item with Id " << itemnumber[i] << " is " << itemprice[i] << endl;
}
}
int main(){
      shop item;
      item.countitem();
      item.setprice();
      item.setprice();

      item.displayprice();

}