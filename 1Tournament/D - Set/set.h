#pragma once
#include <vector>

class Set {

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

	Set Intersection(const Set&) const {
		// {1, 2, 3, 4} /\ {3, 5, 7} = {3}
	}

	Set Difference(const Set&) const {
		// {1, 2, 3, 4} \ {3, 4, 5} = {1, 2}
	}

	Set SymmetricDifference(const Set&) const {
		// {1, 2, 3, 4} s\ {3, 4, 5} = {1, 2, 5}
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

private:
	std::vector<int64_t> data;
};
