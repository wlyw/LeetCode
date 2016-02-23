struct node
{
    int num,pos;
};

bool cmp(node a,node b)
{
    return a.num<b.num;
}

class Solution {
public:
    vector<int> twoSum(vector<int> &numbers, int target) {
        vector<int> results;
        vector<node> arr;
        
        for(int i=0;i<numbers.size();i++)
        {
            node temp;
            temp.num = numbers[i];
            temp.pos = i;
            arr.push_back(temp);
        }
        
        sort(arr.begin(),arr.end(),cmp);
        
        int head=0;
        int tail=arr.size()-1;
        
        while(head<tail)
        {
            if(arr[head].num + arr[tail].num > target)
                tail--;
            else if(arr[head].num + arr[tail].num < target)
                head++;
            else
            {
                results.push_back(arr[head].pos < arr[tail].pos ? arr[head].pos+1 : arr[tail].pos+1);
                results.push_back(arr[head].pos > arr[tail].pos ? arr[head].pos+1 : arr[tail].pos+1);
                break;
            }
        }
        return results;
    }
};