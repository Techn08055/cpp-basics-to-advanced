#include "person.h"
#include <iostream>

Person :: Person(){
    std::cout<<"Constructor person"<< std::endl;
}
Person::Person(std::string_view fullname, int age,
     std::string_view address) 
        : m_full_name{fullname}, m_age{age},
            m_address{address}
{
}

Person::Person(const Person& source)
:m_full_name(source.m_full_name),m_age(source.m_age),m_address(source.m_address){

}

std::ostream& operator<<(std::ostream& out , const Person& person){
   out << "Person [Full name :" << person.get_full_name() <<
                      ", Age:" << person.get_age() <<
                      ", Address:" << person.get_address() << "]";
  return out;
}


Person::~Person()
{
}

