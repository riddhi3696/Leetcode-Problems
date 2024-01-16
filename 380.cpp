import random

class RandomizedSet(object):

    def __init__(self):
    
        self.nums,self.pos=[],{}

    def insert(self, val):
      
        if val not in self.pos:
            self.pos[val]=len(self.nums)
            self.nums.append(val)
            return True
        return False

    def remove(self, val):
     
        if val in self.pos:
            idx,last=self.pos[val],self.nums[-1]
            self.nums[idx],self.pos[last]=last,idx
            self.nums.pop()
            self.pos.pop(val,0)
            return True
        return False

    def getRandom(self):
       
        return random.choice(self.nums)
