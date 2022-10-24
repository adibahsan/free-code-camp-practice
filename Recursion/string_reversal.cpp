#include<iostream>
#include<string>

using namespace std;

string reverseString(string input)
{

    cout << "input is " << input <<endl;
    if(input == "")
    {
        return input;
    }

    else return reverseString( input.substr(1)) + input[0];
}


int main()
{
    string input = "Hellow";
    cout << "reversing strings" <<endl;
    cout << reverseString(input) <<endl;

    return 0;
}


