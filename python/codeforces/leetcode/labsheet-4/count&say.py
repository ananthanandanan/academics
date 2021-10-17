class Solution:
    def countAndSay(self, n: int) -> str:
        def fun(nums,res):
            if nums == n+1:
                return res
            if nums==1:
                return fun(nums+1,"1")
            if nums>=2:
                
                temp = ""
                count = 1
                for i in range(len(res)-1):
                    if res[i] == res[i+1]:
                        count+=1
                    else:
                        temp+=str(count)+res[i]
                        count = 1
                if len(res)>1 and res[-1]==res[-2]:
                    temp+=str(count)+res[i]
                else:
                    temp+="1"+res[-1]
                return fun(nums+1,temp)
        return fun(1,"")