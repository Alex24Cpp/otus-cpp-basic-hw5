#include <algorithm>  // std::sort
#include <cmath>
#include <sstream>
#include <string>
#include "Pct.hpp"


Pct::Pct(double x) : m_percent{x}, m_pct{0} {
}

void Pct::update(double next) {  // n = (P x N)/100, где P - процентиль,
								 // N - общее количество значений
	m_vals.push_back(next);
	double inter = (m_percent * m_vals.size()) / 100;
	int n = static_cast<int>(floor(inter));
	std::sort(m_vals.begin(), m_vals.end());
	m_pct = m_vals.at(n);
}

double Pct::eval() const {
	return m_pct;
}

const char* Pct::name() const {
	std::ostringstream os;
	os << "pct" << m_percent;
	static std::string str = os.str();
	return str.c_str();
}
