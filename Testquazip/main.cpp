#include <QCoreApplication>
#include <JlCompress.h>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    //JlCompress::compressFile("压缩后文件的完整路径","将要被压缩文件的完整路径");
    qDebug()<<JlCompress::compressFile("E:\\a.zip","E:\\src.txt");

    //JlCompress::extractFile("压缩文件的完整路径","要解压文件的名称","被解压文件要保存位置的完整路径");
    qDebug()<<JlCompress::extractFile("E:\\a.zip","src.txt"); //解压的文件在当前程序路径下\src.txt
    qDebug()<<JlCompress::extractFile("E:\\a.zip","src.txt","E:\\temp\\dest.txt"); //解压的文件在E:\\temp\\dest.txt

    //请注意路径的输入，测试时：请保证半角英文输入
    //我在windows下测试时，是从文件属性页拷贝的文件路径，结果总是压缩/解压缩失败，最后发现传入参数的路径前面有两个不可识别的字符
    //其次就是传入参数的顺序，解压时第二个参数是文件名而不是文件路径


    return 0;
}
