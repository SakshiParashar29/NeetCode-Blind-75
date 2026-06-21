class Solution {
	public:
	int minMeetingRooms(vector<int> &start, vector<int> &end) {
		int n = start.size();
		
		vector<pair<int, int>> arr;
		
		for (int i = 0; i < n; i++) {
			arr.push_back({start[i], 1});
			arr.push_back({end[i], -1});
		}
		
		sort(arr.begin(), arr.end());
		
		int room = 0;
		
		int overlap = 0;
		
		for (int i = 0; i < arr.size(); i++) {
			if(arr[i].second == 1) overlap++;
			else overlap--;
			room = max(overlap, room);
		}
		
		return room;
	}
};
