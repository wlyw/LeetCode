class Solution {
public:
    double findMedianSortedArrays(int A[], int m, int B[], int n) {
        int count = 0;
        int qm=0,qn=0;
        double rec;
        double r1,r2;
        if((m+n)%2 != 0)
        {
            for(int i=0;i<((m+n)/2+1);i++)
            {
                int temp;
                if(qm < m && qn < n)
                {
                    if(A[qm]<B[qn]) {temp=A[qm];qm++;}
                    else {temp=B[qn];qn++;}
                }
                else if(qm < m) {temp=A[qm];qm++;}
                else {temp=B[qn];qn++;}
                if(i == (m+n)/2) rec = temp;
            }
        }
        else
        {
            for(int i=0;i<((m+n)/2+1);i++)
            {
                int temp;
                if(qm < m && qn < n)
                {
                    if(A[qm]<B[qn]) {temp=A[qm];qm++;}
                    else {temp=B[qn];qn++;}
                }
                else if(qm < m) {temp=A[qm];qm++;}
                else {temp=B[qn];qn++;}
                if(i == (m+n)/2 - 1) r1 = temp;
                if(i == (m+n)/2) r2 = temp;
            }
            rec = (r1 + r2)/2.0;
        }
        return rec;
    }
};