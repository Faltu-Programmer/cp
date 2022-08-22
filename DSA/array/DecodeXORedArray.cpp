/// 1720. Decode XORed Array TC -> O(n), SC -> O(1)...
class Solution 
{
public:
    vector<int> decode(vector<int>& encodedArray, int first) 
    {
        int sizeOFencodedArray = encodedArray.size();
        
        encodedArray.insert(encodedArray.begin(),first);
        
        for(int i=0;i<sizeOFencodedArray;i++)
        {
            int nextElementOfAnsArray = encodedArray[i] ^ encodedArray[i+1];
            encodedArray[i+1] = nextElementOfAnsArray;
        }
        return encodedArray;
    }
};
