/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
/* v.vaishnavi
vivenkanadha college of engineering for women
tiruchengode*/

#include <iostream>
#include <string>

using namespace std;

// Weather class
class Weather {
private:
    string location;
    string date;
    string weatherCondition;
    int temperature;
    int rainPossibility;
    int humidity;

public:
    // Constructor
    Weather(string loc, string dt, string cond, int temp, int rain, int hum) {
        location = loc;
        date = dt;
        weatherCondition = cond;
        temperature = temp;
        rainPossibility = rain;
        humidity = hum;
    }

    // Getters
    string getLocation() {
        return location;
    }

    string getDate() {
        return date;
    }

    string getWeatherCondition() {
        return weatherCondition;
    }

    int getTemperature() {
        return temperature;
    }

    int getRainPossibility() {
        return rainPossibility;
    }

    int getHumidity() {
        return humidity;
    }

    // Display weather information
    void displayWeather() {
        cout << "Location: " << location << endl;
        cin>>location;
        cout << "Date: " << date << endl;
        cout << "Weather Condition: " << weatherCondition << endl;
        cout << "Temperature: " << temperature << "°C" << endl;
        cout << "Rain Possibility: " << rainPossibility << "%" << endl;
        cout << "Humidity: " << humidity << "%" << endl;
    }
};

int main() {
    // Create Weather objects for different days
    Weather today(" ", "July 13, 2023", "Cloudy", 24, 20, 65);
    Weather yesterday(" ", "July 12, 2023", "Rain", 20, 80, 75);
    Weather tomorrow(" ", "July 14, 2023", "Thunderstorm", 28, 40, 70);

    // Display weather information
    cout << "Today's Weather" << endl;
    today.displayWeather();

    cout << "\nYesterday's Weather" << endl;
    yesterday.displayWeather();

    cout << "\nTomorrow's Weather" << endl;
    tomorrow.displayWeather();

    return 0;
}
