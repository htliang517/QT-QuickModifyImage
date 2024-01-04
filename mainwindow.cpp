#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QMainWindow>
#include <QFileDialog>
#include <QString>
#include <QFile>
#include <QTextStream>
#include <QImage>
#include <QDebug>
#include <QMessageBox>
#include <QMenuBar>
#include <QMenu>
#include <QStyle>

#include "opencv2/core/core.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include "iostream"

#include <opencv2/opencv.hpp>
using namespace cv;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("Photoshop");
    setWindowIcon(QIcon("photoshop_icon.png"));
    setSlider();
    setUnableFunctions();
}


MainWindow::~MainWindow()
{
    delete ui;
}

//===========================================================================Functions
void MainWindow::setUnableFunctions(){
    ui->pb_gray->setEnabled(false);
    ui->pb_hsl->setEnabled(false);
    ui->pb_hsv->setEnabled(false);
    ui->pb_ycrcb->setEnabled(false);
    ui->pb_average->setEnabled(false);
    ui->pb_gaussian->setEnabled(false);
    ui->pb_median->setEnabled(false);
    ui->pb_filterApply->setEnabled(false);
    ui->pb_laplace->setEnabled(false);
    ui->pb_histogram->setEnabled(false);
    ui->pushButton->setEnabled(false);

    ui->sb_B->setEnabled(false);
    //ui->sb_Bright->setEnabled(false);
    ui->sb_G->setEnabled(false);
    ui->sb_R->setEnabled(false);
    //ui->sb_Contrast->setEnabled(false);

    ui->sliderB->setEnabled(false);
    //ui->sliderBright->setEnabled(false);
    ui->sliderG->setEnabled(false);
    ui->sliderR->setEnabled(false);
    //ui->sliderContrast->setEnabled(false);

    ui->kernal->setEnabled(false);
}

void MainWindow::setEnableFunctions(){
    ui->pb_gray->setEnabled(true);
    ui->pb_hsl->setEnabled(true);
    ui->pb_hsv->setEnabled(true);
    ui->pb_ycrcb->setEnabled(true);
    ui->pb_average->setEnabled(true);
    ui->pb_gaussian->setEnabled(true);
    ui->pb_median->setEnabled(true);
    ui->pb_filterApply->setEnabled(true);
    ui->pushButton->setEnabled(true);

    ui->pb_laplace->setEnabled(true);
    ui->pb_histogram->setEnabled(true);

    ui->sb_B->setEnabled(true);
    //ui->sb_Bright->setEnabled(true);
    ui->sb_G->setEnabled(true);
    ui->sb_R->setEnabled(true);
    //ui->sb_Contrast->setEnabled(true);

    ui->sliderB->setEnabled(true);
    //ui->sliderBright->setEnabled(true);
    ui->sliderG->setEnabled(true);
    ui->sliderR->setEnabled(true);
    //ui->sliderContrast->setEnabled(true);

    ui->kernal->setEnabled(true);
}

