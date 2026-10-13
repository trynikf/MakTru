#include <iostream>

int main()
{ 
    int day;
    std::cout << "Введите номер дня в месяце: ";
    std::cin>>day;

    int month;
	std::cout << "Введите номер месяца: ";
	std::cin >> month;

    int year;
	std::cout << "Введите номер года: ";
	std::cin >> year;

    int last_num_year = year%100;
    int first_num_year = year/100;

    if (month < 3)
    {
        month += 12;
        year -= 1;
    }

    int day_of_the_week = 
    (
        day 
        + (13 * (month + 1) / 5) 
        + last_num_year
        + (last_num_year / 4)
        + (first_num_year / 4)
        - (2 * first_num_year)
    ) % 7;

    switch(day_of_the_week) 
    {
        case 0: 
			std::cout << "Суббота" << std::endl;
			break;
		case 1: 
			std::cout << "Воскресенье" << std::endl;
			break;
		case 2: 
			std::cout << "Понедельник" << std::endl;
			break;
		case 3: 
			std::cout << "Вторник" << std::endl;
			break;
		case 4: 
			std::cout << "Среда" << std::endl;
			break;
		case 5: 
			std::cout << "Четверг" << std::endl;
			break;
		case 6: 
			std::cout << "Пятница" << std::endl;
			break;
	}

return 0;
}