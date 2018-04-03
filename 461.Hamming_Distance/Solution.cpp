/*
// Orginal solution from Brandon
class Solution {
public:
    int hammingDistance(int x, int y) {
        int hamDistance = 0;
        if ((x > 0 && x < INT_MAX) && (y > 0 && y < INT_MAX)) {
          for (int i = 0; i < 32; i++ ) {
              if (x < y) {
                x << hamDistance;
              } else if (x > y) {
                x >> hamDistance;
              } else {
               return hamDistance;
              }
              hamDistance++;
          }   
        }
        return hamDistance;
    }
};
*/

// Optimized solution from discussion
class Solution {
public:
  int hammingDistance(int x, int y) {
    int hamDist = 0;
    int n = x ^ y;
    while (n) {
      ++hamDist;
      n &= n - 1;
    }
    return hamDist;
  }
};