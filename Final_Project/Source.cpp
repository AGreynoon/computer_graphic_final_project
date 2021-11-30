#include <glut.h>
#include<math.h>
#include <cstdlib>

bool stop = false;

//sence1
//sun
int x, y, r;

//tire1
float pi1 = 22.0 / 7.0;
int xc1 = 130, yc1 = 40, r1 = 18;

//tire2
float pi2 = 22.0 / 7.0;
int xc2 = 230, yc2 = 40, r2 = 18;

//vehicle movement
float inc = 100;
float c1_1 = 100, c1_2 = 250, c1_3 = 80, c1_4 = 40;
float c2_1 = 220, c2_2 = 270, c2_3 = 120, c2_4 = 40;


//sence1
void t1(int x)
{
	glClearColor(0, 0, 3.0, 1);
	glClear(GL_COLOR_BUFFER_BIT);

	//road
	glBegin(GL_QUADS);
	glColor3d(0, 0, 0);
	glVertex2d(0, 150);
	glVertex2d(1300, 150);
	glVertex2d(1300, 1);
	glVertex2d(0, 1);
	glEnd();

	glEnable(GL_LINE_STIPPLE);
	glLineStipple(4, 0x00FF);
	glBegin(GL_LINES);
	glColor3d(1, 1, 1);
	glVertex2d(0, 75);
	glVertex2d(1300, 75);
	glEnd();
	glDisable(GL_LINE_STIPPLE);

	//footpath	
	glEnable(GL_LINE_STIPPLE);
	glLineWidth(4);
	glLineStipple(4, 0x00ff);
	glColor3f(1, 1, 0);
	glBegin(GL_LINES);
	glVertex2d(0, 0);
	glVertex2d(1300, 0);
	glVertex2d(0, 150);
	glVertex2d(1300, 150);
	glDisable(GL_LINE_STIPPLE);
	glEnd();

	//box1
	glBegin(GL_QUADS);
	glColor3d(0.3, 0, 0);
	glVertex2d(c2_2 + 412, c2_3);
	glVertex2d(c2_2 + 462, c2_3);
	glVertex2d(c2_2 + 462, c1_4);
	glVertex2d(c2_2 + 412, c1_4);
	glEnd();

	//box2
	glBegin(GL_QUADS);
	glColor3d(0.3, 0.3, 0);
	glVertex2d(c2_1 + 411, c2_3);
	glVertex2d(c2_2 + 411, c2_3);
	glVertex2d(c2_2 + 411, c2_4);
	glVertex2d(c2_1 + 411, c2_4);
	glEnd();

	////box3
	glBegin(GL_QUADS);
	glColor3d(0.3, 0, 0);
	glVertex2d(c2_1 + 360, c2_3);
	glVertex2d(c2_2 + 360, c2_3);
	glVertex2d(c2_2 + 360, c2_4);
	glVertex2d(c2_1 + 360, c2_4);
	glEnd();

	//vehicle
	glBegin(GL_QUADS);
	glColor3d(0, 0, 1);
	glVertex2d(c1_1 + 350, c1_3 - 10);
	glVertex2d(c1_2 + 585, c1_3 - 10);
	glVertex2d(c1_2 + 585, c1_4 - 20);
	glVertex2d(c1_1 + 350, c1_4 - 20);
	glEnd();
	glBegin(GL_QUADS);
	glColor3d(0, 0, 1);
	glVertex2d(c2_1 + 585, c2_3 - 10);
	glVertex2d(c2_2 + 620, c2_3 - 10);
	glVertex2d(c2_2 + 620, c2_4 - 20);
	glVertex2d(c2_1 + 585, c2_4 - 20);
	glEnd();

	//tire1
	float angle1;
	glColor3d(0.3, 0.3, 0);
	glBegin(GL_POLYGON);
	for (int i = 0; i < 360; i++)
	{
		angle1 = i * 2 * (pi1 / 360);
		glVertex2f(xc1 + 400 + (cos(angle1)*r1), yc1 - 20 + (sin(angle1)*r1));
	}
	glEnd();

	//tire2
	float angle2;
	glColor3d(0.3, 0.3, 0);
	glBegin(GL_POLYGON);
	for (int i = 0; i < 360; i++)
	{
		angle2 = i * 2 * (pi1 / 360);
		glVertex2f(xc2 + 500 + (cos(angle2)*r2), yc2 - 20 + (sin(angle2)*r2));
	}
	glEnd();

	//sun
	float pi = 22.0 / 7.0;
	x = 1200, y = 700, r = 60;
	float angle;
	glColor3d(1, 1, 0);
	glBegin(GL_POLYGON);
	for (int i = 0; i < 360; i++)
	{
		angle = i * 2 * (pi / 360);
		glVertex2f(x + (cos(angle)*r), y + (sin(angle)*r));
	}
	glEnd();

	//ground
	glBegin(GL_QUADS);
	glColor3d(1, 1, 0);
	glVertex2d(0, 300);
	glVertex2d(1300, 300);
	glVertex2d(1300, 150);
	glVertex2d(0, 150);
	glEnd();


	glFlush();
	if (stop == false)
		glutTimerFunc(20, t1, 0);
}
void display()
{


}



