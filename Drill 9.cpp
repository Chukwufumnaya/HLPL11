#include "std_lib_facilities.h"
enum class Month 
{
    jan=1, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec
};

vector<string> months = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };

ostream& operator<<(ostream& os, Month m)
{
    return os << months[int(m)];
}

class Date {
    int y;
    Month m;
    int d;
public:
    Date(int y, Month m, int d);
    void add_day(int n);
    int year() const { return y; }
    Month month() const { return m; }
    int day() const { return d; }
};

Date::Date(int yy, Month mm, int dd)
    :y{yy}, m{mm}, d{dd}
{
    if (d < 1 || 31 < d) error("impossible day");
}

void Date::add_day(int n)
{
    d += n;
    if (d > 31) d %= 31;
}

ostream& operator<<(ostream& os, const Date& d)
{
    return os << '(' << d.year()
              << ',' << d.month()
              << ',' << d.day() << ')';
}

int main()
try
{
    Date today(1978, Month::jun, 25);
    Date tomorrow = today;
    tomorrow.add_day(1);

    cout << today << endl;
    cout << tomorrow << endl;


}
catch(exception& e) {
    cerr << e.what() << '\n';
    return 1;
}
catch(...) {
    cerr << "Error" << '\n';
    return 2;
}