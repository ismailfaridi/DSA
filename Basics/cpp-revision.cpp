#include <bits/stdc++.h> // include every standard library
using namespace std;

/*
int main()
{
    // # IO
    // std::cout << "Hello World!" << std::endl;
    // cout << "Hello World!" << endl;

    // int n;
    // cout << "Enter number: ";
    // cin >> n;
    // cout << "You enter: " << n;


    // # Data types: short, int, long, long long, float, double, string (getline), char, bool, ...

    // string s1, s2;
    // cin >> s1 >> s2; // separate the space
    // cout << s1 << " " << s2;

    // string str;
    // getline(cin, str);
    // cout << str;

    // char ch='i';
    // cout << ch;


    // # If-else Statement
    // int age;
    // cout << "Enter your age: ";
    // cin >> age;

    // if(age < 18){
    //     cout << "You are underage.";
    // }
    // else if(age > 80){
    //     cout << "You are overage.";
    // }
    // else{
    //     cout << "You are allowed to drive car.";
    // }


    // # Switch Statement
    // int day;
    // cout << "Enter the day number (1-7): ";
    // cin >> day;

    // switch(day){
    //     case 1:
    //         cout << "Monday";
    //         break;
    //     case 2:
    //         cout << "Tuesday";
    //         break;
    //     case 3:
    //         cout << "Wednesday";
    //         break;
    //     case 4:
    //         cout << "Thursday";
    //         break;
    //     case 5:
    //         cout << "Friday";
    //         break;
    //     case 6:
    //         cout << "Saturday";
    //         break;
    //     case 7:
    //         cout << "Sunday";
    //         break;
    //     default:
    //         cout << "Invalid number is entered.";
    // }


    // # Array (store similar data, consecutive mempry location modifiable, 0 based indexixng)
    // $ 1-Dimension Array
    // int arr[5];

    // for(int i=0; i<5; i++){
    //     arr[i] = i + 1;
    // }

    // arr[0] += 100;

    // for(int i=0; i<5; i++){
    //     cout << arr[i] << endl;
    // }

    // cout << "Starting address of array: " << arr;

    // $ 2-Dimension Array
    // int arr[3][5]; // rows, cols
    // arr[1][3] = 786;
    // cout << arr[1][3];


    // # String
    // string str ="Ismail";
    // cout << str[0] << endl;
    // cout << str[5] << endl;

    // cout << "sizeof() = " << sizeof(str) << endl; // memory size of string object, compile time
    // cout << "size() = " << str.size() << endl; // number of characters in the string, run time
    // cout << "length() = " << str.length() << endl; // number of characters in the string

    // str[str.size() - 1] = 'X';
    // cout << str[5];


    // # for loop
    // for(int i = 0; i < 5; i++){
    //     cout << "Ismail" << endl;
    // }

    // # while loop
    // short x = 0;
    // while(x < 5){
    //     cout << "Ismail" << endl;
    //     x++;
    // }

    // # do-while loop
    // short x = 0;
    // do{
    //     cout << "Ismail" << endl;
    //     x++;
    // } while(x < 5);

    return 0;
}
*/

// # Functions (modularise code, increase readability, reusable)

// $ Function Overriding
void printName(){ // void -> doesn't return anything
    cout << "Ismail" << endl;
}
void printName(string x){
    cout << x << endl;
}

int sum(int a, int b){
    return a + b;
}

// $ Pass by value
void passByValue(int x){
    x += 5;
}

// $ Pass by reference
void passByRef(int &x){
    x += 5;
}

// pointer
void ptrFunc(int *x){
    *x += 5;
}

void printArray(int x[], int num){
    for(int i = 0; i < num; i++)
        cout << x[i] << endl;
}

int main()
{
    printName();
    string x = "Alan Turing";
    printName(x);
    int a = 5, b = 10;
    cout << sum(a, b) << endl;

    cout << min(a, b) << endl; // math.h

    int num = 15;
    passByValue(num); // copy sent
    cout << "After pass by value: " << num << endl;

    passByRef(num); // address sent
    cout << "After pass by reference: " << num << endl;

    ptrFunc(&num); // mem address sent
    cout << "After ptr function: " << num << endl;

    const int max = 3;
    int arr[max]={55,66,77};
    printArray(arr, max);

    return 0;
}
