#include <unity.h>
#include <gain.h>

void setUp(void) {
    // set stuff up here
}

void tearDown(void) {
    // clean stuff up here
}

void test_gain_set_get(void) {
    Gain gain;
    float g = 0.7f;
    gain.setGain(g);
    TEST_ASSERT_EQUAL_FLOAT(g, gain.getGain());
}

void test_module_process(void) {
    float in[] = {1.f, 2.f};
    float out[2];
    float ref[] = {.5f, 1.f};
    float g = 0.5f;
    float* buffIn[1] = {in};
    float* buffOut[1] = {out};
    Gain gain;
    gain.setGain(g);
    gain.process(buffIn, buffOut, 1, 2);
    TEST_ASSERT_EQUAL_FLOAT_ARRAY(ref, buffOut[0], 2);
}

// not needed when using generate_test_runner.rb
int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_gain_set_get);
    RUN_TEST(test_module_process);
    return UNITY_END();
}