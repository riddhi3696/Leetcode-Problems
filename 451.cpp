class Solution {
public:
  string frequencySort(string str) {
    vector<int> freqs(256);
    for (const char& ch : str)
      ++freqs[ch];

    vector<vector<char>> bucket(str.length() + 1);
    for (int i = 255; i >= 0; --i)
      if (freqs[i]) 
        bucket[freqs[i]].push_back(static_cast<char>(i));

    string sorted;
    for (int freq = str.length(); freq >= 0; --freq) 
      for (const char& ch : bucket[freq])
        sorted += string(freq, ch);

    return sorted;
  }
};
