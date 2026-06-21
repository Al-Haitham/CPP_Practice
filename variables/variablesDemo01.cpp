#include <iostream>
using namespace std;
#include <string>

int main(){
    int age;
    string name;
    bool isOnline = true;
    string isON="OFF";
    char score;
    string isExit;
    cout << "Your age: ";
    cin >> age;
    cout << "Your name: ";
    cin >> name;
    cout << "Your score: ";
    cin >> score;
    if (isOnline==true){
        isON="ON";
    };
    cout << "User Status: " << isON << "\nYou're " << name << ", and you're " << age << " years old.\n Your score is " << score <<" !\n";
    cout << "Exit? :";
    cin >> isExit;
    if (isExit=="yes"){
        isON="OFF";
    };
}
