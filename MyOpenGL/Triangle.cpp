//#include <GL/glut.h>
//#include <iostream>
//using namespace std;
//#pragma comment(linker, "/subsystem:\"windows\"  /entry:\"mainCRTStartup\"") //添加此行代码可关闭一个控制台窗口
//
//void displayTeaCup()
//{
//	glClearColor(0.0, 0.0, 0.0, 0.0);
//	glMatrixMode(GL_PROJECTION);
//	glOrtho(-5, 5, -5, 5, 5, 15);
//	glMatrixMode(GL_MODELVIEW);
//	gluLookAt(0, 0, 10, 0, 0, 0, 0, 1, 0);
//	glClear(GL_COLOR_BUFFER_BIT);
//	glColor3f(1.0, 0, 0);
//	glutWireTeapot(3);
//	glFlush();
//}
//
//void displayTriangle()
//{
//	glClear(GL_COLOR_BUFFER_BIT);
//	glBegin(GL_POLYGON);
//	glColor3f(1, 0, 0); glVertex3f(-0.6, -0.75, 0.5);
//	glColor3f(0, 1, 0); glVertex3f(0.6, -0.75, 0);
//	glColor3f(0, 0, 1); glVertex3f(0, 0.75, 0);
//	glEnd();
//	glFlush();
//}
//
//int main(int argc, char* argv[])
//{
//	//std::cout << "hello.world!" << std::endl;
//	glutInit(&argc, argv);
//	glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
//
//	int width = 400, height = 400, x = 10, y = 20;
//	glutInitWindowPosition(x, y);
//	glutInitWindowSize(width, height);
//
//	const char * window_name = "FirstOpenGL-ConsoleApplication_2022.9.28";
//	glutCreateWindow(window_name);
//	//glutDisplayFunc(displayTeaCup);
//	glutDisplayFunc(displayTriangle);
//	glutMainLoop();
//	return 0;
//}