#include "CopyFile.hpp"
#include "Utils.cpp"

CopyFile::CopyFile(std::string _filename, std::string _s1, std::string _s2)
{
    filename = _filename;
    s1       = _s1;
    s2       = _s2;
}

void CopyFile::setAllContent(std::string str)
{
    fileContent += str;
}

void CopyFile::setNewContent(std::string str)
{
    newContent = str;
}

void CopyFile::getFileContent()
{
    std::ifstream   inputFile(filename);
    std::string     line;

    if (inputFile.is_open())
    {
        while (std::getline(inputFile , line))
        {
            setAllContent(line);
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

    newFile = filename;
    newFile += ".replace";
    std::ofstream outputFile(newFile);

    setNewContent(replacingWord(fileContent, s1, s2));
    if (outputFile.is_open())
        outputFile << newContent;
}