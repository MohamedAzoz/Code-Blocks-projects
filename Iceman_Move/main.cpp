#include<windows.h>
#include <GL/glut.h>
#include <math.h>
float xx=130,yy=170,s=145,w=150,c=240,v=60,m=130,n=160;

float x=150,y=100,r=150,y2=250,r2=110,y3=360,r3=60;
double pi=22/7;

void mydisplay_1();
void right(){
if(x<350)
{

    x+=50;
    xx+=50;
    yy+=50;
    w+=50;
    s+=50;
    v+=50;
    c+=50;
    n+=50;
    m+=50;
}
}
void left(){
if(x>150)
{
    x-=50;
    xx-=50;
    yy-=50;
    w-=50;
    s-=50;
    v-=50;
    c-=50;
    n-=50;
    m-=50;
}
}
void key(int d,int x,int y){
 switch(d){
 case GLUT_KEY_END:exit(0);break;
 case GLUT_KEY_RIGHT:right();break;
 case GLUT_KEY_LEFT:left();break;
 }
}
int main()
{
	glutInitWindowSize(500,500);
	glutInitWindowPosition(100,100);
	glutCreateWindow("project_1");
	gluOrtho2D(0,500,0,500);
	glutDisplayFunc(mydisplay_1);
	glutSpecialFunc(key);
	glutMainLoop();
}

void mydisplay_1()
{
glClearColor(0.5,0.5,0.5,0);
glClear(GL_COLOR_BUFFER_BIT);
glLineWidth(3);
glBegin(GL_POLYGON);
    for(float i=0;i<=2*pi;i+=pi/360){
        glColor3f(1,1,1);
        glVertex2f(x+sin(i)*r,y+cos(i)*(r*0.7));

    }
    glEnd();

glBegin(GL_POLYGON);
    for(float i=0;i<=2*pi;i+=pi/360){
        glColor3f(1,1,1);
        glVertex2f(x+sin(i)*r2,y2+cos(i)*(r2*0.7));

    }
    glEnd();
    glBegin(GL_POLYGON);

    for(float i=0;i<=2*pi;i+=pi/360){
        glColor3f(1,1,1);
        glVertex2f(x+sin(i)*r3,y3+cos(i)*(r3*0.7));

    }
    glEnd();

    glPointSize(7);
glBegin(GL_POINTS);
        glColor3f(0,0,0);
        glVertex2f(xx,370);
        glVertex2f(yy,370);

       // glVertex2f(150,350);

    glEnd();

glBegin(GL_POLYGON);
        glColor3f(0.9,0.7,0.4);
        glVertex2f(s,360);
        glVertex2f(w+5,360);
        glVertex2f(w,340);
        glVertex2f(s,360);
glEnd();
glLineWidth(10);
glBegin(GL_LINES);
    glColor3f(0,0,0);
     // start point
    glVertex2f(c,290);
    // end point
    glVertex2f(m,180);
    // start point
    glVertex2f(v,290);
    // end point
    glVertex2f(n,180);
glEnd();
//c=240,v=60,m=130,n=160
    glFlush();

glutPostRedisplay();

}


