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
            hour = hour % 24;
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
            this->hour = hour % 24;
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
            string hour_str = to_string(hour) + ":";
            if (hour < 10) {
                hour_str = "0" + hour_str;
            }

            string minute_str = to_string(minute) + ":";
            if (minute < 10) {
                minute_str = "0" + minute_str;
            }

            string second_str = to_string(second);
            if (second < 10) {
                second_str = "0" + second_str;
            }

            return hour_str + minute_str + second_str;
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
