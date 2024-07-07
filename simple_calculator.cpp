#include <iostream>
#include <cstdlib>

using namespace std;
void addition();
void subtraction();
void multiplication();
void division();


int main()
{
    cout << "\t\t****************************Welcome to the Simple Calculator!!****************************\n";
    cout << "\t\t==========================================================================================\n"
         << endl;
    cout << "Press 0 to quit the calculator\n"
         << endl;
    cout << "Press 1 for Addition \n\n";
    cout << "Press 2 for Subtraction \n\n";
    cout << "Press 3 for Multiplication \n\n";
    cout << "Press 4 for Division \n\n";
    
    int choice;
    while (1)
    {
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            addition();
            break;
        case 2:
            subtraction();
            break;
        case 3:
            multiplication();
            break;
        case 4:
            division();
            break;
      
        case 0:
            exit(0);
            break;
        default:
            cout << "\nWrong input, Enter valid choice\n\n";
            break;
        }
    }

    return 0;
}

void addition(){
    int a,b;
    
    cout<<"Enter the first number you want to add: ";
    cin>>a;
    cout<<"Enter the second number you want to add: ";
    cin>>b;
    cout<<"The addition of "<<a<<" and "<<b<<" is "<<a+b<<endl;
}
void subtraction(){
    int a,b;

    cout<<"Enter the first number you want to subtract: ";
    cin>>a;
    cout<<"Enter the second number you want to subtract: ";
    cin>>b;
    cout<<"The subtraction of "<<a<<" and "<<b<<" is "<<a-b<<endl;
}
void multiplication(){
    int a,b;

    cout<<"Enter the first number you want to multiply: ";
    cin>>a;
    cout<<"Enter the second number you want to multiply: ";
    cin>>b;
    cout<<"The multiplication of "<<a<<" and "<<b<<" is "<<a*b<<endl;
}
void division(){
    float a,b;

    cout<<"Enter the first number you want to divide: ";
    cin>>a;
    cout<<"Enter the second number you want to divide: ";
    cin>>b;
    cout<<"The division of "<<a<<" and "<<b<<" is "<<a/b<<endl;
}
