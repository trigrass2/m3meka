FILE(REMOVE_RECURSE
  "../msg_gen"
  "../msg_gen"
  "../src/m3ctrl_msgs/msg"
  "CMakeFiles/ROSBUILD_genmsg_lisp"
  "../msg_gen/lisp/M3JointCmd.lisp"
  "../msg_gen/lisp/_package.lisp"
  "../msg_gen/lisp/_package_M3JointCmd.lisp"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/ROSBUILD_genmsg_lisp.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
