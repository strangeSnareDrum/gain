#pragma once

class Gain {
   public:
    Gain();

    void setGain(float gain);
    float getGain();
    void process(float **in, float** out, int num_channels, int block_size);

   private:
    float m_gain = 1.f;    
};