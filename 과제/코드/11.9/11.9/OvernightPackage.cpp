#include "OvernightPackage.h"
using namespace std;

OvernightPackage::OvernightPackage(const string& name_s, const string& name_r,
	const string& address_s, const string& address_r,
	const string& city_s, const string& city_r,
	const string& state_s, const string& state_r,
	const string& ZIPcode_s, const string& ZIPcode_r,
	double weight_input, double cost_per_input, double additional_fee_input)
	: Package(name_s, name_r, address_s, address_r, city_s, city_r, state_s, state_r,
		ZIPcode_s, ZIPcode_r, weight_input, cost_per_input)
{
	additional_fee = additional_fee_input;
}

double OvernightPackage::calculateCost() const { return (get_cost_per() + additional_fee) * get_weight(); }