void MainWindow::setSlider(){
    ui->kernal->setValue(1);
    ui->kernal->setRange(1,10);

    ui->sliderR->setRange(0,255);
    ui->sliderG->setRange(0,255);
    ui->sliderB->setRange(0,255);
    //ui->sliderBright->setRange(0,100);
    //ui->sliderContrast->setRange(0,29);

    ui->sb_R->setRange(0,255);
    ui->sb_G->setRange(0,255);
    ui->sb_B->setRange(0,255);
    //ui->sb_Bright->setRange(0,100);
    //ui->sb_Contrast->setRange(0,29);

    ui->sliderR->setSingleStep(1);
    ui->sliderG->setSingleStep(1);
    ui->sliderB->setSingleStep(1);
    //ui->sliderBright->setSingleStep(1);
    //ui->sliderContrast->setSingleStep(1);

    connect(ui->sliderR, SIGNAL(valueChanged(int)), ui->sb_R, SLOT(setValue(int)));
    connect(ui->sliderG, SIGNAL(valueChanged(int)), ui->sb_G, SLOT(setValue(int)));
    connect(ui->sliderB, SIGNAL(valueChanged(int)), ui->sb_B, SLOT(setValue(int)));
    //connect(ui->sliderBright, SIGNAL(valueChanged(int)), ui->sb_Bright, SLOT(setValue(int)));
    //connect(ui->sliderContrast, SIGNAL(valueChanged(int)), ui->sb_Contrast, SLOT(setValue(int)));

    connect(ui->sb_R, SIGNAL(valueChanged(int)), ui->sliderR, SLOT(setValue(int)));
    connect(ui->sb_G, SIGNAL(valueChanged(int)), ui->sliderG, SLOT(setValue(int)));
    connect(ui->sb_B, SIGNAL(valueChanged(int)), ui->sliderB, SLOT(setValue(int)));
    //connect(ui->sb_Bright, SIGNAL(valueChanged(int)), ui->sliderBright, SLOT(setValue(int)));
    //connect(ui->sb_Contrast, SIGNAL(valueChanged(int)), ui->sliderContrast, SLOT(setValue(int)));
}

void MainWindow::about()
{
    // Window title and text to display
    QMessageBox::about(this, tr("Help"),
            tr("<p><b><t>Image proccessing program</t></b></p>"
               "<p>-  </p>"
               "<p><b>Open</b> : To load an image.</p>"
               "<p>-  </p>"
               "<p><b>Save</b> : Save your image as jpg.</p>"
               "<p>-  </p>"
               "<p><b>Display Original Image</b> : To display your original image for comparison.</p>"
               "<p>-  </p>"
               "<p><b>Reset</b> : Turn the current image into original image.</p>"
               "<p>-  </p>"
               "<p><b>Exit</b> : Exit the program.</p>"
               "<p>-  </p>"));

}

void MainWindow::openImage(){
    QString filePath = QFileDialog::getOpenFileName(this,tr("OpenFile"),"",tr("image (*.jpg)" ));
    if(!filePath.isNull()){
        originalImage = imread(filePath.toStdString());
        originalImage.copyTo(currentImage);
        setEnableFunctions();
        imshow("Image",originalImage);

        //ui->sb_Bright->setValue(0);
        //ui->sb_Contrast->setValue(1);

        originB = 0;
        originG = 0;
        originR = 0;
        GetRGBcolor();
    }
    else{
        setUnableFunctions();
    }
}

void MainWindow::checkFilterStatus(){       //Check filter Status if not doing anything with filter
    if(filterStatus!=0){
        filterStatus = 0;
    }
    setFilterOnOff();
    if(originalImage.empty()){
        setUnableFunctions();
    }
}

void MainWindow::setFilterOnOff(){          //Setting which filter is active
    if(filterStatus == 0){
        ui->pb_average->setEnabled(true);
        ui->pb_gaussian->setEnabled(true);
        ui->pb_median->setEnabled(true);
        ui->kernal->setEnabled(true);
    }
    else if(filterStatus == 1){
        ui->pb_average->setEnabled(false);
        ui->pb_gaussian->setEnabled(true);
        ui->pb_median->setEnabled(true);
        ui->kernal->setEnabled(true);
    }

    else if(filterStatus == 2){
        ui->pb_average->setEnabled(true);
        ui->pb_gaussian->setEnabled(true);
        ui->pb_median->setEnabled(false);
        ui->kernal->setEnabled(true);
    }
    else if(filterStatus == 3){
        ui->pb_average->setEnabled(true);
        ui->pb_gaussian->setEnabled(false);
        ui->pb_median->setEnabled(true);
        ui->kernal->setEnabled(true);
    }
}
//---------------------------------------------------------------------------

//===========================================================================MenuBar setup
void MainWindow::on_action_Open_triggered()
{
    checkFilterStatus();
    destroyAllWindows();
    openImage();
}

