#include<iostream>
using namespace std;
float taxCalculator(float price, char code);
main(){
    float price;
    char code;
    cout<<" Enter the vehicle type code (M, E, S, V, T): ";
    cin >> code;
    cout<<" Enter the price of the vehicle: $";
    cin >> price;

    price = taxCalculator(price,code);
    cout<<" The final price of a vehicle of type "<<code<<" after adding the tax is $"<<price;
}
float taxCalculator(float price, char code){
    if(code == 'M'){
        price = price + (price*6)/100;
        return price;
    }
    if(code == 'E'){
        price = price + (price*8)/100;
        return price;
    }
    if(code == 'S'){
        price = price + (price*10)/100;
        return price;
    }
    if(code == 'V'){
        price = price + (price*12)/100;
        return price;
    }
    if(code == 'T'){
        price = price + (price*15)/100;
        return price;
    }
}