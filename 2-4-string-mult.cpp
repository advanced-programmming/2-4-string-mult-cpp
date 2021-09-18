#include<iostream>
#include<cstring>

using namespace std;

string multiStrings(string message, int repeat);
string revertString(string message);

int main () {
    string message;
    int repeat;
    getline(cin, message);
    cin>>repeat;
    string result = multiStrings(message, repeat);
    cout<<result<<endl;
    return 0;
}

string multiStrings(string message, int repeat){
    string result;
    if(repeat == 0 || message == " ") return "";
    string newMessage = repeat > 0 ? message : revertString(message);
    repeat = repeat < 0 ? repeat * -1 : repeat;

    for(int i = 0; i < repeat; i++)
        result += newMessage;

    return result;
}

string revertString(string message){
    char array[message.length()];
    string result;

    strcpy(array, message.c_str());
    for(int i = message.length(); i >= 0; i--)
        result += array[i];

    return result;
}