#pragma once

class Date {
private:
	int year;
	int month;
	int day;
	int defaultYear[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int leapYear[12] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

public:
	Date(int year, int month, int day) {
		if (isValidDate(year, month, day)) {
			this->year = year;
			this->month = month;
			this->day = day;
		}
	}

	bool isValidDate(int y, int m, int d) {
		if (y < 0 or m < 0 or d < 0) {
			return false;
		}
		else if (m <= 12 && d <= 31)
		return true;
	}

	bool IsLeap() const {
		if (year % 4 == 0)
		{
			if (year % 100 == 0)
			{
				if (year % 400 == 0)
					return true;
				else
					return false;
			}
			else
				return true;
		}
		else
			return false;

		return 0;
	}

	private: bool IsLeap(int year) const {
		if (year == 2000)
		if (year % 4 == 0)
		{
			if (year % 100 == 0)
			{
				if (year % 400 == 0)
					return true;
				else
					return false;
			}
			else
				return true;
		}
		else
			return false;

		return 0;
	}


	std::string ToString() const {
		std::string yearStr = std::to_string(year);
		std::string monthStr = std::to_string(month);
		std::string dayStr = std::to_string(day);

		if (day < 10) dayStr = "0" + dayStr;
		if (month < 10) monthStr = "0" + monthStr;
		if (year < 10) yearStr = "000" + yearStr;
		if (year >= 10 && year < 100) yearStr = "00" + yearStr;
		if (year >= 100 && year < 1000) yearStr = "0" + yearStr;
		
		return dayStr + "." + monthStr + "." + yearStr;
	}

	Date DaysLater(int days) const {
		int leapCount = 0;
		for (int i = 0; i < year; i++) {
			
		}
		
	}

	private: int daysInDate() const{
		int days = 0;
		for (int i = 0; i < this -> year; i++) {
			if (IsLeap(i)) days += 366;
			else days += 365;
		}
		if (IsLeap(this->year)) {
			for (int i = 0; i < this->month - 1; i++) {
				days += leapYear[i];
			}
		}
		else {
			for (int i = 0; i < this->month - 1; i++) {
				days +=defaultYear[i];
			}
		}
		days += this->day;
		return days;
	}
	
	public:	int DaysLeft(const Date& date) const {
		return abs(date.daysInDate() - daysInDate());
	}
};
