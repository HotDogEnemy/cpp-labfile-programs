/* WAP to create a class called Cinema to maintain information about a movie
 * and its timings using constructor and destructor. */

#include <iostream>

using namespace std;

class Cinema {
    string name;
    int releaseyear, duration, showing;
    public:
        Cinema (string name, int releaseyear, int duration) {
            this->name = name;
            this->releaseyear = releaseyear;
            this->duration = duration;
            this->showing = 0;
        }
        ~Cinema () {
            showing = 0;
            cout << "Movie finished!\n";
        }
        void start_showing();
        void show_details();
};

void Cinema :: start_showing() {
    showing = 1;
    cout << name << " is now showing!" << endl;
}

void Cinema :: show_details() {
    cout << "MOVIE DETAILS" << endl;
    cout << "Name: \t\t" << name << endl;
    cout << "Year: \t\t" << releaseyear << endl;
    cout << "Duration: \t" << duration << " minutes" << endl;
    cout << "Showing now: \t";
    if (showing) {
        cout << "YES" <<endl;
    } else {
        cout << "NO" << endl;
    }
}

int main() {
    Cinema movie("Life of Pi", 2013, 78);
    movie.show_details();
    cout << endl;
    movie.start_showing();
    cout << endl;
    return 0;
}
