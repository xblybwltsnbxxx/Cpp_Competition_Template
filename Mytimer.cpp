std::chrono::high_resolution_clock::time_point start;
void tbegin()
{
    start = std::chrono::high_resolution_clock::now();
}
void tend()
{
    auto end = std::chrono::high_resolution_clock::now();
    auto dur = std::chrono::duration<double, std::milli>(end - start).count();
    printf("%.3f ms\n", dur);
    fflush(stdout);
}
