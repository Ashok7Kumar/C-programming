#include <iostream>
using namespace std;

class Motor; // Forward declaration

class Sensor {
private:
    int sensorValue;

public:
    // Constructor to initialize sensor value
    Sensor(int val) : sensorValue(val) {}

    // Declare display() as a friend function
    friend void display(const Sensor&, Motor&);
};

class Motor {
private:
    bool motorStatus; // true = ON, false = OFF

public:
    // Constructor to initialize motor status to OFF
    Motor() : motorStatus(false) {}

    // Declare display() as a friend function
    friend void display(const Sensor&, Motor&);
};

class Step_Motor: public Sensor{
    bool motor_running;
    Step_Motor(bool val)
    {
        motor_running=val;
    }


};

// Definition of friend function
void display(const Sensor& s, Motor& m) {
    // Display Sensor Value
    cout << "Sensor Value: " << s.sensorValue << " °C" << endl;

    // Control Motor Status based on Sensor Value
    if (s.sensorValue > 30) {
        m.motorStatus = true;
    } else {
        m.motorStatus = false;
    }

    // Display Motor Status
    cout << "Motor Status: " << (m.motorStatus ? "ON" : "OFF") << endl;
    
}

int main() {
    Sensor tempSensor1(38);  // Temperature Sensor object 
    Motor fanMotor;          // Fan Motor initially OFF

    // Display status for first sensor
    cout << "Reading sensor1:" << endl;
    display(tempSensor1,fanMotor);

    Step_Motor s1(1);
    s1.


    return 0;
}
