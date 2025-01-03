
#ifndef CopyFILE_HPP
#define CopyFILE_HPP

#include "string"
#include <fstream>
#include "iostream"

class CopyFile
{
    public :
        CopyFile(std::string filename, std::string s1, std::string s2);
        void getFileContent();
        void setAllContent(std::string str);
        void setNewContent(std::string str);
        void copyingToNewFile();
        
    private :
        std::string s1;
        std::string s2;
        std::string fileContent;
        std::string filename;
        std::string newContent;
};

#endif