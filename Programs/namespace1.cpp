#include <iostream>
using std::cout;
using std::endl;
//Namespace 


namespace ns1 
{
	const double pi = 3.14;
	int value()
	{
		return 5;
	}
};
namespace ns2
{
	const double pi=3.1345634;
	double value()
	{
		return 2*(ns1::pi);
	}
};
int main()
{
	cout <<"ns1::value : " << ns1::value() << endl;
	cout << "ns1::value : " << ns2::value() << endl;
	cout << "ns1::pi : "  << ns1::pi << endl;
	cout <<  "ns2::pi : "<< ns2::pi << endl;

	return 0;
}


