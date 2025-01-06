
#include <iostream>
#include "CopyFile.hpp"

int main (int argc, char **argv)
{
    CopyFile test(argv[1], argv[2], argv[3]);

    if (argc < 4)
        std::cout << "argument number not valid" << std::endl;
    
    test.getFileContent();
    test.copyingToNewFile();
}