// head
float pip1 = 22.0 / 7.0;
int xcp1 = 650, ycp1 = 220, rp1 = 18;

//hands
int h11 = 630, h12 = 670, h2 = 650, h3 = 160, h4 = 190;

//legs
int l11 = 630, l12 = 670, l2 = 650, l3 = 110, l4 = 140;

//body
int g1 = 650, g3 = 140, g4 = 205;

//sence2
void t2(int x)
{
	glClearColor(0, 0, 1, 0);
	glClear(GL_COLOR_BUFFER_BIT);

	//sea
	glBegin(GL_QUADS);
	glColor3d(0, 0, 1);
	glVertex2d(0, 280);
	glVertex2d(1300, 280);
	glVertex2d(1300, 170);
	glVertex2d(0, 170);
	glEnd();

	//footpath
	glBegin(GL_QUADS);
	glColor3d(0.33, 0.27, 0.00);
	glVertex2d(0, 170);
	glVertex2d(1300, 170);
	glVertex2d(1300, 150);
	glVertex2d(0, 150);
	glEnd();

	glBegin(GL_QUADS);
	glColor3d(0.33, 0.27, 0.00);
	glVertex2d(0, 300);
	glVertex2d(1300, 300);
	glVertex2d(1300, 280);
	glVertex2d(0, 280);
	glEnd();

	//road
	glBegin(GL_QUADS);
	glColor3d(0, 0, 0);
	glVertex2d(0, 150);
	glVertex2d(1300, 150);
	glVertex2d(1300, 1);
	glVertex2d(0, 1);
	glEnd();

	glEnable(GL_LINE_STIPPLE);
	glLineStipple(4, 0x00FF);
	glBegin(GL_LINES);
	glColor3d(0.3, 0, 0);
	glVertex2d(0, 75);
	glVertex2d(1300, 75);
	glEnd();
	glDisable(GL_LINE_STIPPLE);

	//footpath
	glLineWidth(4);
	glEnable(GL_LINE_STIPPLE);
	glLineStipple(4, 0x00ff);
	glColor3f(1, 1, 0);
	glBegin(GL_LINES);
	glVertex2d(0, 0);
	glVertex2d(1300, 0);
	glVertex2d(0, 150);
	glVertex2d(1300, 150);
	glDisable(GL_LINE_STIPPLE);
	glEnd();

	//box1
	glBegin(GL_QUADS);
	glColor3d(0.3, 0, 0);
	glVertex2d(c2_2 + 412, c2_3);
	glVertex2d(c2_2 + 462, c2_3);
	glVertex2d(c2_2 + 462, c1_4);
	glVertex2d(c2_2 + 412, c1_4);
	glEnd();

	//box2
	glBegin(GL_QUADS);
	glColor3d(0.3, 0.3, 0);
	glVertex2d(c2_1 + 411, c2_3);
	glVertex2d(c2_2 + 411, c2_3);
	glVertex2d(c2_2 + 411, c2_4);
	glVertex2d(c2_1 + 411, c2_4);
	glEnd();

	////box3
	glBegin(GL_QUADS);
	glColor3d(0.3, 0, 0);
	glVertex2d(c2_1 + 360, c2_3);
	glVertex2d(c2_2 + 360, c2_3);
	glVertex2d(c2_2 + 360, c2_4);
	glVertex2d(c2_1 + 360, c2_4);
	glEnd();

	//vehicle
	glBegin(GL_QUADS);
	glColor3d(0, 0, 1);
	glVertex2d(c1_1 + 350, c1_3 - 10);
	glVertex2d(c1_2 + 585, c1_3 - 10);
	glVertex2d(c1_2 + 585, c1_4 - 20);
	glVertex2d(c1_1 + 350, c1_4 - 20);
	glEnd();
	glBegin(GL_QUADS);
	glColor3d(0, 0, 1);
	glVertex2d(c2_1 + 585, c2_3 - 10);
	glVertex2d(c2_2 + 620, c2_3 - 10);
	glVertex2d(c2_2 + 620, c2_4 - 20);
	glVertex2d(c2_1 + 585, c2_4 - 20);
	glEnd();

	//tire1
	float angle1;
	glColor3d(0.3, 0.3, 0);
	glBegin(GL_POLYGON);
	for (int i = 0; i < 360; i++)
	{
		angle1 = i * 2 * (pi1 / 360);
		glVertex2f(xc1 + 400 + (cos(angle1)*r1), yc1 - 20 + (sin(angle1)*r1));
	}
	glEnd();

	//tire2
	float angle2;
	glColor3d(0.3, 0.3, 0);
	glBegin(GL_POLYGON);
	for (int i = 0; i < 360; i++)
	{
		angle2 = i * 2 * (pi1 / 360);
		glVertex2f(xc2 + 500 + (cos(angle2)*r2), yc2 - 20 + (sin(angle2)*r2));
	}
	glEnd();

	//moon
	float pi = 22.0 / 7.0;
	x = 1200, y = 750, r = 30;
	float angle;
	glColor3d(1, 1, 1);
	glBegin(GL_POLYGON);
	for (int i = 0; i < 360; i++)
	{
		angle = i * 2 * (pi / 360);
		glVertex2f(x + (cos(angle)*r), y + (sin(angle)*r));
	}
	glEnd();

	//left house
	glBegin(GL_QUADS);

	glColor3d(0.5, 0, 0.2);
	glVertex2d(40, 300);
	glVertex2d(310, 300);
	glVertex2d(310, 550);
	glVertex2d(40, 550);
	glEnd();

	//door left house
	glBegin(GL_QUADS);
	glColor3d(0, 0.3, 0.5);
	glVertex2d(150, 300);
	glVertex2d(100, 300);
	glVertex2d(100, 400);
	glVertex2d(150, 400);
	glEnd();

	//door's lock
	glBegin(GL_QUADS);
	glColor3d(1, 1, 1);
	glVertex2d(105, 355);
	glVertex2d(110, 355);
	glVertex2d(110, 350);
	glVertex2d(105, 350);
	glEnd();

	//left house's window
	glBegin(GL_QUADS);
	glColor3d(0.5, 0.3, 0);
	glVertex2d(190, 370);
	glVertex2d(260, 370);
	glVertex2d(260, 410);
	glVertex2d(190, 410);
	glEnd();

	//line
	glBegin(GL_LINES);
	glColor3d(0, 0, 0);
	glVertex2d(225, 370);
	glVertex2d(225, 410);
	glVertex2d(260, 388);
	glVertex2d(190, 388);
	glEnd();

	//middel house
	glBegin(GL_QUADS);
	glColor3d(0.1, 0.2, 0.3);
	glVertex2d(470, 300);
	glVertex2d(710, 300);
	glVertex2d(710, 680);
	glVertex2d(470, 680);
	glEnd();

	//midelle up window
	glBegin(GL_QUADS);
	glColor3d(0.5, 0.3, 0);
	glVertex2d(540, 430);
	glVertex2d(570, 430);
	glVertex2d(570, 500);
	glVertex2d(540, 500);
	glEnd();
	glBegin(GL_QUADS);
	glColor3d(0.5, 0.3, 0);
	glVertex2d(540, 530);
	glVertex2d(570, 530);
	glVertex2d(570, 600);
	glVertex2d(540, 600);
	glEnd();

	glBegin(GL_QUADS);
	glColor3d(0.5, 0.3, 0);
	glVertex2d(620, 430);
	glVertex2d(650, 430);
	glVertex2d(650, 500);
	glVertex2d(620, 500);
	glEnd();
	glBegin(GL_QUADS);
	glColor3d(0.5, 0.3, 0);
	glVertex2d(620, 530);
	glVertex2d(650, 530);
	glVertex2d(650, 600);
	glVertex2d(620, 600);
	glEnd();

	//middle door
	glBegin(GL_QUADS);
	glColor3d(0, 0.3, 0.5);
	glVertex2d(550, 300);
	glVertex2d(640, 300);
	glVertex2d(640, 400);
	glVertex2d(550, 400);
	glEnd();

	//line
	glBegin(GL_LINES);
	glColor3d(1, 1, 1);
	glVertex2d(595, 400);
	glVertex2d(595, 300);
	glEnd();

	//right house
	glBegin(GL_QUADS);
	glColor3d(0.3, 0.1, 0.3);
	glVertex2d(900, 300);
	glVertex2d(1100, 300);
	glVertex2d(1100, 470);
	glVertex2d(900, 470);
	glEnd();

	//door right house
	glBegin(GL_QUADS);
	glColor3d(0, 0.3, 0.5);
	glVertex2d(930, 300);
	glVertex2d(980, 300);
	glVertex2d(980, 400);
	glVertex2d(930, 400);
	glEnd();

	//door's lock
	glBegin(GL_QUADS);
	glColor3d(1, 1, 1);
	glVertex2d(940, 355);
	glVertex2d(935, 355);
	glVertex2d(935, 350);
	glVertex2d(940, 350);
	glEnd();

	//level 1 window right house
	glBegin(GL_QUADS);
	glColor3d(0.5, 0.3, 0);
	glVertex2d(995, 360);
	glVertex2d(1080, 360);
	glVertex2d(1080, 400);
	glVertex2d(995, 400);
	glEnd();

	//line
	glBegin(GL_LINES);
	glColor3d(0, 0, 0);
	glVertex2d(1038, 360);
	glVertex2d(1038, 400);
	glVertex2d(995, 380);
	glVertex2d(1080, 380);
	glEnd();

	//level 2 right house
	glBegin(GL_QUADS);
	glColor3d(0.3, 0.1, 0.2);
	glVertex2d(900, 470);
	glVertex2d(1100, 470);
	glVertex2d(1100, 660);
	glVertex2d(900, 660);
	glEnd();

	//up Windpw
	glBegin(GL_QUADS);
	glColor3d(0.5, 0.3, 0);
	glVertex2d(920, 500);
	glVertex2d(960, 500);
	glVertex2d(960, 530);
	glVertex2d(920, 530);
	glEnd();

	glBegin(GL_QUADS);
	glColor3d(0.5, 0.3, 0);
	glVertex2d(1040, 500);
	glVertex2d(1080, 500);
	glVertex2d(1080, 530);
	glVertex2d(1040, 530);
	glEnd();

	glBegin(GL_QUADS);
	glColor3d(0.5, 0.3, 0);
	glVertex2d(920, 560);
	glVertex2d(960, 560);
	glVertex2d(960, 590);
	glVertex2d(920, 590);
	glEnd();

	glBegin(GL_QUADS);
	glColor3d(0.5, 0.3, 0);
	glVertex2d(1040, 560);
	glVertex2d(1080, 560);
	glVertex2d(1080, 590);
	glVertex2d(1040, 590);
	glEnd();

	//Person//

	//head
	float anglep1;
	glColor3d(0.3, 0, 0);
	glBegin(GL_POLYGON);
	for (int i = 0; i < 360; i++)
	{
		anglep1 = i * 2 * (pip1 / 360);
		glVertex2f(xcp1 + (cos(anglep1)*rp1), ycp1 + (sin(anglep1)*rp1));
	}
	glEnd();

	//body
	glBegin(GL_LINES);
	glColor3d(0.3, 0, 0);
	glVertex2d(g1, g3);
	glVertex2d(g1, g4);
	glEnd();

	//hands
	glBegin(GL_LINES);
	glColor3d(0.3, 0, 0);
	glVertex2d(h11, h3);
	glVertex2d(h2, h4);
	glEnd();

	glBegin(GL_LINES);
	glColor3d(0.3, 0, 0);
	glVertex2d(h12, h3);
	glVertex2d(h2, h4);
	glEnd();

	//legs
	glBegin(GL_LINES);
	glColor3d(0.3, 0, 0);
	glVertex2d(l11, l3);
	glVertex2d(l2, l4);
	glEnd();

	glBegin(GL_LINES);
	glColor3d(0.3, 0, 0);
	glVertex2d(l12, l3);
	glVertex2d(l2, l4);
	glEnd();

	glFlush();
	if (stop == false)
	{
		glutTimerFunc(20, t2, 0);
	}

}


