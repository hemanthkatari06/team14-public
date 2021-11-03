#include "unity.h"
#include "allheader.h"



/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */

//------------------------upload run test functions


RUN_TEST(test_taka_to_dollar);
  RUN_TEST(test_taka_to_euro);
  RUN_TEST(test_dollar_to_taka);
  RUN_TEST(test_dollar_to_euro);
  RUN_TEST(test_euro_to_taka);
  RUN_TEST(test_euro_to_dollar);
  RUN_TEST(test_j_to_kw);
  RUN_TEST(test_j_to_kj);
  RUN_TEST(test_kw_to_j);
  RUN_TEST(test_kw_to_kj);
  RUN_TEST(test_kj_to_j);
  RUN_TEST(test_kj_to_kw);
  RUN_TEST(test_cm_to_m);
  RUN_TEST(test_cm_to_km);
  RUN_TEST(test_m_to_cm);
  RUN_TEST(test_m_to_km);
  RUN_TEST(test_km_to_cm);
  RUN_TEST(test_km_to_m);


//-----------------------------------------------upto here narsimha

  RUN_TEST(addition_test);
    RUN_TEST(sub_test);
    RUN_TEST(multi_test);
    RUN_TEST(division_test);
    RUN_TEST(power_test);
    RUN_TEST(squareroot_test);
    RUN_TEST(centigram_to_gram_test);
    RUN_TEST(centigram_to_kilogram_test);
    RUN_TEST(gram_to_kilogram_test);
    RUN_TEST(gram_to_centigram_test);
    RUN_TEST(kilogram_to_centigram_test);
    RUN_TEST(kilogram_to_gram_test);



//-------------------------------------------------upto here sravan


    RUN_TEST(birth_calculator_test);


//----------------------------------------------upto here suhas
RUN_TEST(seconds_to_minutes_test);
    RUN_TEST(seconds_to_hours_test);
    RUN_TEST(minutes_to_seconds_test);
    RUN_TEST(Minutes_to_Hours_test);
    RUN_TEST(Hours_to_Seconds_test);
    RUN_TEST(Hours_to_Minutes_test);



//-----------------------------------------------upto here teja

    RUN_TEST(test_binarytodecimal);
    RUN_TEST(test_binarytohexadecimal);

    RUN_TEST(test_mps_to_kmh);
    RUN_TEST(test_mps_to_miph);
    RUN_TEST(test_kph_to_mps);
    RUN_TEST(test_kph_to_miph);
    RUN_TEST(test_miph_to_mps);
    RUN_TEST(test_miph_to_kph);

    RUN_TEST(test_cel_to_fah);
    RUN_TEST(test_cel_to_kel);
    RUN_TEST(test_fah_to_cel);
    RUN_TEST(test_fah_to_kel);
    RUN_TEST(test_kel_to_cel);
    RUN_TEST(test_kel_to_fah);  

//-------------------------------------------------upto here kajal

   RUN_TEST(ci_test); 

//---------------------------------------------------------upto here sadanand


RUN_TEST(bmi_test);


//-------------------------------------------------------------upto here varalaxmi


RUN_TEST(test_simple);


//---------------------------------------------------------------upto here neha



  return UNITY_END();
}

//------------------------------upload test assert functions

void addition_test()
{
    TEST_ASSERT_EQUAL(20,add(10,10));
    TEST_ASSERT_EQUAL(30,add(20,10));
}
void sub_test()
{
    TEST_ASSERT_EQUAL(30,subs(40,10));
     TEST_ASSERT_EQUAL(20,subs(30,10));
}
void multi_test()
{
    TEST_ASSERT_EQUAL(42,mul(7,6));
    
    TEST_ASSERT_EQUAL(40,mul(8,5));
}
void division_test()
{
   TEST_ASSERT_EQUAL(5,divide(25,5));
   TEST_ASSERT_EQUAL(9,divide(45,5));
}

void power_test()
{
    TEST_ASSERT_EQUAL(36,power(6,2));
    TEST_ASSERT_EQUAL(8,power(2,3));
}
void squareroot_test()
{
    TEST_ASSERT_EQUAL(0,sqroot(0));
    TEST_ASSERT_EQUAL(9,sqroot(81));
    TEST_ASSERT_EQUAL(6,sqroot(36));
}

