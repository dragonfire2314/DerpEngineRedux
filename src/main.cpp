// #include <glad/glad.h>
// #include <GLFW/glfw3.h>
// #include <glm/glm.hpp>
// #include <glm/gtc/matrix_transform.hpp>
// #include <glm/gtc/type_ptr.hpp>

// #include <iostream>
// #include <string>
// #include <fstream>
// #include <sstream>
// #include <stdexcept>
// #include <vector>

// #include <application.hpp>


// #define STB_IMAGE_IMPLEMENTATION
// #include <stb_image.h>

// void framebuffer_size_callback(GLFWwindow* window, int width, int height);  

// // glm::vec3 cameraPos   = glm::vec3(0.0f, 0.0f,  3.0f);
// // glm::vec3 cameraFront = glm::vec3(0.0f, 0.0f, -1.0f);
// // glm::vec3 cameraUp    = glm::vec3(0.0f, 1.0f,  0.0f);



// // void processInput(GLFWwindow *window)
// // {
// //     if(glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS)
// //         glfwSetWindowShouldClose(window, true);
// //     float cameraSpeed = 2.5f * deltaTime;
// //     if (glfwGetKey(window, GLFW_KEY_W) == GLFW_PRESS)
// //         cameraPos += cameraSpeed * cameraFront;
// //     if (glfwGetKey(window, GLFW_KEY_S) == GLFW_PRESS)
// //         cameraPos -= cameraSpeed * cameraFront;
// //     if (glfwGetKey(window, GLFW_KEY_A) == GLFW_PRESS)
// //         cameraPos -= glm::normalize(glm::cross(cameraFront, cameraUp)) * cameraSpeed;
// //     if (glfwGetKey(window, GLFW_KEY_D) == GLFW_PRESS)
// //         cameraPos += glm::normalize(glm::cross(cameraFront, cameraUp)) * cameraSpeed;
// // }

// float vertices[] = {
//     -0.5f, -0.5f, -0.5f,  0.0f, 0.0f,
//      0.5f, -0.5f, -0.5f,  1.0f, 0.0f,
//      0.5f,  0.5f, -0.5f,  1.0f, 1.0f,
//      0.5f,  0.5f, -0.5f,  1.0f, 1.0f,
//     -0.5f,  0.5f, -0.5f,  0.0f, 1.0f,
//     -0.5f, -0.5f, -0.5f,  0.0f, 0.0f,

//     -0.5f, -0.5f,  0.5f,  0.0f, 0.0f,
//      0.5f, -0.5f,  0.5f,  1.0f, 0.0f,
//      0.5f,  0.5f,  0.5f,  1.0f, 1.0f,
//      0.5f,  0.5f,  0.5f,  1.0f, 1.0f,
//     -0.5f,  0.5f,  0.5f,  0.0f, 1.0f,
//     -0.5f, -0.5f,  0.5f,  0.0f, 0.0f,

//     -0.5f,  0.5f,  0.5f,  1.0f, 0.0f,
//     -0.5f,  0.5f, -0.5f,  1.0f, 1.0f,
//     -0.5f, -0.5f, -0.5f,  0.0f, 1.0f,
//     -0.5f, -0.5f, -0.5f,  0.0f, 1.0f,
//     -0.5f, -0.5f,  0.5f,  0.0f, 0.0f,
//     -0.5f,  0.5f,  0.5f,  1.0f, 0.0f,

//      0.5f,  0.5f,  0.5f,  1.0f, 0.0f,
//      0.5f,  0.5f, -0.5f,  1.0f, 1.0f,
//      0.5f, -0.5f, -0.5f,  0.0f, 1.0f,
//      0.5f, -0.5f, -0.5f,  0.0f, 1.0f,
//      0.5f, -0.5f,  0.5f,  0.0f, 0.0f,
//      0.5f,  0.5f,  0.5f,  1.0f, 0.0f,

//     -0.5f, -0.5f, -0.5f,  0.0f, 1.0f,
//      0.5f, -0.5f, -0.5f,  1.0f, 1.0f,
//      0.5f, -0.5f,  0.5f,  1.0f, 0.0f,
//      0.5f, -0.5f,  0.5f,  1.0f, 0.0f,
//     -0.5f, -0.5f,  0.5f,  0.0f, 0.0f,
//     -0.5f, -0.5f, -0.5f,  0.0f, 1.0f,

//     -0.5f,  0.5f, -0.5f,  0.0f, 1.0f,
//      0.5f,  0.5f, -0.5f,  1.0f, 1.0f,
//      0.5f,  0.5f,  0.5f,  1.0f, 0.0f,
//      0.5f,  0.5f,  0.5f,  1.0f, 0.0f,
//     -0.5f,  0.5f,  0.5f,  0.0f, 0.0f,
//     -0.5f,  0.5f, -0.5f,  0.0f, 1.0f
// };
// unsigned int indices[] = {  // note that we start from 0!
//     0, 1, 3,   // first triangle
//     1, 2, 3    // second triangle
// };  

