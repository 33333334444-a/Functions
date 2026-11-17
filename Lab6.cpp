#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

bool geometricMean(const vector<double>& arr, double& result) {
  int count = 0;
  double product = 1.0;

  for (double val : arr) {
    if (val > 0) {
      product *= val;
      ++count;
    }
  }
  if (count == 0) {
    return false;
  } else {
    result = pow(product, 1.0 / count);
    return true;
  }
}

int main() {
  int n;
  cin >> n;
  int m;
  cin >> m;
  int k;
  cin >> k;
  if (n < 0 || m < 0 || k < 0) {
    cout << "Invalid array size";
    return 1;
  }

  vector<double> massiveE;
  for (int i = 0; i < n; ++i) {
    double value;
    cin >> value;
    massiveE.push_back(value);
  }
  vector<double> massiveS;
  for (int i = 0; i < m; ++i) {
    double value;
    cin >> value;
    massiveS.push_back(value);
  }
  vector<double> massiveC;
  for (int i = 0; i < k; ++i) {
    double value;
    cin >> value;
    massiveC.push_back(value);
  }

  double resultE;
  double resultS;
  double resultC;
  if (geometricMean(massiveE, resultE)) {
    cout << "\nGeometric mean E = " << resultE;
  } else {
    cout << "\nNo positive elements in E";
  }
  if (geometricMean(massiveS, resultS)) {
    cout << "\nGeometric mean S = "  << resultS;
  } else {
    cout << "\nNo positive elements in S";
  }
  if (geometricMean(massiveC, resultC)) {
    cout << "\nGeometric mean C = " << resultC;
  } else {
    cout << "\nNo positive elements in C";
  }
}