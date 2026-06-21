#include <iostream>
using namespace std;
#include <string>

int main(){
    int age;
    string name;
    bool isOnline = true;
    string isON="OFF";
    string score;
    string isExit;
    cout << "Your age: ";
    cin >> age;
    cin.ignore();
    cout << "Your name: ";
    getline(cin,name);
    cout << "Your score: ";
    cin >> score;
    cin.ignore();
    if (isOnline==true){
        isON="ON";
    };
    cout << "--User Status: " << isON << "\n+You are " << name << ", and you are " << age << " years old.\n+Your score is " << score <<" !\n";
    cout << "=> Exit? :";
    cin >> isExit;
    if (isExit=="yes"){
        isON="OFF";
    };
    cout << "--User Status: " << isON <<"\n";
}
