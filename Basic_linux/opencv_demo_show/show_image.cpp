#include <opencv2/opencv.hpp>
 
using namespace std;
using namespace cv;
 
int main(int argc, char* argv[])
{
    const char* imagename = "../demo1.jpeg";

    //从文件中读入图像
    Mat img = imread(imagename);

    //如果读入图像失败
    if(img.empty())
    {
        fprintf(stderr, "Can not load image %s\n", imagename);
        return -1;
    }

    //显示图像
    imshow("image123", img);
    
    //此函数等待按键，按键盘任意键就返回
    waitKey();
 
    return 0;
}