#pragma once
#include <vector>
#include "IStatistics.hpp"

class Std : public IStatistics {
public:
	Std();
	void update(double next) override;
	double eval() const override;
	const char* name() const override;
private:
	double m_std;
	double m_mean;
	double m_sum;
	std::vector<double> m_vals;
};
