# pragma once


# include <iostream>
# include <string>
#include <Eigen/Core>
#include <Eigen/Geometry>

using namespace std;
namespace Confi
{
    // the path of the project
    // 使用绝对路径
    // static string projectPath("/home/qilong/Desktop/project/rgbdVolumeMeasurement/");
    // static string dataPath("/home/qilong/Desktop/data/rgbdVolumeMeasurement/");
    // 使用相对路径
    static string projectPath("../");
    static string dataPath("../../data/rgbdVolumeMeasurement/data/");
    // the path of some key dir
    const  static string dirPath_bin=dataPath+"bin/";
    const  static string dirPath_frames=dataPath+"frames/";
    const  static string dirPath_stl=dataPath+"stl/";
    const  static string dirPath_pcd=dataPath+"pcd/";
    const  static string dirPath_res=dataPath+"res/";
    const  static string dirPath_pcd_ground=dataPath+"pcd/ground/";
    const  static string dirPath_pcd_object=dataPath+"pcd/object/";
    // the name of some key file
    const  static string fileName_camParaBinary="camera_para.bin";
    const  static string fileName_rgbdBinary="color_depth_bundle.bin";
    const  static string fileName_campara="calib.txt";
    // the Postfix name of some key file 
    const  static string postfixName_colorFrame=".ppm";
    const  static string postfixName_depthFrame=".pgm";
    // the loaction of some key file 
    const  static string fileLocation_camParaBinary=string()+dirPath_bin+fileName_camParaBinary;
    const  static string fileLocation_rgbdBinary=string()+dirPath_bin+fileName_rgbdBinary;
    const  static string fileLocation_camPara=string()+dirPath_frames+fileName_campara;
    // the size of every Frame(rgb image or depth image)
    const  static int ImageWidth=640;
    const  static int ImageHigh=480;
    // real Volme
    const static double realVolme=0;
    // 实际长(x)宽(y)高(z)
    const static Eigen::Vector3d BOX_XYZ(0,0,0);
    // 地面分割时候的距离阈值 单位m
    const static double DistanceThreshold=0.005;
    // 
} // namespace name

