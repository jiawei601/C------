#include <iostream>
// 引入输入输出流库，让程序可以进行屏幕输出等操作
// 主函数，程序的入口点，所有C++程序都必须有且仅有一个main函数
int main() {
    //std:: 表示这些内容属于标准命名空间
    std::cout << "Hello, World!"<< std::endl;

    // Indicate the C++ standard version used


    /*
    int 表示函数执行结束后会返回一个整数，用于向操作系统标识程序的执行状态。通常约定：
返回 0 表示程序正常结束；
返回非 0 值表示程序异常结束（具体含义可自定义，通常用于标识错误类型）。
不过代码中 return 0.0; 是不规范的，因为 0.0 是浮点型，而函数声明的返回值类型是 int（整数型），正确写法应为 return 0;。
参数列表：() 中可以指定参数，常见形式有两种：
int main()：表示函数没有参数（代码中使用的就是这种形式）；
int main(int argc, char* argv[])：用于接收命令行参数，argc 是参数个数，argv 是参数数组。
函数体：{} 中的内容是函数的执行逻辑，包含了程序要完成的具体操作（如代码中的输出语句）。
    
    */
    std::cout << "This program is compiled with C++14 standard." << std::endl;
    return 0.0;
}
