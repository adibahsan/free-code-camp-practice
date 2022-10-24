#include<iostream>
#include<string>

using namespace std;

bool checkPalindrome(string input)
{

    cout << "input is " << input <<endl;
    if(input.length() <= 1)
    {
        return true;
    }

    else if(input[0] ==input[input.length()-1] )
    {
        return checkPalindrome( input.substr(1, input.length()-2));
    }


    else return false;
}


int main()
{

    string s = "12343434";
    string input2 = "kayak";
    string input3 = "abbaabba";
    cout <<checkPalindrome(s) <<endl ;
    cout <<checkPalindrome(input2) <<endl;
    cout <<checkPalindrome(input3) <<endl;
}
