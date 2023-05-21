#User function Template for python3

class Solution:
    def findIndex (self,array, N, key ):
        #code here.
        start = -1
        end = -1
        for i in range(N):
            if array[i] == key and start < 0:
                start = i
            if array[i] == key: 
                end = i
        return [start, end]


#{ 
 # Driver Code Starts
#Initial Template for Python 3


t=int(input())
for _ in range(0,t):
    n=int(input())
    a=list(map(int,input().split()))
    key=int(input())
    ob = Solution()
    ans=ob.findIndex(a, n, key )
    print(*ans)
    
# } Driver Code Ends