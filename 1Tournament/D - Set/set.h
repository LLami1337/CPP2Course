// 22.09
#pragma once
#include <vector>

class Set {

private:
	std::vector<int64_t> data;

public:
	Set() {
		data.clear();
	}

	Set(const std::vector<int64_t>& data) {
		this->data = data;
	}

	Set Union(const Set& variety) const {
		// {1, 2, 3, 4} \/ {5, 6, 7} = {1, 2, 3, 4, 5, 6, 7}
		std::vector<int64_t> first_variety = variety.Data();
		std::vector<int64_t> second_variety = this->Data();
		std::vector<int64_t> final_variety;
		std::vector<int> counts = { 0,0,0,0,0,0,0 };

		for (auto number : first_variety) {
			counts[number-1]++;
		}

		for (auto number : second_variety) {
			counts[number-1]++;
		}

		for (auto number : counts) {
			if (counts[number] == 1) {
				final_variety.push_back(number);
			}
		}

		return final_variety;
	}

	Set Intersection(const Set& variety) const {
		// {1, 2, 3, 4} /\ {3, 5, 7} = {3}
		std::vector<int64_t> first_variety = variety.Data();
		std::vector<int64_t> second_variety = this->Data();
		std::vector<int64_t> final_variety;
		std::vector<int> counts = { 0,0,0,0,0,0,0 };

		for (auto number : first_variety) {
			counts[number - 1]++;
		}
		for (auto number : second_variety) {
			counts[number - 1]++;
		}

		for (auto number : counts) {
			if (counts[number] == 2) {
				final_variety.push_back(number);
			}
		}

		return final_variety;
	}

	Set Difference(const Set& variety) const {
		// {1, 2, 3, 4} \ {3, 4, 5} = {1, 2}
		std::vector<int64_t> first_variety = variety.Data();
		std::vector<int64_t> second_variety = this->Data();
		std::vector<int64_t> final_variety;

		return final_variety;
	}

	Set SymmetricDifference(const Set& variety) const {
		// {1, 2, 3, 4} s\ {3, 4, 5} = {1, 2, 5}
		std::vector<int64_t> first_variety = variety.Data();
		std::vector<int64_t> second_variety = this->Data();
		std::vector<int64_t> final_variety;

		return final_variety;
	}


	void Add(int64_t num) {
		// {1, 1, 1, 1} + {2, 3, 3} = {1, 2, 3}
	}

	void Remove(int64_t num) {
		// {1, 2, 3, 4} - {1, 2, 3} = {4}
	}

	bool Contains(int64_t num) const {
		// {1, 2, 3, 4} ? {3, 4, 5} = {1, 2, 3, 4, 9, 16}
	}

	std::vector<int64_t> Data() const {
		return data;
	}
};
