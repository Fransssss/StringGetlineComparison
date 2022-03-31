// Title = Getline String and String comparison
// Purpose = Practice take user input with Getline, Compare 2 user inputs
// Enjoy the process = Practice makes Improvement
// Author = Fransiskus Agapa

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::getline;

int main() {

    // practice getline
    string firstName;
    string lastName;
    char userResponse;

    cout << endl << " Input made up first and middle name : " << endl;         // getline enables us to take space from user input
    getline(cin, firstName);

    cout << " Input made up last name : " << endl;                            // cin will stop takes input when it hits space
    cin >> lastName;

    cout << " Hello Mr/Mrs " << lastName << ", " << firstName << endl ;
    cout << endl << " May call you, " << firstName << " ?" << " (y/n)"  << endl << endl;
    cin >> userResponse;

    if(userResponse == 'y' || userResponse == 'Y')                              // check if user input is either 'y' or 'Y'
    {
        cout << endl << " How you do Mr/Mrs " << firstName << ", Good day!"<< endl << endl;
    } else if(userResponse == 'n' || userResponse == 'N')                         // check if user input is either 'n' or 'N'
    {
        cout << endl << " My apologies for my being impolite. Good day!" << endl;
    } else                                                                  // if input is not expected the invalid
    {
        cout << endl << " Invalid input -  Good day!" << endl << endl;
    }

    cout << "----------------------------------------------------------" << endl << endl;

    //practice string comparison
    string wordF;
    string wordS;

    cout << " Input 1st word to compare : " << endl;
    cin >> wordF;

    cout << " Input 2nd word to compare : " << endl;
    cin >> wordS;

    cout << endl << " The comparison would be done based on this : ";
    cout << " A = 65, B = 66, etc... | a = 97, b = 98, etc..." << endl;

    if(wordF > wordS)                                                   // compare string, char by char
    {
        cout << "     [ "<< wordF << ' ' << wordS << " ]" << endl;
    } else if( wordF == wordS)
    {
        cout << "     [ The word is the same " << wordF << " ]" <<  endl;
    } else
    {
        cout << "     [ " << wordS << ' ' << wordF << " ]" << endl;
    }

    return 0;
}
