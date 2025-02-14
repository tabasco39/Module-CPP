#include "Harl.hpp"

int main(void)
{
    Harl obj;
    obj.complain("debug");
    obj.complain("info");
    obj.complain("warning");
    obj.complain("error");
    obj.complain("test");
    return (0);
}