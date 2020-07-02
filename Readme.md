## 概述

已在Windows 10 64位环境下测试成功，本项目实现在主流IDE vscode下对BCC的编译调用，主要面向HUST AIA C课设的开发优化。

## 特性

1. vscode作为主流的IDE，具有极好的编码兼容性，在编码过程中支持极为丰富实用的快捷键和快捷提示。
2. 一定程度上打破虚拟环境的限制，实时在Win下修改代码，在Dosbox下运行。

### 注意：

1. 本项目仅仅支持编译运行（包括图形界面），暂不支持调试（验收时必须使用BC，因此也请用熟悉BC调试环境）。
2. 编译期错误将在DOX终端中显示。
3. 建议使用C/C++插件，建议另外使用其他调试器，例如gdb。

## 效果

请参考Demo文件夹下的Demo1, Demo2视频

## 安装和使用

1. 下载安装visual studio code
2. 在Borland C++相同位置粘贴InsoC.vbs InsoC.exe两个文件，再粘贴.vscode文件夹，建立DISK_D文件夹。效果如图：

![CopyToBorlandCpp](./Demo/Image/CopyToBorlandCpp.png)

3. 替换dosbox文件夹中的dosbox.conf文件
4. 使用vscode打开DISK_C的上层目录（文件->打开文件夹）。默认应该打开dox文件夹：

![OpenParentDictionary](./Demo/Image/OpenParentDictionary.png)

5. 单击vscode侧边栏的扩展选项，选择从VSIX安装，并找到bcrunner.vsix，确认。之后可以在DISK_C或DISK_D中编写程序并编译运行（F5）。

## PS

1. vscode路径中尽量不要出现中文或空格
2. 请检查默认shell是否为cmd（终端->默认终端）

---

2020.6.30更新

## 新特性：

1.	将输出文件（*.obj *.exe）的默认位置设置为*.c文件同目录
2.	支持自行设置输出文件的位置。在task.json args中添加输出文件的位置（注意这是dos虚拟路径）
3.	修复了mouse与bc环境下不一致的bug

## PSS
Inso近期正在写bc的通用图形函数库，有兴趣的童鞋记得关注下哦(～￣▽￣)～
