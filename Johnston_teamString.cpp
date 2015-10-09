//Name: Coleman Johnston
//Date: 8 Oct. 2015
#include<iostream>//cin,cout
#include<string>//string functions
#include<cassert>//testing
#include<cstdlib>//toupper() 
using namespace std;

string initials(string strA);
// receives a string comprising first, middle and last name and returns the initials of each name, capitalized
// TEST: Maria Sera Turing returns  MST

int countAlpha(string strA);
// receives a string comprising a sentence, counts and returns the number of alphabetical 
// characters a -> z  and A -> Z are the alphabetical characters. 

int countWords(string strA);
// receives a string comprising a sentence, counts and returns the number of words in a the sentence.
// words are separated by spaces.

bool isPalindrome(string strA);
// receives a string and returns true if the string is a palindrome
// a one character string will be considered a palindrome

int main()
{
    assert(initials("Maria Sera Turing") == "MST");
    assert(initials("coleman Maverick johnston") == "CMJ");
    assert(initials("  zoe  ana hobbnobber") == "ZAH");
    assert(initials("  zoe   ana ") == "ZA");
    return 0; 
}

string initials(string strA)
{
    string returnInitials;
    int nxtWhiteSpace = 0; 
    int letter = 0; 
   
    while(strA.length() > letter)
    {
        if((strA[letter] >= 'A' && strA[letter] <= 'Z') || (strA[letter] >= 'a' && strA[letter] <='z'))
        {
            returnInitials += strA[letter]; 
        }
        
        nxtWhiteSpace = strA.find(" ");
        letter = nxtWhiteSpace;
        
        if(nxtWhiteSpace < strA.length())
            {
                strA.erase(nxtWhiteSpace,1);
            }
    }
    
    for(int i = 0;i < returnInitials.length(); i++)
    {
        returnInitials[i] = toupper(returnInitials[i]);
    }
    
    return returnInitials;
}
