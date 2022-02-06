#include "unity.h"
#include "game_operations.h"

/* Modify these two lines according to the project */



/* Prototypes for all the test functions */

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

void test_check_draw(){
  TEST_ASSERT_EQUAL(1, check_draw(6));
}


/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_check_draw);
  

  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 

