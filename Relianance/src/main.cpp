#include "main.h"
#include <iostream>
//#include "Data.cpp"

using namespace std;

Main::Main()
{
    // Constructor
    cout << "Program Initiated\n";
}

Main::~Main()
{
    // Destructor
    cout << "Program Terminated\n";
}

Main::main()
{
    // Main Function
    cout << "Main Function\n";
}


int main() {
    Main myMain;
    myMain.main();
    //DataSaver myDataSaver;
}