void MainWindow::on_action_Exit_triggered()
{
    QApplication::quit();
}

void MainWindow::on_actionDisplay_Original_Image_triggered()
{
    checkFilterStatus();
    if(!originalImage.empty()){
        imshow("Original Image", originalImage);
    }
    else{
        QMessageBox::about(this, tr("Caution"),
                tr("<p><b>No image file is loaded.</b></p>"
                   "<p> </p>"
                   "<p>Please load a image file first.</p>"));
    }
}

void MainWindow::on_action_Save_triggered()
{
    checkFilterStatus();
    if(!currentImage.empty()){
        QString filename = QFileDialog::getSaveFileName(this,tr("Save Image"),"",tr("Images (*.jpg)"));
        String fileAsSave = filename.toStdString();
        if(fileAsSave.empty()){
            return;
        }
        else{
            imwrite(fileAsSave,currentImage);
        }
    }
    else{
        QMessageBox::about(this, tr("Caution"),
                tr("<p><b>No image file can be saved.</b></p>"
                   "<p> </p>"
                   "<p>Please load a image file first.</p>"));
    }
}

void MainWindow::on_action_Reset_triggered()
{
    checkFilterStatus();
    if(!originalImage.empty()){
        destroyAllWindows();
        imshow("Image", originalImage);
        originalImage.copyTo(currentImage);

        ui->kernal->setValue(1);
        GetRGBcolor();
        ui->sb_R->setValue(originR);
        ui->sb_G->setValue(originG);
        ui->sb_B->setValue(originB);
       // ui->sb_Bright->setValue(0);
        //ui->sb_Contrast->setValue(0);

    }
    else{
        QMessageBox::about(this, tr("Caution"),
                tr("<p><b>No image file is loaded.</b></p>"
                   "<p> </p>"
                   "<p>Please load a image file first.</p>"));
    }
}

void MainWindow::on_action_Help_triggered()
{
    checkFilterStatus();
    about();
}

void MainWindow::on_actionAbout_Qt_triggered()
{
    checkFilterStatus();
    QApplication::aboutQt();
}
//---------------------------------------------------------------------------

//===========================================================================CVT color function
void MainWindow::on_pb_hsv_clicked()        //HSV cvt color
{
    checkFilterStatus();
    Mat imageHSV;
    cvtColor(currentImage,imageHSV,COLOR_BGR2HSV);
    currentImage = imageHSV;
    destroyAllWindows();
    imshow("HSV output",currentImage);
}

void MainWindow::on_pb_hsl_clicked()        //HSL cvt color
{
    checkFilterStatus();
    Mat imageHSL;
    cvtColor(currentImage,imageHSL,COLOR_BGR2HLS);
    currentImage = imageHSL;
    destroyAllWindows();
    imshow("HSL output",currentImage);
}

void MainWindow::on_pb_gray_clicked()       //Gray cvt color
{
    checkFilterStatus();
    Mat imageGRAY;
    cvtColor(currentImage,imageGRAY,COLOR_BGR2GRAY);
    currentImage = imageGRAY;
    destroyAllWindows();
    imshow("Gray output",currentImage);
}

void MainWindow::on_pb_ycrcb_clicked()      //YCRB cvt color
{
    checkFilterStatus();
    Mat imageYCRCB;
    cvtColor(currentImage,imageYCRCB,COLOR_BGR2YCrCb);
    currentImage = imageYCRCB;
    destroyAllWindows();
    imshow("YCrCb output",currentImage);
}
//---------------------------------------------------------------------------

//===========================================================================Blur Filter function
void MainWindow::on_pb_average_clicked()            //Average filter    #filterStatus = 1
{
    ui->kernal->setRange(1,20);
    filterStatus = 1;
    setFilterOnOff();
}

