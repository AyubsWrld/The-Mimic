void splash_screen();
void display_level1(int state) ; 
void display_level2(int state) ; 
void display_level3(int state) ; 
void display_level(int level);
void moveP(int startPos, int x , int y );
int checkBounds(int x, int y);
void checkObjective(int gameState, int x , int y ) ;
int checkObstacle( int x , int y );
