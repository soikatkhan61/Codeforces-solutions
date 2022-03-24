#include<iostream>
using namespace std;
#define max(a,b) a>b?a:b;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int b, p, f, h,c;
		cin >> b >> p >> f;
		cin >> h >> c;
		if (h >= c)
		{
			int x = b / 2;
			if (p >= x) {
				cout << x*h<<endl;

			}
			if (p < x)
			{
				int a2=0;
				int a1 = p*h;
				if (f >= x - p)
				{
					a2 = c*(x - p);
					cout << a2 + a1 << endl;
				}
					if (f < x - p)
					{
						cout << f*c + a1 << endl;

					}
			}

		}
		else{

			int x1= b / 2;
			if (f>= x1) {
				cout << x1*c << endl;

			}
			if (f < x1)
			{
				int a21=0;
				int a11 = c*f;
				if (p >= x1 - f)
				{
					a21 = h*(x1 - f);
					cout << a21 + a11 << endl;
				}
				if (p< x1 - f)
				{
					cout << p*h + a11<<endl;
				}
			}
		}
	}

	return 0;
}
