
#include <fstream>
#include "UserAPI/Header/MainFunctions.h"
#include "nlohmann/json.hpp"
#include "Data Base Access/JsonDB/JsonDBAccess.h"


using json = nlohmann::json;

int main() {
/*
    while (peopleUser == nullptr) {
        MainFunctions::beginPrint();
        int answer;
        std::cin >> answer;
        peopleUser = MainFunctions::logOrReg(answer);
    }
    printf("\e[1;1H\e[2J Hi, %s!\n", peopleUser->getName().c_str()); //clean console and greeting
    while (true) {
        MainFunctions::mainOptionsPrint();
    }
*/
    JsonDBAccess dbAccess;
    vector<Trip> trips = dbAccess.selectTrip();
    trips[0].printTripsInfo(trips);



}

