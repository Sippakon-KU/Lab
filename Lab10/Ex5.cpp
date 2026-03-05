#include <iostream>
#include <cstdlib>
#include <sstream>
#include <cmath>
#include <string>
#include <iomanip>

using namespace std;

class Time
{
    private:
        int  hour, minute, second;
    public:
        Time(int hour, int minute, int second): hour(hour), minute(minute), second(second) {
            if (hour >= 24) {
                hour -= 24;
            }
        }
        Time(int duration) {
            this->setHour(duration / 3600);
            duration = duration % 3600;

            this->setMinute(duration / 60);
            duration = duration % 60;

            this->setSecond(duration);
        }
        
        int getHour() {
            return hour;
        }

        int getMinute() {
            return minute;
        }

        int getSecond() {
            return second;
        }

        void setHour(int hour) {
            this->hour = hour;

            if (this->hour >= 24) {
                this->hour -= 24;
            }
        }

        void setMinute(int minute) {
            this->minute = minute;
        }

        void setSecond(int second) {
            this->second = second;
        }

        int getDuration() {
            int duration = 0;
            duration += hour * 3600;
            duration += minute * 60;
            duration += second;

            return duration;
        }

        Time add(Time other) {
            int duration = getDuration() + other.getDuration();
            Time newTime(duration);

            return newTime;
        }

        int subtract(Time other) {
            int duration = getDuration() - other.getDuration();

            if (duration < 0) {
                duration += 86400;
            } 

            return duration;
        }

        int equals(Time other) {
            return subtract(other) == 0;
        }

        string toString() {
            stringstream ss;

            ss << setfill('0') << setw(2) << hour << ":"
            << setfill('0') << setw(2) << minute << ":"
            << setfill('0') << setw(2) << second;

            return ss.str();
        }
};

void print(Time time) {
    cout << time.toString() << endl;
}

int main()
{
   Time a(2, 2, 2);
   Time b(1, 1, 1);
   Time c(82739);
   Time d(86400);
   print(a);
   print(b);
   print(c);
   print(d);

   cout << a.subtract(b) << endl;
   cout << b.subtract(a) << endl;
}
