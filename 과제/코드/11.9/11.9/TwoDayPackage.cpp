#include "TwoDayPackage.h"
using namespace std;

TwoDayPackage::TwoDayPackage(const string& name_s, const string& name_r,
	const string& address_s, const string& address_r,
	const string& city_s, const string& city_r,
	const string& state_s, const string& state_r,
	const string& ZIPcode_s, const string& ZIPcode_r,
	double weight_input, double cost_per_input, double flat_fee_input)
	: Package(name_s, name_r, address_s, address_r, city_s, city_r, state_s, state_r,
		ZIPcode_s, ZIPcode_r, weight_input, cost_per_input)
{
	flat_fee = flat_fee_input;
}

double TwoDayPackage::calculateCost() const { return Package::calculateCost() + flat_fee; }