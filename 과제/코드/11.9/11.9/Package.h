#ifndef PACKAGE_H
#define PACKAGE_H

#include <string>

class Package
{
public:
	Package(const std::string&, const std::string&, const std::string&, const std::string&, const std::string&,
		const std::string&, const std::string&, const std::string&, const std::string&, const std::string&,
		double = 0.0, double = 0.0);

	double calculateCost() const;

	double get_cost_per() const; double get_weight() const;
	std::string get_name_sender() const; std::string get_name_recipient() const;
	std::string get_address_sender() const; std::string get_address_recipient() const;
	std::string get_city_sender() const; std::string get_city_recipient() const;
	std::string get_state_sender() const; std::string get_state_recipient() const;
	std::string get_ZIPcode_sender() const; std::string get_ZIPcode_recipient() const;
private:
	std::string name_sender, name_recipient;
	std::string address_sender, address_recipient;
	std::string city_sender, city_recipient;
	std::string state_sender, state_recipient;
	std::string ZIPcode_sender, ZIPcode_recipient;
	double weight;
	double cost_per;
};

#endif // !PACKAGE_H
