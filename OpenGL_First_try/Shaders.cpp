#include"shaderClass.h"

std::string get_file_contents(const char* filename)
{
	std::ifstream in(filename, std::ios::binary);
	if (in)
	{
		std::string contents;
		in.seekg(0, std::ios::end);
		contents.resize(in.tellg());
		in.seekg(0, std::ios::end);
		in.read(&contents[0], contents.size());
		in.close();
		return(contents);
	}
	throw(errno);
}
Shader::Shader(const char* vertexFile, const char* fragmentFile)
{
	std::string vertexCode = get_file_contents(vertexFile);
	std::string fragmentCode = get_file_contents(fragmentFile);

	const char* vertexSource = vertexCode.c_str();
	const char* fragmentSource = fragmentCode.c_str();


	//Initializing vertex shaders
	GLuint vertexShader = glCreateShader(GL_VERTEX_SHADER);

	//Attaching the vertex shader to the source
	glShaderSource(vertexShader, 1, &vertexSource, NULL);
	//Compiling the vertex shader into code
	glCompileShader(vertexShader);

	//Initializing fragment shaders
	GLuint fragmentShader = glCreateShader(GL_FRAGMENT_SHADER);

	//Attaching the fragment shader to the source
	glShaderSource(fragmentShader, 1, &fragmentSource, NULL);
	//Compiling the fragment shader into code
	glCompileShader(fragmentShader);


	//Initializing a program
	ID = glCreateProgram();

	//Attach both the shader and vertex shaders to the program
	glAttachShader(ID, vertexShader);
	glAttachShader(ID, fragmentShader);

	//Link the the shaders into a shader program
	glLinkProgram(ID);

	//Delete the vertex and the fragment shaders that we wont use anymore
	glDeleteShader(vertexShader);
	glDeleteShader(fragmentShader);

}

void Shader::Activate()
{
	glUseProgram(ID);
}
void Shader::Delete()
{
	glDeleteProgram(ID);
}