#include "person.h"
#include "engineer.h"
#include <iostream>

Engineer::Engineer()
{
    std::cout << "engineer construcor" <<std::endl;
}
Engineer:: Engineer(std::string_view fullname,int age,
     std::string_view address, int contract_count_param):
     Person(fullname, age, address), contract_count(contract_count_param)
     {
        
     }

Engineer::Engineer(const Engineer& source)
:Person(source),contract_count(source.contract_count)
{
    std::cout<<"custom copy  constr";
}

std::ostream& operator<<(std::ostream& out , const Engineer& operand){
     out << "Engineer [Full name : " << operand.get_full_name() <<
                    ",age : " << operand.get_age() << 
                    ",address : " << operand.get_address() <<
                    ",contract_count : " << operand.contract_count << "]";
    return out;   
}


Engineer::~Engineer()
{
}