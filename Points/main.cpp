#include<windows.h>
#include<GL/glut.h>
#include<math.h>
float x=0,y=0,z=499.9999,daltx=0.07,dalty=0.07,daltz=0.07;
int c=0;
void draw();

int main(){
    glutInitWindowSize(500,500);
    glutInitWindowPosition(100,100);
    glutCreateWindow("View");
    gluOrtho2D(0,500,0,500);
    glutDisplayFunc(draw);
    glutMainLoop();
}

void draw(){
glClearColor(c,c,c,0);
glClear(GL_COLOR_BUFFER_BIT);

glColor3f(0,0,1);
glPointSize(10);
glBegin(GL_POINTS);
   glVertex2f(x,y);
   glVertex2f(z,y);
glEnd();
glFlush();
x+=daltx;
if(x>=500||x<=0){
    daltx=-daltx;
}
y+=dalty;
if(y>=500||y<=0){
    dalty=-dalty;
    c=!c;
}

z+=daltz;
if(z>=500||z<=0){
    daltz=-daltz;
}
glutPostRedisplay();


}


/*
#include<windows.h>
#include<GL/glut.h>
#include<math.h>
float r=30,y=130,pi=22.0/7.0,x=250,dalty=0.03;
void draw();

int main(){
    glutInitWindowSize(500,500);
    glutInitWindowPosition(100,100);
    glutCreateWindow("View");
    gluOrtho2D(0,500,0,500);
    glutDisplayFunc(draw);
    glutMainLoop();
}

void draw(){
glClearColor(1,1,1,0);
glClear(GL_COLOR_BUFFER_BIT);

glBegin(GL_POLYGON);
    glColor3f(1,0,0);
     for(float i=0;i<pi;i+=0.001){
        glVertex2f(x+cos(i)*r,y+sin(i)*r);
    }
glEnd();
glBegin(GL_POLYGON);
    glColor3f(0,1,0);
    glVertex2f(250,50);
   glVertex2f(280,120);
   glVertex2f(220,120);
glEnd();
glFlush();

y+=dalty;
if(y>=160||y<=121){
    dalty=-dalty;
}

glutPostRedisplay();


}*/

