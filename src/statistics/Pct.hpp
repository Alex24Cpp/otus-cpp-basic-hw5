#pragma once
#include <vector>
#include "IStatistics.hpp"

class Pct : public IStatistics {
public:
	Pct(double x);
	void update(double next) override;
	double eval() const override;
	const char* name() const override;
private:
	double m_percent;
	std::vector<double> m_vals;
	double m_pct;
};
