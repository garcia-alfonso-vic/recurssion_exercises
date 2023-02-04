#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;
void R1_levls(unsigned int max_level, int start_level = 1);
void R2_Box(); 
void R3_first_second();
int main()
{

    int level = 4, space = 1, write_me_vert = -1234; 
    R1_levls(level);
    
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
    if (max_level > 1)
    {
        
        R1_levls(max_level - 1);
        for (int i = 0; i < max_level; i++)
            cout << ' ';
        cout << "This was written by call number " << max_level << endl;
    }
    else
        cout << "This was written by call number " << max_level << endl;
}
    
void R2_Box()
{

}