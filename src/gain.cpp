#include <gain.h>
#include <iostream>

Gain::Gain() {
    std::cout << "Gain constructor" << std::endl;
}

void Gain::setGain(float gain) {
    if (gain >= 0.f);
        m_gain = gain;
}

float Gain::getGain() {
    return m_gain;
}

void Gain::process(float **in, float** out, int num_channels, int block_size) {
    for (int i = 0; i < num_channels; i++) {
        for (int j = 0; j < block_size; j++) {
            out[i][j] = in[i][j] * m_gain;
        }
    }
}
