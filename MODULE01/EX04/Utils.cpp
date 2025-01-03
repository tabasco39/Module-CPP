#include "string"

std::string replacingWord(std::string &str , std::string &s1, std::string &s2)
{
    size_t position;
    size_t to_find_pos;
    std::string result;

    position = 0;
    while ((to_find_pos = str.find(s1, position)) != std::string::npos)
    {
        result += str.substr(position , to_find_pos - position);
        result += s2;
        position = to_find_pos + s1.length();
    }
    result += str.substr(position);
    return (result);
}