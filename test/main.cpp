/*#include<windows.h>
#include <GL/glut.h>
float x = 70, deltx = 0.005, y = 70, delty = 0.005;
void _3Points();
int main()
{
glutInitWindowSize(500,500);
glutInitWindowPosition(100,100);
glutCreateWindow("3Points");
gluOrtho2D(0,500,0,500);
glutDisplayFunc(_3Points);
glutMainLoop();
}

void _3Points()
{
glClearColor(1,1,1,0);
glClear(GL_COLOR_BUFFER_BIT);
glPointSize(30);
glBegin(GL_POINTS);
    glColor3f(1,0,1);
    glVertex2f(x,75);
    glColor3f(1,1,0);
    glVertex2f(75,y);
    glColor3f(0,1,0);
    glVertex2f(x,y);
glEnd();
glFlush();
x+=deltx;
 if(x>=400 || x<=70) deltx=-deltx;
 y+=delty;
 if(y>=400 || y<=70) delty=-delty;
 glutPostRedisplay();
}
*/

#include<windows.h>
#include <GL/glut.h>
bool stop = false, c = 1;
float x = 70, deltx = 0.005, y = 70, delty = 0.005;
void _3PointsE()
{
glClearColor(c,c,c,0);
glClear(GL_COLOR_BUFFER_BIT);
glPointSize(30);
glBegin(GL_POINTS);
glColor3f(1,0,1);
glVertex2f(x,75);
glColor3f(1,1,0);
glVertex2f(75,y);
glColor3f(0,1,0);
glVertex2f(x,y);
glEnd();
glFlush();
x+=deltx;
 if (x>=400 || x<=70) deltx=-deltx;
 y+=delty;
 if (y>=400 || y<=70) delty=-delty;
 if (stop) glutPostRedisplay();
}
void key(unsigned char ch, int x, int y)
{
if(ch=='s') stop=!stop; //Start and Stop
else if(ch=='b') c=!c; //Change Color
else if(ch=='c') exit(0); //Exit
glutPostRedisplay();
}
int main()
{
glutInitWindowSize(500,500);
glutInitWindowPosition(100,100);
glutCreateWindow("3PointsE");
gluOrtho2D(0,500,0,500);
glutKeyboardFunc(key);
glutDisplayFunc(_3PointsE);
glutMainLoop();
}

/*
#include<windows.h>
#include <GL/glut.h>
float x = 75, y = 75;
void PointOnChess(){
 bool c=0;
 glClearColor(0,1,1,0);
 glClear(GL_COLOR_BUFFER_BIT);
 for(int j=0; j<400; j+=50){
 for(int i=0; i<400; i+=50){
glBegin(GL_POLYGON);
 glColor3f(c,c,c);
 glVertex2f(i+50,j+50);
 glVertex2f(i+100,j+50);
 glVertex2f(i+100,j+100);
 glVertex2f(i+50,j+100);
 glEnd();
 c=!c;
 }
 c=!c;
 }
glPointSize(30);
 glBegin(GL_POINTS);
 glColor3f(0,1,0);
 glVertex2f(x,y);
 glEnd();
 glFlush();
 glutPostRedisplay();
}
void move_up(){
if (y<400) y+=50;
}
void move_down(){
if (y>75) y-=50;
}
void move_left(){
if (x>75) x-=50;
}
void move_right(){
if (x<400) x+=50;
}
void key(int c,int x,int y){
switch(c){
 case GLUT_KEY_UP:
 move_up();
 break;
case GLUT_KEY_DOWN:
 move_down() ;
 break;
 case GLUT_KEY_LEFT:
 move_left() ;
 break;
 case GLUT_KEY_RIGHT:
 move_right() ;
 break;
 }
if(c==GLUT_KEY_END) exit(0);
 //else if(c==GLUT_KEY_RIGHT)move_right();
 glutPostRedisplay();
}
int main(){
glutInitWindowSize(500,500);
glutInitWindowPosition(100,100);
glutCreateWindow("P_Chess");
gluOrtho2D(0,500,0,500);
glutSpecialFunc(key);
glutDisplayFunc(PointOnChess);
glutMainLoop();
}
*/
