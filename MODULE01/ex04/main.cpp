
#include <iostream>
#include "CopyFile.hpp"

int main (int argc, char **argv)
{
    if (argc < 4)
    {
        std::cout << "argument number not valid" << std::endl;
        return (1);
    }
    if (argv[1][0] && argv[2][0])
    {
        CopyFile test(argv[1], argv[2], argv[3]);
        test.getFileContent();
        test.copyingToNewFile();
    }
    else
    {
        std::cout << "Must be have a size" << std::endl;
    }
    return (0);
}