void centigram_to_gram_test()
{
    TEST_ASSERT_EQUAL(10,centigram_gram(1000));
}
void centigram_to_kilogram_test()
{
    TEST_ASSERT_EQUAL(1,centigram_kilogram(100000));
}
void gram_to_kilogram_test()
{
    TEST_ASSERT_EQUAL(2,gram_kilogram(2000));
}
void gram_to_centigram_test()
{
    TEST_ASSERT_EQUAL(300,gram_centigram(3));
}
void kilogram_to_centigram_test()
{
    TEST_ASSERT_EQUAL(400000,kilogram_centigram(4));
}
void kilogram_to_gram_test()
{
    TEST_ASSERT_EQUAL(4000,kilogram_gram(4));
}




//-----------------------------------------------upto here narsimha


void test_taka_to_dollar(void)
{
  TEST_ASSERT_EQUAL(1.22, taka_to_dollar(100));

  TEST_ASSERT_EQUAL(0.65, taka_to_dollar(53));
}

void test_taka_to_euro(void)
{
  TEST_ASSERT_EQUAL(0.778, taka_to_euro(75));

  TEST_ASSERT_EQUAL(3.373, taka_to_euro(325));
}

void test_dollar_to_taka(void)
{
  TEST_ASSERT_EQUAL(103, dollar_to_taka(1.26));

  TEST_ASSERT_EQUAL(228, dollar_to_taka(2.79));
}

void test_dollar_to_euro(void)
{
  TEST_ASSERT_EQUAL(2.036, dollar_to_euro(2.4));

  TEST_ASSERT_EQUAL(3.393, dollar_to_euro(4));
}

void test_euro_to_taka(void)
{
  TEST_ASSERT_EQUAL(233.321, euro_to_taka(2.42));

  TEST_ASSERT_EQUAL(482.068, euro_to_taka(5));
}

void test_euro_to_dollar(void)
{
  TEST_ASSERT_EQUAL(5.624068, euro_to_dollar(4.77));

  TEST_ASSERT_EQUAL(8.253350, euro_to_dollar(7));
}

//energy function

void test_j_to_kw(void)
{
  TEST_ASSERT_EQUAL(0.0435130559, j_to_kw(156647));

}

void test_j_to_kj(void)
{
  TEST_ASSERT_EQUAL(56.745, j_to_kj(56745));

}

void test_kw_to_j(void)
{
  TEST_ASSERT_EQUAL(7200000, kw_to_j(2));

}

void test_kw_to_kj(void)
{
  TEST_ASSERT_EQUAL(4392.000, kw_to_kj(1.22));

}

void test_kj_to_j(void)
{
  TEST_ASSERT_EQUAL(4610.000, kj_to_j(4.61));

}

void test_kj_to_kw(void)
{
  TEST_ASSERT_EQUAL(0.035833, kj_to_kw(129));

}

//length fuunctions

void test_cm_to_m(void)
{
  TEST_ASSERT_EQUAL(1.560, cm_to_m(156));

}

void test_cm_to_km(void)
{
  TEST_ASSERT_EQUAL(0.63628, cm_to_km(63628));

}

void test_m_to_cm(void)
{
  TEST_ASSERT_EQUAL(862, m_to_cm(8.62));

}

void test_m_to_km(void)
{
  TEST_ASSERT_EQUAL(1, m_to_km(1000));
}

void test_km_to_cm(void)
{
  TEST_ASSERT_EQUAL(111000, km_to_cm(1.11));

}

void test_km_to_m(void)
{
  TEST_ASSERT_EQUAL(3400, km_to_m(3.4));

}


//-------------------------------------------------upto here sravan


void birth_calculator_test()
{
       
       TEST_ASSERT_EQUAL((20-00-01),birth_cal(2000,10,07,2019,10,07));
  
  
}



