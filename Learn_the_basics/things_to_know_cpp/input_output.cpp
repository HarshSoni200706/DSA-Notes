#include <iostream>     //for cin , cout 
#include <math.h>       //for sqrt, pow etc. 
using namespace std;    //to avoid writing std:: before every cin, cout etc.

int basic()
{
    int x,a,b;              //declaring an integer variable x
    cout<<"Hello World! enter the value of x"<<endl;     //cout is used to print on the screen 
                                    //endl is used to move to the next line after printing the message.
                                    // /n is faster (used in DSA) endl is slower (flushes buffer)
    cin >> x;   //taking input from the user and storing it in variable x
    cout<<"The value of x is: "<<x<<endl; //printing the value of x

    cin >> a >> b;   //taking multiple inputs 


    return 0;   //return 0 indicates that the program ended successfully.
}



int task1(){
    // program 1 : print your name and age on different lines

    string name;
    int age;
    cout<<"enter name and age "<<endl;
    cin >> name >> age; 
    cout << "name "<< name << "\nage " << age << endl;

}

int math_library (){
    cout << sqrt(25);
}
int task(){
    int r ;
    float area , pi=3.14;
    cout << "enter the radius of circle :" << endl;
    cin >> r;
    area = pi*pow(r,2);
    cout << "area of circle is : " << area << endl;
}

int main (){
    task();
    return 0;
}
