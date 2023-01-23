#include <iostream>
# include  <iomanip>
int main()
{
bool red_light {true};
bool green_light{false};
if(red_light == true)
{
    std::cout<<"Stop!"<<std::endl;
}
else
{
    std::cout<<"Go through " << std::endl;
}

if (green_light == true)
{
    std::cout<< "The light is green" <<std::endl;
}
else{
    std::cout<<"The light is not green" <<std::endl;
}
std::cout<<std::boolalpha;
std::cout<<"red_light" << red_light << std::endl;
return 0;
}