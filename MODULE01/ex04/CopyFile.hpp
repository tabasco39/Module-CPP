
#ifndef CopyFILE_HPP
#define CopyFILE_HPP

#include <string>
#include <fstream>
#include <cstdlib>
#include <iostream>

class CopyFile
{
    public :
        CopyFile(std::string filename, std::string s1, std::string s2);
        ~CopyFile(void);
        void getFileContent();
        void setAllContent(std::string str);
        void setNewContent(std::string str);
        void copyingToNewFile();
        
    private :
        std::string _s1;
        std::string _s2;
        std::string _fileContent;
        std::string _filename;
        std::string _newContent;
};
std::string replacingWord(std::string &str , std::string &s1, std::string &s2);

#endif