void MainWindow::on_pb_median_clicked()             //Median filter     #filterStatus = 2
{
    ui->kernal->setRange(1,20);
    filterStatus = 2;
    setFilterOnOff();
}

void MainWindow::on_pb_gaussian_clicked()           //Gaussian filter   #filterStatus = 3
{
    ui->kernal->setRange(1,9);
    filterStatus = 3;
    setFilterOnOff();
}

void MainWindow::on_kernal_valueChanged(int num)    //Set kernal value
{
    kernal = num;
}

void MainWindow::on_pb_filterApply_clicked()
{
    filterRun();
    filterStatus = 0;       //reset filter status
    setFilterOnOff();
}

void MainWindow::filterRun(){
    Mat image;
    if(filterStatus == 1){                          //Average filter
        filter2D(currentImage,image,CV_8U,kernal,Point(-1,-1),0,BORDER_DEFAULT);
        currentImage = image;
        destroyAllWindows();
        imshow("Average Filter",image);
    }
    else if(filterStatus == 2){                     //Median filter
        medianBlur(originalImage,image,kernal);
        currentImage = image;
        destroyAllWindows();
        imshow("Median Filter",image);
    }
    else if(filterStatus == 3){                     //Gaussian filter
        GaussianBlur(currentImage,image,Size(kernal,kernal),0,0);
        currentImage = image;
        destroyAllWindows();
        imshow("Gaussian Filter",image);
    }
}
//---------------------------------------------------------------------------

//===========================================================================Sharpening Filter Function
void MainWindow::on_pb_laplace_clicked()            //Laplace
{
    Mat image;
    Laplacian(currentImage,image,currentImage.type());
    currentImage = image;
    destroyAllWindows();
    imshow("Laplace Filter",image);
}

void MainWindow::on_pb_histogram_clicked()
{
    Mat image;
    cvtColor(currentImage,image,COLOR_BGR2GRAY);
    equalizeHist(image,image);
    currentImage = image;
    destroyAllWindows();
    imshow("Histogram Equalization",currentImage);
}
//---------------------------------------------------------------------------

//===========================================================================RGB channel
void MainWindow::GetRGBcolor(){
    Mat img = currentImage;
    for (int i = 0; i<img.rows; i++)
    {
        for (int j = 0; j<img.cols; j++)
        {
            originB += img.at<Vec3b>(i, j)[0];
            originG += img.at<Vec3b>(i, j)[1];
            originR += img.at<Vec3b>(i, j)[2];
            /*int mu = img.at<Vec3b>(i, j)[0] + img.at<Vec3b>(i, j)[1] + img.at<Vec3b>(i, j)[2];
            mu /= 3;
            int stdev = sqrt(double((img.at<Vec3b>(i, j)[0] - mu)*(img.at<Vec3b>(i, j)[0] - mu) + (img.at<Vec3b>(i, j)[1] - mu)*(img.at<Vec3b>(i, j)[1] - mu) + (img.at<Vec3b>(i, j)[2] - mu)*(img.at<Vec3b>(i, j)[2] - mu)) / 3);
            for (int k = 0; k<3; k++){
                img.at<Vec3b>(i, j)[k] = stdev;
                if(k==0){
                    originB += img.at<Vec3b>(i, j)[k];
                    qDebug() << originB;
                }
                else if(k==1){
                    originG += img.at<Vec3b>(i, j)[k];
                }
                else if(k==2){
                    originR += img.at<Vec3b>(i, j)[k];
                }
            }*/
        }
    }
    int a = img.rows;
    int b = img.cols;
    int c = a*b;
    /*
    qDebug() << a;
    qDebug() << b;
    qDebug() << c;

    originB = img.at<Vec3b>(a, b)[0];
    originG = img.at<Vec3b>(a, b)[1];
    originR = img.at<Vec3b>(a, b)[2];
    */
    originB = originB/c;
    originG = originG/c;
    originR = originR/c;

    ui->sb_B->setValue(originB);
    ui->sb_G->setValue(originG);
    ui->sb_R->setValue(originR);

/*
 * img.at< Vec3b >(14,25) [0]= 25;//B
 * img.at< Vec3b >(14,25) [1]= 25;//G
 * img.at< Vec3b >(14,25) [2]= 25;//R
 */
}

