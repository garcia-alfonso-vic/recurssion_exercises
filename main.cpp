#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
void R1_levls(unsigned int max_level, int start_level = 1);
void R2_Box(string prefix, unsigned int levels); 
void R3_first_second();
int main()
{

    int level = 5, space = 1, write_me_vert = -1234; 
    R1_levls(level);
    R2_Box("Box:", 2);
    R2_Box("Box:", 3);
    return EXIT_SUCCESS;
}

/*
This was written by call number 1.
  This was written by call number 2.
   This was written by call number 3.
    This was written by call number 4.
    This ALSO written by call number 4.
   This ALSO written by call number 3.
  This ALSO written by call number 2.
 This ALSO written by call number 1.*/
void R1_levls(unsigned int max_level, int start_level )
{   
    //condition that allows recurssion
    if (start_level < max_level)
    { 
        //used to print spaces
        for (int i = 0; i < start_level; i++)
            cout << ' ';
        //writes from 0 - 4, each step BEFORE recurssive function
        cout << "This was written by call number " << start_level << endl;
        // were the fun happens...
        R1_levls(max_level, start_level + 1);
        // used to print spaces
        for (int i = 0; i < start_level; i++)
            cout << ' ';
        // AFTER recurssion ends, writes this from 4 - 1
        cout << "This ALSO written by call number " << start_level << endl;
    }
    else 
    {  //used to print spaces
        for (int i = 0; i < start_level; i++)
            cout << ' ';
        // last conditions
        cout << "This was written by call number " << start_level << endl;
        
        for (int i = 0; i < start_level; i++)
            cout << ' ';
        cout << "This ALSO written by call number " << start_level << endl;
    }
}
    
void R2_Box(string prefix, unsigned int levels)
{
    string temp = prefix;

    for (int i = 1; i <= 9; i++)
    {
        temp = prefix + char ('0' + i);
        temp += '.';
        if (levels > 1)
        {
            R2_Box(temp, levels - 1 );
            // cout << endl;
        }
        else 
        {
            cout << temp;
            cout << endl;
        }
    }
    
} 