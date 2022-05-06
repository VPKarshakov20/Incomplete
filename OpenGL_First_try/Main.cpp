#include<iostream>
#include<glad/glad.h>
#include<GLFW/glfw3.h>
//Initializing Shaders
#include "shaderClass.h"
#include "VAO.h"
#include "VBO.h"
#include "EBO.h"

using namespace std;
int main()
{
	//Initializing GLFW
	glfwInit();

	//Telling GLFW which version and profile we are using
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

	//creating vertices and setting their cordinates
	GLfloat vertices[] =
	{
		-0.5f, -0.5f * float(sqrt(3)) / 3, 0.0f,
		0.5f, -0.5f * float(sqrt(3)) / 3, 0.0f,
		0.0f, 0.5f * float(sqrt(3)) * 2 / 3, 0.0f,
		-0.5f / 2 , 0.5f * float(sqrt(3)) / 6, 0.0f,
		0.5f / 2 , 0.5f * float(sqrt(3)) / 6, 0.0f,
		0.0f, -0.5f * float(sqrt(3)) / 3, 0.0f,
	};

	GLuint indices[] =
	{
		0, 3, 5,
		3, 2 ,4,
		5, 4, 1
	};
	//Creating a window
	GLFWwindow* window = glfwCreateWindow(800, 800, "Window_GL", NULL, NULL);
	
	glfwMakeContextCurrent(window);

	gladLoadGL();

	glViewport(0, 0, 800, 800);

	glClearColor(0.07f, 0.13f, 0.17f, 1.0f);


	glClear(GL_COLOR_BUFFER_BIT);

	glfwSwapBuffers(window);

	Shader shaderProgram("default.vert", "default.frag");

	VAO VAO1;
	VAO1.Bind();

	VBO VBO1(vertices, sizeof(vertices));
	EBO EBO1(indices, sizeof(indices));

	VAO1.LinkVBO(VBO1, 0);
	VAO1.Unbind();
	VBO1.Unbind();
	EBO1.unBind();

	//Keeping the window open
	while (!glfwWindowShouldClose(window))
	{

		glClearColor(0.07f, 0.13f, 0.17f, 1.0f);
		glClear(GL_COLOR_BUFFER_BIT);
		//telling openGl which shaderprogram we want to use
		shaderProgram.Activate();
		VAO1.Bind();

		//Drawing the triangle 
		glDrawElements(GL_TRIANGLES, 9, GL_UNSIGNED_INT, 0);
		//Swapping the front with the back buffer
		glfwSwapBuffers(window);
		glfwPollEvents();
	}
	VAO1.Delete();
	VBO1.Delete();
	EBO1.Delete();
	shaderProgram.Delete();
	//Deletes the window before the program ends
	glfwDestroyWindow(window);
	//Deletes Glfw before the program ends
	glfwTerminate();
}