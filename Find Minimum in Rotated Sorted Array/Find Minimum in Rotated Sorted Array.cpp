/* author: wlyw
 * date: 2016/2/23
 * description:
 */

class Solution {
public:
    int findMin(vector<int>& nums) {
    if (nums.size() == 1)
		return *nums.begin();
	auto begin = nums.begin();
	auto end = nums.end()-1;
	int fuck = *begin;
	int temp = *begin;

	if (*begin < *end)
		return *begin;

	while (begin <= end)
	{
		auto mid = begin + (end - begin) / 2;
		if (mid == begin) 
		{ 
			temp = *begin < *end ? *begin : *end;
			break;
		}
		if (*mid < *begin )
		{ 
			end = mid; 
		}
		else if (*mid > *begin)
		{ 
			if(*mid > fuck)
				begin = mid + 1;
			else end = mid;
		}
	}
	return temp;
    }
};