//sence3
void t3(int x)
{
	glClearColor(0.1, 0, 0, 0);
	glClear(GL_COLOR_BUFFER_BIT);

	//road
	glBegin(GL_QUADS);
	glColor3d(0, 0, 0);
	glVertex2d(0, 150);
	glVertex2d(1300, 150);
	glVertex2d(1300, 1);
	glVertex2d(0, 1);
	glEnd();

	glEnable(GL_LINE_STIPPLE);
	glLineStipple(4, 0x00FF);
	glBegin(GL_LINES);
	glColor3d(1, 1, 1);
	glVertex2d(0, 75);
	glVertex2d(1300, 75);
	glEnd();
	glDisable(GL_LINE_STIPPLE);

	//footpath
	glEnable(GL_LINE_STIPPLE);
	glLineWidth(4);
	glLineStipple(4, 0x00ff);
	glColor3f(1, 1, 0);
	glBegin(GL_LINES);
	glVertex2d(0, 0);
	glVertex2d(1300, 0);
	glVertex2d(0, 150);
	glVertex2d(1300, 150);
	glDisable(GL_LINE_STIPPLE);
	glEnd();

	//vehicle
	glBegin(GL_QUADS);
	glColor3d(0, 0, 1);
	glVertex2d(c1_1 + 350, c1_3 - 10);
	glVertex2d(c1_2 + 585, c1_3 - 10);
	glVertex2d(c1_2 + 585, c1_4 - 20);
	glVertex2d(c1_1 + 350, c1_4 - 20);
	glEnd();

	glBegin(GL_QUADS);
	glColor3d(0, 0, 1);
	glVertex2d(c2_1 + 585, c2_3 - 10);
	glVertex2d(c2_2 + 620, c2_3 - 10);
	glVertex2d(c2_2 + 620, c2_4 - 20);
	glVertex2d(c2_1 + 585, c2_4 - 20);
	glEnd();

	//tire1
	float angle1;
	glColor3d(0.3, 0.3, 0);
	glBegin(GL_POLYGON);
	for (int i = 0; i < 360; i++)
	{
		angle1 = i * 2 * (pi1 / 360);
		glVertex2f(xc1 + 400 + (cos(angle1)*r1), yc1 - 20 + (sin(angle1)*r1));
	}
	glEnd();

	//tire2
	float angle2;
	glColor3d(0.3, 0.3, 0);
	glBegin(GL_POLYGON);
	for (int i = 0; i < 360; i++)
	{
		angle2 = i * 2 * (pi1 / 360);
		glVertex2f(xc2 + 500 + (cos(angle2)*r2), yc2 - 20 + (sin(angle2)*r2));
	}
	glEnd();

	//sun
	float pi = 22.0 / 7.0;
	x = 1000, y = 700, r = 50;
	float angle;
	glColor3d(0.91, 0.91, 0.73);
	glBegin(GL_POLYGON);
	for (int i = 0; i < 360; i++)
	{
		angle = i * 2 * (pi / 360);
		glVertex2f(x + (cos(angle)*r), y + (sin(angle)*r));
	}
	glEnd();

	//ground
	glBegin(GL_QUADS);
	glColor3d(0.00, 0.40, 0.00);
	glVertex2d(0, 300);
	glVertex2d(1300, 300);
	glVertex2d(1300, 150);
	glVertex2d(0, 150);
	glEnd();

	//mountains
	glBegin(GL_TRIANGLES);
	glColor3b(50.0, 30.0, 0);
	glVertex2f(500, 300);
	glVertex2f(700, 500);
	glVertex2f(1250, 300);
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3b(50.0, 30.0, 0);
	glVertex2f(0, 300);
	glVertex2f(200, 500);
	glVertex2f(700, 300);
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3b(50.0, 30.0, 0);
	glVertex2f(0, 300);
	glVertex2f(130, 470);
	glVertex2f(790, 300);
	glEnd();
	glFlush();
	if (stop == false)
	{
		glutTimerFunc(20, t3, 0);
	}

}

