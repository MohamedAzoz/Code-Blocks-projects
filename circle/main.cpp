#include<windows.h>
#include<GL/glut.h>
#include<math.h>
float x=250,y=250,r=100,pi=22.0/7;
void draw(){
glClearColor(1,1,1,0);
glClear(GL_COLOR_BUFFER_BIT);

glPointSize(10);
glBegin(GL_POINTS);
glColor3f(0,0,0);
for(float i=0;i<0.5*pi;i+=pi/360){
    glVertex2f(x+cos(i)*r*0.5,y+sin(i)*r);
}
glColor3f(0,1,0);
for(float i=0.5*pi;i<pi;i+=pi/360){
    glVertex2f(x+cos(i)*r*0.5,y+sin(i)*r);
}
glColor3f(1,0,0);
for(float i=pi;i<1.5*pi;i+=pi/360){
    glVertex2f(x+cos(i)*r*0.5,y+sin(i)*r);
}
glColor3f(0,0,1);
for(float i=1.5*pi;i<2*pi;i+=pi/360){
    glVertex2f(x+cos(i)*r*0.5,y+sin(i)*r);
}


glEnd();
glFlush();
}

int main(){
glutInitWindowSize(500,500);
glutInitWindowPosition(100,100);
glutCreateWindow("View");
gluOrtho2D(0,500,0,500);
glutDisplayFunc(draw);
glutMainLoop();
}












/*
#include<windows.h>
#include <GL/glut.h>
#include <math.h>


void mydisplay_1();


int main()
{
	glutInitWindowSize(500,500);
	glutInitWindowPosition(100,100);
	glutCreateWindow("project_1");
	gluOrtho2D(0,500,0,500);
	glutDisplayFunc(mydisplay_1);
	glutMainLoop();
}

void mydisplay_1()
{
glClearColor(0.5,0.5,0.5,0);
glClear(GL_COLOR_BUFFER_BIT);
glLineWidth(3);
glBegin(GL_LINE_LOOP);
    float x=250,y=250,r=150;
    double pi=22/7;
    for(float i=0;i<=0.5*pi;i+=pi/360){
        glColor3f(0,1,0);
         glVertex2f(x+cos(i)*r,y+sin(i)*r);

    }

for(float i=0.5*pi;i<=1*pi;i+=pi/360){
    glColor3f(1,1,0);
          glVertex2f(x+cos(i)*r,y+sin(i)*r);
}

for(float i=1*pi;i<=1.5*pi;i+=pi/360){
     glColor3f(0,1,1);
         glVertex2f(x+cos(i)*r,y+sin(i)*r);

}

for(float i=1.5*pi;i<=2*pi;i+=pi/360)
{
     glColor3f(0,0,0);
         glVertex2f(x+cos(i)*r,y+sin(i)*r);
}

    glEnd();

    glFlush();



}



*/
