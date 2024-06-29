// https://www.codingninjas.com/studio/problems/painter's-partition-problem_1089557?source=youtube&campaign=love_babbar_codestudio2&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio2&leftPanelTabValue=SUBMISSION

bool isPossible(vector<int> &boards, int k , int mid){
    int painterCount = 1;
    int SumBoards = 0;
    for(int i=0 ; i<boards.size() ; i++){
        if(SumBoards + boards[i] <= mid){
            SumBoards += boards[i];
        }
        else
        {
            painterCount++;
            if(painterCount > k || boards[i] > mid){
                return false;
            }
            SumBoards = boards[i];
        } 
    }

    return true;
}

int findLargestMinDistance(vector<int> &boards, int k)
{
    int s=0, sum=0 ;
    for(int i=0 ; i<boards.size() ; i++){
        sum += boards[i];
    }
    int e = sum;
    int ans = -1;

    int mid = s + (e-s)/2;
    while(s <= e){
        if(isPossible(boards,k,mid)){
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }

        mid = s + (e-s)/2;
    }
    return ans;
    }