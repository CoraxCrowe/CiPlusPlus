#include <iostream>


class Stove{
    public:
        int temperature = 0;
        Stove(int seriesNumber){
            setSeriesNumber(seriesNumber);
        }
        int getSeriesNumber(){
            return seriesNumber;
        }
        void setSeriesNumber(int newSeriesNumber){
            seriesNumber =newSeriesNumber;
        }

    private:
        int seriesNumber = 32149;
};

int main(){

    //Abstraction = hiding unnecessary data from outseide a class
    //getter = function that makes a private attribute READABLE
    //setter = function that makes a private attribute WRITEABLE
    Stove stove1(34716);

    stove1.temperature = 300;



    std::cout << "Temperature set to " << stove1.temperature << " degrees\n";
    std::cout << "Series number is " << stove1.getSeriesNumber() << ".\n";

    stove1.setSeriesNumber(21908);

    std::cout << "Series number is " << stove1.getSeriesNumber() << ".\n";



    return 0;
}