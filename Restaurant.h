ifndef RESTAURANT _H
#define RESTAURANT _H
#include <iostream>
#include <string>

class Restaurant
{
    public:
        
        Restaurant(std::string, int);

        std::string getGuestname() const;
        int getTableNum() const;

    private:
        std::string Guest_Name;
        int Table_Num;
};

#endif // RESTAURANT _H
