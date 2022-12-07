#include "Package.h"
using namespace std;

Package::Package(const string& name_s, const string& name_r,
	const string& address_s, const string& address_r,
	const string& city_s, const string& city_r,
	const string& state_s, const string& state_r,
	const string& ZIPcode_s, const string& ZIPcode_r,
	double weight_input, double cost_per_input)
{
	name_sender = name_s; name_recipient = name_r;
	address_sender = address_s; address_recipient = address_r;
	city_sender = city_s; city_recipient = city_r;
	state_sender = state_s; state_recipient = state_r;
	ZIPcode_sender = ZIPcode_s; ZIPcode_recipient = ZIPcode_r;
	if (weight_input >= 0.0) { weight = weight_input; }
	if (cost_per_input >= 0.0) { cost_per = cost_per_input; }
}

double Package::calculateCost() const { return weight * cost_per; }

double Package::get_cost_per() const { return cost_per; }
double Package::get_weight() const { return weight; }

string Package::get_name_sender() const { return name_sender; }
string Package::get_name_recipient() const { return name_recipient; }

string Package::get_address_sender() const { return address_sender; }
string Package::get_address_recipient() const { return address_recipient; }

string Package::get_city_sender() const { return city_sender; }
string Package::get_city_recipient() const { return city_recipient; }

string Package::get_state_sender() const { return state_sender; }
string Package::get_state_recipient() const { return state_recipient; }

string Package::get_ZIPcode_sender() const { return ZIPcode_sender; }
string Package::get_ZIPcode_recipient() const { return ZIPcode_recipient; }