FILE(REMOVE_RECURSE
  "msg_gen"
  "src/m3ctrl_msgs/msg"
  "CMakeFiles/ROSBUILD_genmsg_py"
  "src/m3ctrl_msgs/msg/__init__.py"
  "src/m3ctrl_msgs/msg/_M3JointCmd.py"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/ROSBUILD_genmsg_py.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)