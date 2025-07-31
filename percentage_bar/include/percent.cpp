#include "percent.hpp"

Percent_bar::Percent_bar()
{
	struct winsize w;
	ioctl(STDOUT_FILENO, TIOCGWINSZ, &w);
	position_x = 0;
	position_y = 0;
	horizontal_size = w.ws_col;
	percent_bar_size = horizontal_size - 7; // "[" + bar + "] 100%"
}

void Percent_bar::show_percent_bar()
{
	if (max_value == 0)
		return;

	percent = (100 * current_value) / max_value;
	unsigned int filled_length = (percent_bar_size * percent) / 100;

	std::cout << "\r[";
	for (unsigned int i = 0; i < percent_bar_size; ++i)
	{
		if (i < filled_length)
			std::cout << "#";
		else
			std::cout << " ";
	}
	std::cout << "] " << percent << "%" << std::flush;
}