//sences control
void keyboard(unsigned char key, int x, int y)
{
	if (key == 27)
	{
		exit(0);
	}
	else if (key == 'a')
	{
		stop = true;
		glutTimerFunc(20, t2, 0);
	}

	else if (key == 'b')
	{
		stop = false;
		glutTimerFunc(20, t3, 0);
	}
}

void special(int key, int x, int y)
{

	
	if (key == GLUT_KEY_RIGHT)
	{
		//vehicle
		c1_1 += inc;
		c1_2 += inc;

		c2_1 += inc;
		c2_2 += inc;

		//tires
		xc1 += inc;
		xc2 += inc;

		//head
		xcp1 += inc;

		//hands
		h11 += inc;
		h12 += inc;
		h2 += inc;

		//legs
		l11 += inc;
		l12 += inc;
		l2 += inc;

		//body
		g1 += inc;
	}
	else if (key == GLUT_KEY_LEFT)
	{
		//vehicle
		c1_1 -= inc;
		c1_2 -= inc;

		c2_1 -= inc;
		c2_2 -= inc;

		//tires
		xc1 -= inc;
		xc2 -= inc;

		//head
		xcp1 -= inc;

		//hands
		h11 -= inc;
		h12 -= inc;
		h2 -= inc;

		//legs
		l11 -= inc;
		l12 -= inc;
		l2 -= inc;

		//body
		g1 -= inc;
	}
}
void main()
{
	glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
	glutInitWindowPosition(33, 30);
	glutInitWindowSize(1300, 690);
	glutCreateWindow("Final_Project");
	gluOrtho2D(0, 1300, 0, 800);
	glutDisplayFunc(display);
	glutTimerFunc(20, t1, 0);
	glutKeyboardFunc(keyboard);
	glutSpecialFunc(special);
	glutMainLoop();
}
