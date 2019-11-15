#include <ratio>
#include <iostream>
#include <cstdlib>

int main(int, char**) {
	constexpr auto pulsewidth_resolution = 4096;
	constexpr auto hardware_clock = 25 * (std::mega::num / std::mega::den);

	std::cout << hardware_clock << std::endl;

	return EXIT_SUCCESS;
}

