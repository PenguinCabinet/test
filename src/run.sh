LANG=ja_JP.UTF-8
clang++ -v
if [ $@ = "1" ]; then
    clang++ -std=c++14 -fsanitize=address,fuzzer -g -o /fuzzer /src/main1.cpp
else
    clang++ -std=c++14 -fsanitize=address,fuzzer -g -o /fuzzer /src/main2.cpp
fi
/fuzzer -max_total_time=10
