#include <iostream>
#include <glad/glad.h>
#include <GLFW/glfw3.h>

int main() {
    GLFWwindow* window;

    if(!glfwInit()) {
        std::cout << "GLFW Initialize failed!!" << std::endl;
        return -1;
    }

    window =  glfwCreateWindow(640, 480, "OpenGL window", NULL, NULL);
    glfwMakeContextCurrent(window);

    if(!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)) {
        glfwTerminate();
        return -1;
    }

    glClearColor(0.75f, 0.5f, 0.75f, 1.0f);
    
    while(!glfwWindowShouldClose(window)) {
        glfwPollEvents();
        glClear(GL_COLOR_BUFFER_BIT);
        glfwSwapBuffers(window);
    }

    glfwTerminate();

    return 0;
}