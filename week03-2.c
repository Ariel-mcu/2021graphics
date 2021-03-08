#include <GL/glut.h>

void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT );
    glutSolidTeapot( 0.3 );//實心茶壺
    glutSwapBuffers();

}

int main(int argc, char *argv[])///也可以打**argv蘋果電腦
{
    glutInit(&argc, argv);
    glutInitDisplayMode( GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("Week03 ");

    glutDisplayFunc(display);
    glutMainLoop();
}
