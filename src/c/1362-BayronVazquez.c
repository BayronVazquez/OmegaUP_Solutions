#include <stdio.h>
 
#define MAXL 110
#define ROWS 4
#define COLS 10
#define DIRS 8
 
int dr[DIRS] = {2,2,1,-1,-2,-2,1,-1};
int dc[DIRS] = {1,-1,2,2,1,-1,-2,-2};
 
char vis[MAXL][ROWS][COLS][ROWS][COLS];
char poem[MAXL];
 
char *keys[2][4] = {
	{"qwertyuiop","asdfghjkl;","zxcvbnm,./","**      **"},
	{"QWERTYUIOP","ASDFGHJKL:","ZXCVBNM<>?","**      **"}
};
 
int dfs(int i, int ar, int ac, int br, int bc){
	int d;
	char nc;
 
	if (poem[i] == '\0') return 1;
	else if (vis[i][ar][ac][br][bc]) return 0;
	vis[i][ar][ac][br][bc] = 1;
 
	for (d = 0; d < DIRS; d++){
		int ar_ = ar + dr[d];
		int ac_ = ac + dc[d];
 
		if (ar_ >= 0 && ar_ < ROWS &&
		    ac_ >= 0 && ac_ < COLS &&
		    (ar_ != br || ac_ != bc) &&
		    (
		     (nc = keys[keys[0][br][bc] == '*'][ar_][ac_]) == poem[i] ||
		     nc == '*'
		    ) &&
		    dfs(i + (nc != '*'), ar_, ac_, br, bc))
			return 1;
	}
 
	return dfs(i, br, bc, ar, ac);
}
 
int main(void){
	gets(poem);
	printf("%c\n", dfs(0,3,0,3,9) + '0');
	return 0;
}