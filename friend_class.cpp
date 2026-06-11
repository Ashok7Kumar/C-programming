#include <iostream>
using namespace std;

class Engine;  // Forward declaration

class Car {
private:
	int fuel;

public:
    friend class Engine;
	Car(int f) : fuel(f) {}
	
	void car_fun()
	{
		cout << "Car function" << endl;
	}
	// Declare Engine as a friend class

};

class Engine {
public:

	void start(Car& car) {
        
		//car.car_fun();
		if (car.fuel > 0) {
			cout << "Engine started!" << endl;
			car.fuel--;
		} else {
			cout << "Not enough fuel to start the engine." << endl;
		}
	}

	void addFuel(Car& car, int amount) {
		car.fuel += amount;
		cout << "Fuel added. Current fuel: " << car.fuel << endl;
	}
  
  void car_call(Car& obj)
  {
     obj.car_fun();
  }
};

int main() {
	Car myCar(5);
	myCar.car_fun();
	Engine myEngine;
    //myEngine.fuel=100;
	myEngine.start(myCar); // Starts the engine, fuel decreases by 1
	myEngine.addFuel(myCar, 10); // Adds 10 units of fuel
     myEngine.car_call(myCar); // Starts the engine again
// 	cout << " Car "<<sizeof(Car)<<endl;

// 	cout << " Engine "<<sizeof(Engine)<<endl;
	return 0;
}