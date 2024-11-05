#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
#define PI 3.141592653589793238

int main() {
   int t;
   cin >> t;
   while(t--) {
		double xA,yA,xB,yB,xC,yC;
		cin >> xA >> yA >> xB >> yB >> xC >> yC;
		
		double a,b,c;
		a = sqrt(pow(xC - xB,2) + pow(yC - yB,2));
		b = sqrt(pow(xA - xC,2) + pow(yA - yC,2));
		c = sqrt(pow(xA - xB,2) + pow(yA - yB,2));
		
		if(a + b <= c || b + c <= a || a + c <= b){
			cout << "INVALID";
		} else  {
			double p = (a + b + c)/2;
			double x = a*b*c;
			double dienTich = 4.0*sqrt(p*(p-a)*(p-b)*(p-c));
			
			double R = (double)(x*1.0/dienTich);
			
			cout << fixed << setprecision(3) <<  PI*R*R ;
		}
		cout << endl;
   }
}

