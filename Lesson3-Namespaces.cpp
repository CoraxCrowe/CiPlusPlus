#include <iostream>

namespace first{

    int x=1;

}

namespace second{
    
    int x=7;

}


int main(){

    using namespace first;

    /* using namespace std is discouraged as it could create conflict
    lazy bastards can use using namespace std::cout o std::string to avoid
    using std:: in those cases in the code*/

    int x=2;

    std::cout << second::x; // :: is the Scope Resolution Operator

    return 0;
}