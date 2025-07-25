# dart_vision-2025

#### 硬件要求
1. 海康160万工业相机（mv-cs016）
2. 海康50mm镜头

#### 软件依赖
1. ubuntu-22.04
2. ros2-humble
3. opencv 4.10
3. cmake 3.22
4. c++ 11
5. ps:相机驱动是君佬的开源，本项目中不包含

#### 算法流程
1. 图像二值化
2. 提取最外层轮廓
3. 轮廓面积筛选
4. 对于每个轮廓进行圆拟合和矩形拟合
5. 选择最接近的1.274（a^2/Π*(a/2)^2）的一个作为结果

#### 项目架构
```
boow_ws
|-src-  
        |-hik_camera_ros2_driver-君佬的驱动
        |-resolving-算法主流程代码
        |-display-程序可视化代码
        |-serial-串口通信代码
        |
|-video-测试用视频

```

#### 注意事项
1. 为方便电控调参，后来把config文件转移到别的位置，因此config文件夹没有用到；config包含：曝光时间，模拟增益，二值化阈值
2. cmake全部查找路径均用的绝对路径
3. 代码比较乱，需要改动的地方较多，建议仅将本项目作为参考，或用python重现（拒绝c++）
4. video中存放测试视频
5. *.sh文件是shell脚本，（主要是ros2的命令太长了，给它封装了一层，这样只需要直接启动shell脚本，更方便）

#### TODO
1. 适配神经网络
2. 添加滤波算法来减小数据波动
3. 动态调参
4. 使用python重构
