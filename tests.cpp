#define BOOST_TEST_MODULE unit_testai
#include "studentasLib.h"
#include "studentas.h"
#include <boost/test/included/unit_test.hpp>

BOOST_AUTO_TEST_CASE(vardas_funkcija)
{
    studentas temp;
    temp.setName("Vardenis");
    BOOST_CHECK(true);
    BOOST_REQUIRE_EQUAL(temp.vardas(), "Vardenis");
}

BOOST_AUTO_TEST_CASE(vid_funkcija)
{
    studentas temp;
    temp.pushPaz(6);
    temp.pushPaz(4);
    temp.pushPaz(8);
    temp.pushPaz(10);
    temp.setVid();
    BOOST_REQUIRE_EQUAL(temp.vid(), 8);
}

BOOST_AUTO_TEST_CASE(copy_constructor)
{
    studentas temp;
    temp.setName("Vardenis");
    studentas temp2(temp);
    BOOST_REQUIRE_EQUAL(temp2.vardas(), temp.vardas());
}

BOOST_AUTO_TEST_CASE(line_constructor)
{
    studentas temp("Pavardenis Vardenis 7 8 7 4 4", 4);
    BOOST_REQUIRE_EQUAL(temp.vardas(),"Vardenis");
}