﻿// pch.h: 这是预编译标头文件。
// 下方列出的文件仅编译一次，提高了将来生成的生成性能。
// 这还将影响 IntelliSense 性能，包括代码完成和许多代码浏览功能。
// 但是，如果此处列出的文件中的任何一个在生成之间有更新，它们全部都将被重新编译。
// 请勿在此处添加要频繁更新的文件，这将使得性能优势无效。

#ifndef PCH_H
#define PCH_H

// 添加要在此处预编译的标头
#include "framework.h"

//因为数据库是通过网络连接的，必须包含网络相关头文件
#include "winsock.h"
//这个没什么好说的，mysql头文件自然要包含  
#include "mysql.h"

#include <string>
#include <vector>
#include<algorithm>
using namespace std;

#endif //PCH_H