void MainWindow::on_sb_R_valueChanged(int num)
{
    Mat img = currentImage;
    for (int i = 0; i<img.rows; i++)
    {
        for (int j = 0; j<img.cols; j++)
        {
            int x = img.at<Vec3b>(i, j)[2];
            int a = x-0;
            int b = 255-x;
            int c = originR-0;
            int d = 255-originR;
            int add = num - originR;
            if(num > originR){
                x = x + add*b/d;
            }
            else{
                x = x + add*a/c;
            }
            img.at<Vec3b>(i, j)[2] = x;
        }
    }
    currentImage=img;
    imshow("Image",currentImage);
    //imshow("F",originalImage);
}

void MainWindow::on_sb_G_valueChanged(int num)
{
    Mat img = currentImage;
    for (int i = 0; i<img.rows; i++)
    {
        for (int j = 0; j<img.cols; j++)
        {
            int x = img.at<Vec3b>(i, j)[1];
            int a = x-0;
            int b = 255-x;
            int c = originG-0;
            int d = 255-originG;
            int add = num - originG;
            if(num > originG){
                x = x + add*b/d;
            }
            else{
                x = x + add*a/c;
            }
            img.at<Vec3b>(i, j)[1] = x;
        }
    }
    currentImage=img;
    imshow("Image",currentImage);
    //imshow("F",originalImage);
}

void MainWindow::on_sb_B_valueChanged(int num)
{
    Mat img = currentImage;
    for (int i = 0; i<img.rows; i++)
    {
        for (int j = 0; j<img.cols; j++)
        {
            int x = img.at<Vec3b>(i, j)[0];
            int a = x-0;
            int b = 255-x;
            int c = originB-0;
            int d = 255-originB;
            int add = num - originB;
            if(num > originB){
                x = x + add*b/d;
            }
            else{
                x = x + add*a/c;
            }
            img.at<Vec3b>(i, j)[0] = x;
        }
    }
    currentImage=img;
    imshow("Image",currentImage);
    //imshow("F",originalImage);
}

/*
void MainWindow::on_sb_Bright_valueChanged(int num)
{
    brightness = num;
    adjustBrightContrast();
}

void MainWindow::on_sb_Contrast_valueChanged(int num)
{
    contrast = num+1;
    adjustBrightContrast();
}

void MainWindow::adjustBrightContrast(){
    Mat img = currentImage;
    int a = contrast;
    int b = brightness;
    for (int i = 0; i<img.rows; i++)
    {
        for (int j = 0; j<img.cols; j++)
        {
            int x = img.at<Vec3b>(i, j)[0];
            int y = img.at<Vec3b>(i, j)[1];
            int z = img.at<Vec3b>(i, j)[2];

            x = a*x+b;
            y = a*y+b;
            z = a*z+b;

            img.at<Vec3b>(i, j)[0] = x;
            img.at<Vec3b>(i, j)[1] = y;
            img.at<Vec3b>(i, j)[2] = z;
        }
    }
    currentImage=img;
    imshow("Image",currentImage);
}
*/

//---------------------------------------------------------------------------

//===========================================================================Remove Background

void MainWindow::on_pushButton_clicked()
{
    Mat image;
    currentImage.copyTo(image);
    Mat src1 = image;
    Mat gray, edge, draw;


    cvtColor(src1, gray, COLOR_BGR2GRAY);
    GaussianBlur(src1,src1,Size(5,5),1.5);
    Canny(gray, edge, 50, 150, 3);

    edge.convertTo(draw, CV_8U);
    imshow("Image", draw);
    currentImage = draw;
}
