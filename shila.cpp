#include<iostream>
#include<graphics.h>
using namespace std;

int main()
{
    int gd=DETECT,gm;
    int i,walk=0;
    initgraph(&gd,&gm," ");
    initwindow(900,900);

    int option;
    //For S
    line(50,50,70,50);
    line(50,50,50,70);
    line(50,70,70,70);
    line(70,70,70,90);
    line(70,90,50,90);

    //For H
    line(85,50,85,90);
    line(105,50,105,90);
    line(85,70,105,70);



    //For I
    line(140,50,140,90);
    line(135,50,145,50);
    line(135,90,145,90);

    //For L
    line(160,50,160,90);
    line(160,90,175,90);

    //For A
    line(195,50,185,90);
    line(195,50,205,90);
    line(190,70,200,70);

    //For A
    line(240,50,230,90);
    line(240,50,250,90);
    line(235,70,245,70);

    //For K
    line(260,50,260,90);
    line(275,50,260,70);
    line(260,70,275,90);

    //For T
    line(290,50,290,90);
    line(285,50,295,50);

    //For E
    line(310,50,310,90);
    line(310,50,320,50);
    line(310,70,320,70);
    line(310,90,320,90);

    //For R
    line(335,50,335,90);
    line(335,50,350,50);
    line(350,50,350,70);
    line(350,70,335,70);
    line(335,70,350,90);

    //For C
    line(50,110,50,150);
    line(50,110,70,110);
    line(50,150,70,150);

    //For S
    line(85,110,105,110);
    line(85,110,85,130);
    line(85,130,105,130);
    line(105,130,105,150);
    line(105,150,85,150);

    //For E
    line(120,110,120,150);
    line(120,110,135,110);
    line(120,130,135,130);
    line(120,150,135,150);

    //For 2
    line(150,110,170,110);
    line(170,110,170,130);
    line(170,130,150,130);
    line(150,130,150,150);
    line(150,150,170,150);

    //For 0
    line(185,110,185,150);
    line(185,110,200,110);
    line(185,150,200,150);
    line(200,110,200,150);

    //For 0
    line(215,110,215,150);
    line(215,110,230,110);
    line(215,150,230,150);
    line(230,110,230,150);

    //For 1
    line(245,110,245,150);

    //For 0
    line(260,110,260,150);
    line(260,110,275,110);
    line(260,150,275,150);
    line(275,110,275,150);

    //For 1
    line(290,110,290,150);

    //For 9
    line(310,110,330,110);
    line(330,110,330,130);
    line(310,110,310,130);
    line(310,130,330,130);
    line(330,130,330,150);

    //For 1
    line(345,110,345,150);

    //For 1
    line(365,110,365,150);

    //For 8
    line(385,110,405,110);
    line(385,110,385,130);
    line(385,130,405,130);
    line(405,110,405,130);
    line(385,130,385,150);
    line(385,150,405,150);
    line(405,130,405,150);

    // display menu



    std::cout << "Choose your option:" << std::endl;
    std::cout << "1. Flag" << std::endl;
    std::cout << "2. Message Box" << std::endl;
    std::cout << "3. Gift Box" << std::endl;
    std::cout << "4. House" << std::endl;
    std::cout << "5. Lamp Box" << std::endl;
    std::cout << "6. Star" << std::endl;


    std::cout << "Enter your choice: ";
    std::cin >> option;


    switch (option)
    {
    case 1:

        setcolor(GREEN);
        rectangle(50,50,220,150);
        setfillstyle(SOLID_FILL,GREEN);
        floodfill(51,51,GREEN);
        setcolor(WHITE);
        rectangle(40,40,50,300);
        setfillstyle(SOLID_FILL,WHITE);
        floodfill(41,41,WHITE);
        setcolor(RED);
        circle(130,100,30);
        setfillstyle(SOLID_FILL,RED);
        floodfill(131,101,RED);

        break;

    case 2:

        setcolor(YELLOW);
        line(50,50,250,50);
        line(50,50,50,150);
        line(250,50,250,150);
        line(50,150,250,150);

        line(50,50,150,100);
        line(150,100,250,50);
        setfillstyle(SOLID_FILL,YELLOW);
        floodfill(52,52,YELLOW);

        break;

    case 3:

        /* GiftBOX */
        for(i=0; i<=50; i++)
        {
            delay(400);
            cleardevice();


            setcolor(RED);
            //Gift Box SBC
            rectangle(200, 500, 350, 600);
            rectangle(190, 470, 360, 500);
            rectangle(270, 470, 285, 600);
            setfillstyle(SOLID_FILL,RED);
            floodfill(52,52,RED);
        }


        break;
    case 4:

        /* Draw Hut */
        setcolor(WHITE);
        rectangle(150,180,250,300);
        rectangle(250,180,420,300);
        rectangle(180,250,220,300);

        line(200,100,150,180);
        line(200,100,250,180);
        line(200,100,370,100);
        line(370,100,420,180);

        /* Fill colours */
        setfillstyle(SOLID_FILL, BROWN);
        floodfill(152, 182, WHITE);
        floodfill(252, 182, WHITE);
        setfillstyle(SLASH_FILL, BLUE);
        floodfill(182, 252, WHITE);
        setfillstyle(HATCH_FILL, GREEN);
        floodfill(200, 105, WHITE);
        floodfill(210, 105, WHITE);

        break;
    case 5:
        setcolor(YELLOW);

        line(100,50,250,50);
        line(100,50,60,120);
        line(60,120,290,120);
        line(250,50,290,120);

        line(160,120,160,200);
        line(180,120,180,200);
        line(160,200,180,200);
        setfillstyle(SOLID_FILL,YELLOW);
        floodfill(102,52,YELLOW);

        break;
    case 6:

        setcolor(RED);
        line(190,30,100,160);
        line(190,30,280,160);
        line(100,160,280,160);
        setfillstyle(SOLID_FILL,RED);
        floodfill(191,150,RED);

        setcolor(YELLOW);
        line(100,60,290,60);
        line(100,60,190,220);
        line(290,60,190,220);
        setfillstyle(SOLID_FILL,YELLOW);
        floodfill(200,161,YELLOW);

        break;
    }

    getch();
    closegraph();
    return 0;

}
