void splash_screen();
void display_level1(int state) ; 
void display_level2(int state) ; 
void display_level3(int state) ; 
void display_level(int level);
void moveP(int startPos, int x , int y );
int checkBounds(int x, int y);
int checkObstacle(int level,int x , int y );
int nonPlayingChar(int level);
void endScr();