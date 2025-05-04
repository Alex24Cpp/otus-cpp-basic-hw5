#include <math.h>
#include "Std.hpp"


Std::Std() : m_std{0}, m_mean{0}, m_sum{0} {
}

void Std::update(double next) {
	m_vals.push_back(next);
	m_sum += next;
	m_mean = m_sum / m_vals.size();
	double inter{0};
	for (auto val : m_vals) {
		inter += (val - m_mean) * (val - m_mean);
	}
	m_std = std::sqrt(inter / m_vals.size());
}

double Std::eval() const {
	return m_std;
}

const char* Std::name() const {
	return "std";
}
