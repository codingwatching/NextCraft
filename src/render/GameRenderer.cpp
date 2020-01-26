//
// Created by Twometer on 23 Jan 2020.
//

#include <glad/glad.h>
#include "GameRenderer.h"
#include "../NextCraft.h"

void GameRenderer::Initialize() {
    glEnable(GL_DEPTH_TEST);
    glEnable(GL_TEXTURE_2D);

    glEnable(GL_CULL_FACE);
    glCullFace(GL_BACK);

    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

    glEnableVertexAttribArray(0);
    glEnableVertexAttribArray(1);
    glEnableVertexAttribArray(2);

    this->terrainShader = new TerrainShader();
}

void GameRenderer::RenderFrame() {
    glViewport(0, 0, NextCraft::viewport.width, NextCraft::viewport.height);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    terrainShader->Use();
    glActiveTexture(GL_TEXTURE0);
}