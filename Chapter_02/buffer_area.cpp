#include <iostream>
#include <cmath>
using namespace std;

struct Point {
    double x;
    double y;
};

int main() {

    Point center;

    cout << "Enter center point (x y): ";
    cin >> center.x >> center.y;

    int n;

    cout << "Enter number of points: ";
    cin >> n;

    Point points[100];

    cout << "Enter the coordinates of the points:\n";

    for (int i = 0; i < n; i++) {
        cout << "Point " << i + 1 << ": ";
        cin >> points[i].x >> points[i].y;
    }

    double buffers[] = {5, 10, 15};
    int numberOfBuffers = 3;

    for (int b = 0; b < numberOfBuffers; b++) {

        double radius = buffers[b];

        cout << "\nPoints within buffer of radius "
             << radius << ":\n";

        bool found = false;

        for (int i = 0; i < n; i++) {

            double distance = sqrt(
                pow(points[i].x - center.x, 2) +
                pow(points[i].y - center.y, 2)
            );

            if (distance <= radius) {

                cout << "Point " << i + 1
                     << " (" << points[i].x
                     << ", " << points[i].y << ")";

                cout << " - Distance: " << distance << endl;

                found = true;
            }
        }

        if (!found) {
            cout << "No points found in this buffer.\n";
        }
    }

    return 0;
}