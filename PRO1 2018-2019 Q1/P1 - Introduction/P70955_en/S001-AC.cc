#include <iostream>

int main()
{
    unsigned int years, days, hours, mins, secs;
    
    std::cin >> years >> days >> hours >> mins >> secs;
    
    unsigned int total = years * 31536000 + days * 86400 + hours * 3600 + mins * 60 + secs;
    
    std::cout << total << std::endl;
}
