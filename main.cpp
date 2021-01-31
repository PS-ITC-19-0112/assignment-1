#include <iostream>

using namespace std;

int main()
{
    string customer;
    string items;
    int id, quantity;
    int printers=20, phones=15, tables=10;
    string product1 = "Printer";
    string product2 = "Phone";
    string product3 = "Table";
    double vat=0.12;
    double totalamountyouowe;
    int amount;
    int priceofthegood;
    int balance;
    cout << "WELSOME TO INF SUPERMARKET" << endl;
    cout << "CUSTOMER NAME" << endl;
    getline(cin, customer);
    cout << "Welcome " << customer << " to INF SUPERMARKET" << endl;
    cout << "Unique ID number" << endl;
    cin >> id;
    cout << "Item available at INF SUPERMARKET ARE:" <<endl;
    cout << "1. Printer" <<endl;
    cout << "2. Phone" <<endl;
    cout << "3. Table " <<endl;
    cout << "PRICE OF THE ITEMS:" << endl;
    cout << "1. Printer = GHc20.00" << endl;
    cout << "2. Phone = GHc15.00" << endl;
    cout << "3. Tables = GHc10.00" << endl;
    cout << "There is a VAT percentage of 12% on any item you buy at INF SUPERMARKET" <<endl;
    cout << customer << " what would you like to purchase at INF SUPERMARKET" << endl;
    cin >> items;
    while(items!=product1 && items!=product2 && items!=product3){
            cout << "Please the item you entered is not part of the items available" << endl;
            cin >> items;
        }
    cout << customer << ", what quantity of items are buying" << endl;
    cin >> quantity;
    cout << "Total quantity "<< customer << " wants to buy is: " << quantity << endl;
    if(items==product1){
        totalamountyouowe = (printers*quantity)+vat;
    }
    else if(items==product2){
    totalamountyouowe = (phones*quantity)+vat;
    }
        else totalamountyouowe = (tables*quantity)+vat;

    cout << "Total amount you owe = " << totalamountyouowe << endl;
    cout << "Please enter the amount you want to pay" << endl;
    cin >> amount;
        while(amount<totalamountyouowe){
            cout << "The amount you owe is greater than the amount offering to pay, please offer another price " <<endl;
            cin >> amount;
        }
    balance = (amount) - (totalamountyouowe);
    cout << "Your balance is "<< balance <<endl;
    cout << "             RECEIPT          " << endl;
    cout << "CUSTOMER                      " << customer << endl;
    cout << "UNIQUE ID                     " << id << endl;
    cout << "ITEM BOUGHT                   " << items << endl;
    cout << "QUANTITY                      " << quantity << endl;
    cout << "VAT AMUONT                    " << vat << endl;
    cout << "TOTAL AMOUNT                  " << totalamountyouowe << endl;
    cout << "AMOUNT PAID                   " << amount << endl;
    cout << "BALANCE                       " << balance << endl;
    cout << "            THANK YOU         " << endl;



    return 0;
}
