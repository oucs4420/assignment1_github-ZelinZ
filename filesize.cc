//****************************************
//   Zelin Zhang
//   Ohio University
//   CS 4000 & CS 4420
//   1/14/2022
//   reference: https://stackoverflow.com/questions/3482064/counting-the-number-of-lines-in-a-text-file
//****************************************




#include <iostream>
#include <fstream>
using namespace std;

int main( int argc, char* argv[] )
{
    ifstream fileName;

            fileName.open(argv[1]);//open the entered file.
            int line = 0;
            string lines;
            if(fileName.is_open()){
            while(!fileName.eof()){
                getline(fileName, lines);
                line = line + 1;
            }
            } else {
                line = 0;//don't have this file.
            }
            
            line --;
            
            std::cout << "program: " << argv[0] << '\n' << argv[1] << ": " << line; //print the name of the program, and print how many lines in the file.


    exit(0); // this means that the program executed correctly!

    
}