//----------------------------------------------upto here suhas
void seconds_to_minutes_test()
{
    TEST_ASSERT_EQUAL(2,sec_min(120));
}
void seconds_to_hours_test()
{
    TEST_ASSERT_EQUAL(7200,sec_hr(2));
}
void minutes_to_seconds_test()
{
    TEST_ASSERT_EQUAL(60,min_sec(1));
}
void Minutes_to_Hours_test()
{
    TEST_ASSERT_EQUAL(2,min_hr(120));
}
void Hours_to_Seconds_test()
{
    TEST_ASSERT_EQUAL(3600,hr_sec(1));
}
void Hours_to_Minutes_test()
{
    TEST_ASSERT_EQUAL(60,hr_min(1));
}




//-----------------------------------------------upto here teja


  void test_binarytodecimal(void)
{
  TEST_ASSERT_EQUAL(11, binarytodecimal(1011));

  TEST_ASSERT_EQUAL(26, binarytodecimal(11010));
}

void test_binarytohexadecimal(void)
{
  TEST_ASSERT_EQUAL(25, binarytohexadecimal(11001));

  TEST_ASSERT_EQUAL(27, binarytohexadecimal(11011));
}


void test_mps_to_kmh(void)
{
  TEST_ASSERT_EQUAL(180,mps_to_kmh(50));

  TEST_ASSERT_EQUAL(0, mps_to_kmh(0));
}

void test_mps_to_miph(void)
{
  TEST_ASSERT_EQUAL(47.04,mps_to_miph(21));

  TEST_ASSERT_EQUAL(147.84,mps_to_miph(66));
}

void test_kph_to_mps(void)
{
  TEST_ASSERT_EQUAL(9.80,kph_to_mps(35));

  TEST_ASSERT_EQUAL(0.28,kph_to_mps(1));
}

void test_kph_to_miph(void)
{
  TEST_ASSERT_EQUAL(45.88, kph_to_miph(74));

  TEST_ASSERT_EQUAL(20.71, kph_to_miph(33.4));
}

void test_miph_to_mps(void)
{
  TEST_ASSERT_EQUAL(11.25, miph_to_mps(25));

  TEST_ASSERT_EQUAL(15.30, miph_to_mps(34));
}

void test_miph_to_kph(void)
{
  TEST_ASSERT_EQUAL(17.71, miph_to_kph(11));

  TEST_ASSERT_EQUAL(161, miph_to_kph(100));
}



void test_cel_to_fah()
{
  TEST_ASSERT_EQUAL(32, cel_to_fah(0));

  TEST_ASSERT_EQUAL(212, cel_to_fah(100));
}

void test_cel_to_kel(void)
{
  TEST_ASSERT_EQUAL(373.15, cel_to_kel(100));

  TEST_ASSERT_EQUAL(354.850, cel_to_kel(81.7));
}

void test_fah_to_cel(void)
{
  TEST_ASSERT_EQUAL(-3.611, fah_to_cel(25.5));

  TEST_ASSERT_EQUAL(26.669, fah_to_cel(80));
}

void test_fah_to_kel(void)
{
  TEST_ASSERT_EQUAL(280.372, fah_to_kel(45));

  TEST_ASSERT_EQUAL(273.928, fah_to_kel(33.4));
}

void test_kel_to_cel(void)
{
  TEST_ASSERT_EQUAL(-73.150, kel_to_cel(200));

  TEST_ASSERT_EQUAL(-243.150, kel_to_cel(30));
}

void test_kel_to_fah(void)
{
  TEST_ASSERT_EQUAL(80.330, kel_to_fah(300));

  TEST_ASSERT_EQUAL(-279.67, kel_to_fah(100));
}


//-------------------------------------------------upto here kajal

void ci_test()
{
    TEST_ASSERT_EQUAL(1104.00,ci(1000,1,10));
}

//---------------------------------------------------------upto here sadanand

void bmi_test()
{
    //successful case
  TEST_ASSERT_EQUAL(0.002798, bmi(51, 135));
}

//-------------------------------------------------------------upto here varalaxmi



void test_simple(void){
    TEST_ASSERT_EQUAL(350,simple(1000,5,7));
}


//--------------------------------------------------------------upto here neha
