#include <glad/glad.h>
#include "render.h"


void Render::ClearScreen() {
        glClearColor(0.2f, 0.3f, 0.3f, 1.0f);

    glClear(GL_COLOR_BUFFER_BIT);
}
