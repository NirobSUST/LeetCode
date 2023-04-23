 class Solution {
 private:
 	vector<vector<string>> res_;
 	bool isSafe(vector<string>& vt, int row, int col, int n){
 		for(int i = 0; i < n; ++i){
 			if(vt[row][i] == 'Q') return false;
 			if(vt[i][col] == 'Q') return false;            
 		}
 		int tx = row, ty = col;
 		while(tx >= 0 && ty >= 0) if(vt[tx--][ty--] == 'Q') return false;
 		tx = row; ty = col;
 		while(tx >= 0 && ty < n) if(vt[tx--][ty++] == 'Q') return false;
 		return true;
 	}
 	void DFS(int row, vector<string>& vt, int n){
 		if(row == n) res_.push_back(vt);
 		else{
 			for(int i = 0; i < n; ++i){
 				if(isSafe(vt, row, i, n)){
 					vt[row][i] = 'Q';
 					DFS(row + 1, vt, n);
 					vt[row][i] = '.';
 				}
 			}
 		}
 	}
 public:
 	vector<vector<string>> solveNQueens(int n) {
 		res_ = vector<vector<string>>();
 		string st = "";
 		for(int i = 0; i < n; ++i) st += ".";
 		vector<string> temp(n, st);
 		DFS(0, temp, n);
 		return res_;
 	}
 };
