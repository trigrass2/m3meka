FILE(REMOVE_RECURSE
  "msg_gen"
  "msg_gen"
  "src/shm_led_mouth/msg"
  "CMakeFiles/ROSBUILD_genmsg_cpp"
  "msg_gen/cpp/include/shm_led_mouth/LEDMatrixRGB.h"
  "msg_gen/cpp/include/shm_led_mouth/LEDMatrixCmd.h"
  "msg_gen/cpp/include/shm_led_mouth/LEDMatrixRow.h"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/ROSBUILD_genmsg_cpp.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
