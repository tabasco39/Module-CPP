#include "CopyFile.hpp"

CopyFile::CopyFile(std::string filename, std::string s1, std::string s2)
{
    _filename = filename;
    _s1       = s1;
    _s2       = s2;
    _newContent = "";
}
CopyFile::~CopyFile(void)
{}

void CopyFile::setAllContent(std::string str)
{
    _fileContent += str;
}

void CopyFile::setNewContent(std::string str)
{
    _newContent = str;
}

void CopyFile::getFileContent()
{
    std::ifstream   inputFile(_filename.c_str());
    std::string     line;

    if (inputFile.is_open())
    {
        while (std::getline(inputFile , line))
        {
            setAllContent(line);
            if (!inputFile.eof())
                setAllContent("\n");
        }
        inputFile.close();
    }
    else
    {
        std::cout << "Can't open file" << std::endl;
        exit(EXIT_FAILURE);
    }
}

void CopyFile::copyingToNewFile()
{
    std::string newFile;

    newFile = _filename;
    newFile += ".replace";
    std::ofstream outputFile(newFile.c_str());

    setNewContent(replacingWord(_fileContent, _s1, _s2));
    if (outputFile.is_open())
        outputFile << _newContent;
}