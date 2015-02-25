/* Sometimes red, sometimes blue using OGL (Open Graphics Library) */

#include <GL/glut.h>
#include <time.h>
#include <stdlib.h>

void setBackgroundColour(void)
{
    srand((unsigned int)time(NULL));
    if ((rand() % 2) == 0)
    {
        glClearColor(255, 0, 0, 0);
    }
    else
    {
        glClearColor(0, 0, 255, 0);
    }
}

void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glFlush();
}

void reshape(int width, int height)
{
    glViewport(0, 0, width, height);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-1, 1, -1, 1, -1, 1);
    glMatrixMode(GL_MODELVIEW);
    display();
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowPosition(50, 50);
    glutInitWindowSize(500, 500);
    glutCreateWindow("Sometimes red sometimes blue");
    setBackgroundColour();
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutMainLoop();
    return 0;
}
