/*
#include <boost/lambda/lambda.hpp>
#include <iostream>
#include <iterator>
#include <algorithm>

int main()
{
  using namespace boost::lambda;
  typedef std::istream_iterator<int> in;

  std::for_each(
          in(std::cin), in(), std::cout << (_1 * 3) << " " );
}*/

// ##########################################################
/*
#include <boost/timer/timer.hpp>
#include <iostream>
#include <cmath>

using namespace boost::timer;

int main()
{
    cpu_timer timer;

    for (int i = 0; i < 1000000; ++i)
        std::pow(1.234, i);
    std::cout << timer.format() << '\n';
}
*/

// ##########################################################


/*
#include <iostream>
#include <string>
#include <Poco/JSON/JSON.h>
#include <Poco/JSON/Parser.h>
#include <Poco/Dynamic/Var.h>

using namespace std;
using namespace Poco::JSON;

string GetValue(Object::Ptr aoJsonObject, const char *aszKey) {
    Poco::Dynamic::Var loVariable;
    string lsReturn;
    string lsKey(aszKey);

    // Get the member Variable
    //
    loVariable = aoJsonObject->get(lsKey);

    // Get the Value from the Variable
    //
    lsReturn = loVariable.convert<std::string>();

    return lsReturn;
}
*/

// ##########################################################

#include <stdio.h>
#include "curl/curl.h"

int main(){
    CURL* curl = curl_easy_init();
    if(!curl){
        fprintf(stderr, "curl initialization failure");
        return 128;
    }

    CURLcode res = CURLE_OK;
    if ((res = curl_easy_setopt(curl, CURLOPT_URL, "https://raw.githubusercontent.com/learnclang/current/cmake-and-libcurl/README.md")) != CURLE_OK){
        fprintf(stderr, curl_easy_strerror(res));
        return 1;
    }
    if ((res = curl_easy_setopt(curl, CURLOPT_FOLLOWLOCATION, 1L)) != CURLE_OK){
        fprintf(stderr, curl_easy_strerror(res));
        return 1;
    }
    if((res = curl_easy_perform(curl)) != CURLE_OK){
        fprintf(stderr, curl_easy_strerror(res));
        return 1;
    }

    curl_easy_cleanup(curl);
    return 0;
}