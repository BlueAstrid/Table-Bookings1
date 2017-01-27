#include "Restaurant .h"


Restaurant::Restaurant(std::string name, int tablenum){
    Guest_Name = name;
    Table_Num = tablenum;
}

std::string Restaurant::getGuestname() const {
    return Guest_Name;
}

int Restaurant::getTableNum() const {
    return Table_Num;
}
