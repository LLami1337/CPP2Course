// 24.09
#pragma once
#include <vector>
#include <iostream>
#include <algorithm>

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
		
	}

	Set Intersection(const Set& variety) const {
		// {1, 2, 3, 4} /\ {3, 5, 7} = {3}
		
	}

	Set Difference(const Set& variety) const {
		// {1, 2, 3, 4} \ {3, 4, 5} = {1, 2}
		
	}

	Set SymmetricDifference(const Set& variety) const {
		// {1, 2, 3, 4} s\ {3, 4, 5} = {1, 2, 5}
	
	}

	void Add(int64_t num) {
		if (!Contains(num)) {
			data.push_back(num);
			Sort();
		}
	}

	void Remove(int64_t num) {
		if (Contains(num)) {
			data.erase(std::find(data.begin(), data.end(), num));
			Sort();
		}
 	}

	bool Contains(int64_t num) const {
		if (std::find(data.begin(), data.end(), num) != data.end())
			return true;
		else
			return false;
	}

	void Sort() {
		std::sort(data.begin(), data.end());
	}

	std::vector<int64_t> Data() const {
		return data;
	}
};
