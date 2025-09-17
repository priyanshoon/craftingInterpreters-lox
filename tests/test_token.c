#include "unity.h"
#include "../src/tokens/token.h"

void setUp() {}
void tearDown() {}

void test_make_token_should_store_types_and_literal(void) {
    Token token = make_tokens(TOKEN_INT, "123", 1, 1);
    TEST_ASSERT_EQUAL(TOKEN_INT, token.type);
    TEST_ASSERT_EQUAL_STRING("123", token.literal);
}

int main() {
    UNITY_BEGIN();
    RUN_TEST(test_make_token_should_store_types_and_literal);
    return UNITY_END();
}