// int main()
// {
//     try
//     {
//         ApplicationConfig* appConfig = new ApplicationConfig();
//         appConfig->loadConfig("../configs/application.toml");

//         Application app(appConfig);
//         app.run();
//     }
//     catch(const std::exception& e)
//     {
//         std::cout << e.what() << '\n';
//         return 1;
//     }

//     return 0;
// }

int main2()
{
    // GLuint program = compileShaders("../shader/shader.vert", "../shader/shader.frag");
    // glUseProgram(program);




    // int width, height, nrChannels;
    // unsigned char *data = stbi_load("../assets/container.jpg", &width, &height, &nrChannels, 0);

    

    // unsigned int texture;
    // glGenTextures(1, &texture);
    // glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_MIRRORED_REPEAT);
    // glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_MIRRORED_REPEAT);
    // glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR_MIPMAP_LINEAR);
    // glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);

    // glActiveTexture(GL_TEXTURE0); // activate the texture unit first before binding texture
    // glBindTexture(GL_TEXTURE_2D, texture);  
    // if (data)
    // {
    //     glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, width, height, 0, GL_RGB, GL_UNSIGNED_BYTE, data);
    //     glGenerateMipmap(GL_TEXTURE_2D);
    // }
    // else
    // {
    //     std::cout << "Failed to load texture" << std::endl;
    // }
    // stbi_image_free(data);




    // unsigned int VAO;
    // glGenVertexArrays(1, &VAO);
    // unsigned int VBO;
    // glGenBuffers(1, &VBO);  
    // unsigned int EBO;
    // glGenBuffers(1, &EBO);



    // glBindVertexArray(VAO);

    // // glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, EBO);
    // // glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(indices), indices, GL_STATIC_DRAW);

    // glBindBuffer(GL_ARRAY_BUFFER, VBO);
    // glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);


    // glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 5 * sizeof(float), (void*)0);
    // glEnableVertexAttribArray(0);

    // glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 5 * sizeof(float), (void*)(3* sizeof(float)));
    // glEnableVertexAttribArray(1);

    // // glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(float), (void*)(6 * sizeof(float)));
    // // glEnableVertexAttribArray(2);  

    // glm::vec3 cameraTarget = glm::vec3(0.0f, 0.0f, 0.0f);
    // glm::vec3 cameraDirection = glm::normalize(cameraPos - cameraTarget);
    // glm::vec3 up = glm::vec3(0.0f, 1.0f, 0.0f); 


    // glm::mat4 model = glm::mat4(1.0f);
    // model = glm::rotate(model, glm::radians(-55.0f), glm::vec3(1.0f, 0.0f, 0.0f)); 
    // glm::mat4 view;
    // view = glm::lookAt(cameraPos, cameraPos + cameraFront, cameraUp);
    // // note that we're translating the scene in the reverse direction of where we want to move
    // view = glm::translate(view, glm::vec3(0.0f, 0.0f, -3.0f));
    // glm::mat4 projection;
    // projection = glm::perspective(glm::radians(45.0f), 800.0f / 600.0f, 0.1f, 100.0f);

    // int modelLoc = glGetUniformLocation(program, "model");
    // glUniformMatrix4fv(modelLoc, 1, GL_FALSE, glm::value_ptr(model));
    // int viewLoc = glGetUniformLocation(program, "view");
    // glUniformMatrix4fv(viewLoc, 1, GL_FALSE, glm::value_ptr(view));
    // int projectionLoc = glGetUniformLocation(program, "projection");
    // glUniformMatrix4fv(projectionLoc, 1, GL_FALSE, glm::value_ptr(projection));


    // // while(!glfwWindowShouldClose(window))
    // // {
    //     // processInput(window);

        

    //     // float currentFrame = glfwGetTime();
    //     // deltaTime = currentFrame - lastFrame;
    //     // lastFrame = currentFrame;  

    //     // model = glm::rotate(model, (float)glfwGetTime(), glm::vec3(0.5f, 1.0f, 0.0f));

    //     view = glm::lookAt(cameraPos, cameraPos + cameraFront, cameraUp);

    //     glUniformMatrix4fv(modelLoc, 1, GL_FALSE, glm::value_ptr(model));
    //     glUniformMatrix4fv(viewLoc, 1, GL_FALSE, glm::value_ptr(view));
    //     glUniformMatrix4fv(projectionLoc, 1, GL_FALSE, glm::value_ptr(projection));

    //     glUseProgram(program);
    //     glBindVertexArray(VAO);
    //     // glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_INT, 0);
    //     glDrawArrays(GL_TRIANGLES, 0, 36);

    //     // glfwSwapBuffers(window);
    //     // glfwPollEvents();

        
    // // }

    // glfwTerminate();
    return 0;
}

