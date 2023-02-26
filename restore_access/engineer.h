#ifndef ENGINEER_H
#define ENGINEER_H
#include "person.h"

//Engineer is doing private inheritance

class Engineer : private Person
{
friend std::ostream& operator<<(std::ostream& out , const Engineer& operand);
public:
    Engineer();
    ~Engineer();
protected:
    using Person :: get_address;
    using Person :: get_age;
    using Person :: get_full_name;
public:
    using Person :: m_full_name;
    using Person :: m_age;
private : 
    int contract_count{0};
};
#endif 
