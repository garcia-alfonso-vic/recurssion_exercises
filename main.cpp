#include <cstdlib>
#include <iostream>
#include <iomanip>
void R1_levls(unsigned int level);
void R2_Box(); 
void R3_first_second();
int main()
{
    using namespace std;
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
void R1_levls(unsigned int level)
{
    if (level >= 1)
    {
        std::cout << "This was written by call number " << level << ".\n";
        R1_levls(level - 1);
        
        std::cout << "This ALSO written by call number " << level << ".\n";
    }
    else 
    {
        return;
    }
    
    

}   
    
void R2_Box()
{

}