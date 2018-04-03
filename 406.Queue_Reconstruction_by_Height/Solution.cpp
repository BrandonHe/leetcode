class Solution {
public:
	vecotr<pair<int, int>> reconstructQueen(vector<pair<int, int>>& people) {
		auto cmp = [](const pair<int, int> p1, const pair<int, int> p2) {
			return (p1.first > p2.first || (p1.first == p2.first && p1.second < p2.second));
		};
		sort(people.begin(), people.end(), cmp);
		vector<pair<int, int>> ppl;
		for(auto& person: people) {
			ppl.insert(ppl.begin(), ppl.begin() + person.second, person);
		}
		return ppl;
	}
};