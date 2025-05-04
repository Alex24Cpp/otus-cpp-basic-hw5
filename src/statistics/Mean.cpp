#include <limits>
#include "Mean.hpp"


Mean::Mean() : m_mean{0}, m_counter{1}, m_sum{0} {
}

void Mean::update(double next) {
	m_sum += next;
	m_mean = m_sum / m_counter;
	m_counter++;
}

double Mean::Mean::eval() const {
	return m_mean;
}

const char* Mean::name() const {
	return "mean";
}
