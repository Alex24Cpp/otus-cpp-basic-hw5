#include <iostream>

#include "IStatistics.hpp"
#include "Max.hpp"
#include "Mean.hpp"
#include "Min.hpp"
#include "Pct.hpp"
#include "Std.hpp"

int main() {
	const size_t statistics_count = 6;
	IStatistics *statistics[statistics_count] = {
		new Min(), new Max(), new Mean(), new Std(), new Pct(90), new Pct(95)};

	double val = 0;
	while (std::cin >> val) {
		for (size_t i = 0; i < statistics_count; ++i) {
			statistics[i]->update(val);
		}
	}

	// Handle invalid input data
	if (!std::cin.eof() && !std::cin.good()) {
		std::cerr << "Invalid input data\n";
		return 1;
	}

	// Print results if any
	std::cout << std::endl;
	for (size_t i = 0; i < statistics_count; ++i) {
		std::cout << statistics[i]->name() << " = " << statistics[i]->eval()
				  << std::endl;
	}

	// Clear memory - delete all objects created by new
	for (size_t i = 0; i < statistics_count; ++i) {
		delete statistics[i];
	}

	return 0;
}