#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <opencv2/opencv.hpp>
using namespace cv;

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


    Mat originalImage;
    Mat currentImage;

    Mat R;
    Mat G;
    Mat B;

    int kernal = 0;

    int originR = 0;
    int originG = 0;
    int originB = 0;

    //double brightness = 0;
    //double contrast = 0;

private slots:
    void openImage();

    void about();

    void on_action_Exit_triggered();

    void on_action_Open_triggered();

    void on_action_Save_triggered();

    void on_action_Reset_triggered();

    void on_action_Help_triggered();

    void on_actionAbout_Qt_triggered();

    void on_kernal_valueChanged(int num);

    void on_pb_hsv_clicked();

    void on_pb_hsl_clicked();

    void on_pb_gray_clicked();

    void on_pb_ycrcb_clicked();

    void on_pb_average_clicked();

    void on_pb_median_clicked();

    void on_pb_gaussian_clicked();

    void on_pb_laplace_clicked();

    void on_pb_filterApply_clicked();

    void on_pb_histogram_clicked();

    void on_actionDisplay_Original_Image_triggered();

    void on_sb_R_valueChanged(int arg1);

    void on_sb_G_valueChanged(int arg1);

    void on_sb_B_valueChanged(int arg1);

    //void on_sb_Bright_valueChanged(int arg1);

    //void on_sb_Contrast_valueChanged(int arg1);

    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;

    void setSlider();

    void setUnableFunctions();

    void setEnableFunctions();

    int filterStatus = 0;

    void checkFilterStatus();

    void setFilterOnOff();

    void filterRun();

    void GetRGBcolor();

    //void Brightness();

    //void Contrast();

    //void adjustBrightContrast();
};
#endif // MAINWINDOW_H
