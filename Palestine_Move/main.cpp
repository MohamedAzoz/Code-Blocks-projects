#include<windows.h>
#include <GL/glut.h>

float x=10,y=90,z=10,daltx=0.02,dalty=0.02,daltz=0.02;
void drow();
int main(){
    glutInitWindowSize(500,500);
    glutInitWindowPosition(200,100);
    glutCreateWindow("view");
    gluOrtho2D(0,500,0,500);
    glutDisplayFunc(drow);
    glutMainLoop();
}
void drow(){
    glClearColor(1,1,1,0);
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_POLYGON);
            glColor3f(0,1,0);
            glVertex2f(10,10);
            glVertex2f(300,10);
            glVertex2f(300,60);
            glVertex2f(10,60);
    glEnd();
    glBegin(GL_POLYGON);
            glColor3f(1,1,1);
            glVertex2f(10,120);
            glVertex2f(300,120);
            glVertex2f(300,60);
            glVertex2f(10,60);
    glEnd();
    glBegin(GL_POLYGON);
            glColor3f(0,0,0);
            glVertex2f(10,180);
            glVertex2f(300,180);
            glVertex2f(300,120);
            glVertex2f(10,120);
    glEnd();
    glBegin(GL_POLYGON);
            glColor3f(1,0,0);
            glVertex2f(x,10);
            glVertex2f(y,90);
            glVertex2f(z,180);
    glEnd();
    glFlush();

x+=daltx;
if(x>220||x<10){
    daltx=-daltx;
}

y+=dalty;
if(y>300||y<90){
    dalty=-dalty;
}

z+=daltz;
if(x>220||x<10){
    daltz=-daltz;
}

glutPostRedisplay();


}
