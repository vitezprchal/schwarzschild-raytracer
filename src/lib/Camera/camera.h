#ifndef CAMERA_H
#define CAMERA_H

#include <glm/vec3.hpp>
#include "../Object/object.h"

const float DEFAULT_FOV = 90.;

class Camera: public Object {
public:
    Camera();
    Camera(glm::vec3 pos, glm::vec3 forward, glm::vec3 right);
    Camera(glm::vec3 pos);

    glm::vec3 getForward();
    void setForward(glm::vec3 newForward);

    glm::vec3 getRight();
    void setRight(glm::vec3 newRight);

    glm::vec3 getUp();
    void setUp(glm::vec3 newUp);

    // calculates from the other two
    void calculateForward();
    void calculateRight();
    void calculateUp();

    void setFov(float fov);
    float getFov();

private:
    glm::vec3 m_forward{0.f, 0.f, -1.f};
    glm::vec3 m_right{1.f, 0.f, 0.f};
    glm::vec3 m_up{0.f, 1.f, 0.f};
    float m_fov = DEFAULT_FOV;
};
#endif
