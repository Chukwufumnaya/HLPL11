#include "std_lib_facilities.h"

class Point 
{
public:
	int x;
	int y;
};
ostream& operator<<(ostream& os, Point& p)
{
	return os << '(' << p.x << ',' << p.y << ')';
}
int main()
try {
	cout << "Please input seven (x,y) pairs" << endl;
	vector<Point> original_points;
	int i = 1;
	for (i = 1; i < 8; i++)
	{
		char a, b, c;
		int xx, yy;
		cin >> a >> xx >> b >> yy >> c;
		original_points.push_back(Point{ xx, yy });
	}
	cout << "Original points:" << endl;
	for (auto o : original_points)
		cout << o << endl;

	string fname = "mydata.txt";
	ofstream ofs{ fname };
	if (!ofs) error("Cannot open file: ", fname);
	for (Point P : original_points)
		ofs << P;
	
	
	ofs.close();
	vector<Point> processed_points;

	ifstream ifs{ fname };
	if (!ifs) error("Cannot open input file: ", fname);
	for (i = 1; i < 8; i++)
	{
		char a, b, c;
		int xx, yy;
		ifs >> a >> xx >> b >> yy >> c;
		processed_points.push_back(Point{ xx,yy });
	}

	cout << "Data elements:" << endl;
	for (auto p : processed_points)
		cout << p << endl;

	cout << "Original points:" << endl;
	for (auto o : original_points)
		cout << o << endl;
	 
	
	if (original_points.size() != processed_points.size())
		cout << "Something's wrong!" << endl;
}
catch (exception& e) {
	cerr << "Error: " << e.what() << endl;
	return 1;
}
catch (...) {
	cerr << "Error!" << endl;
	return 2;
}