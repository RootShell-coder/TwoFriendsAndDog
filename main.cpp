#include <iostream>
 /*
  *
  *   g++ ./main.cpp -o main
  *
  */

const float *vHuman0, *vHuman1, *vDog; // speed m/s
float joinDistance = 0.0f;             // minimum distance when people are considered to have met
float *distanceHumans;                 // distance between people
int *DogCount = 0;                     // how many times does a dog run


int main(){
  std::cout << "Сalculation of dog movements." << std::endl << std::endl;
  std::cout << "distance between people (float): m ";
  std::cin >> (float &) distanceHumans;
  std::cout << "speed human 1 (float) m/s: ";
  std::cin >> (float &) vHuman0;
  std::cout << "speed human 2 (float) m/s: ";
  std::cin >> (float &) vHuman1;
  std::cout << "speed dog (float) m/s: ";
  std::cin >> (float &) vDog;
  std::cout << "joining Humans(float) m: ";
  std::cin >> (float &) joinDistance;

  printf("\e[1;1H\e[2J");
  std::cout << "Distance" << "\t"
            << "Speed human 1" << "\t"
            << "Speed human 2" << "\t"
            << "Speed dog" << "\t"
            << "joining Humans"
            << std::endl;
  std::cout << (float &) distanceHumans << "\t\t"
            << (float &) vHuman0 << "\t\t"
            << (float &) vHuman1 << "\t\t"
            << (float &) vDog <<"\t\t"
            << (float) joinDistance
            << std::endl;

  while ((float &) distanceHumans >= joinDistance){
    float timeDH0min = (float &) distanceHumans / ( (float &) vDog + (float &) vHuman0 );
    float sumDistDH0m = timeDH0min * ((float &) vHuman0 + (float &) vHuman1);
    (float &) distanceHumans = (float &) distanceHumans - sumDistDH0m;
    if ( (float &) distanceHumans > joinDistance ){
      DogCount ++;
    }
    float timeDH1min = (float &) distanceHumans / ( (float &) vDog + (float &) vHuman1 );
    float sumDistDH1m = timeDH1min * ((float &) vHuman0 + (float &) vHuman1);
    (float &) distanceHumans = (float &) distanceHumans - sumDistDH1m;
    if ( (float &) distanceHumans > joinDistance ){
      DogCount ++;
    }
  }
 std::cout << std::endl << (int &) DogCount << std::endl;
}
