
(cl:in-package :asdf)

(defsystem "m3ctrl_msgs-srv"
  :depends-on (:roslisp-msg-protocol :roslisp-utils :m3_msgs-msg
)
  :components ((:file "_package")
    (:file "M3JointArrayCmd" :depends-on ("_package_M3JointArrayCmd"))
    (:file "_package_M3JointArrayCmd" :depends-on ("_package"))
    (:file "M3JointArrayParam" :depends-on ("_package_M3JointArrayParam"))
    (:file "_package_M3JointArrayParam" :depends-on ("_package"))
    (:file "M3LoadX6Status" :depends-on ("_package_M3LoadX6Status"))
    (:file "_package_M3LoadX6Status" :depends-on ("_package"))
    (:file "M3HumanoidParam" :depends-on ("_package_M3HumanoidParam"))
    (:file "_package_M3HumanoidParam" :depends-on ("_package"))
    (:file "M3LoadX6Param" :depends-on ("_package_M3LoadX6Param"))
    (:file "_package_M3LoadX6Param" :depends-on ("_package"))
    (:file "M3JointArrayStatus" :depends-on ("_package_M3JointArrayStatus"))
    (:file "_package_M3JointArrayStatus" :depends-on ("_package"))
    (:file "M3HumanoidStatus" :depends-on ("_package_M3HumanoidStatus"))
    (:file "_package_M3HumanoidStatus" :depends-on ("_package"))
    (:file "M3LoadX6Cmd" :depends-on ("_package_M3LoadX6Cmd"))
    (:file "_package_M3LoadX6Cmd" :depends-on ("_package"))
    (:file "M3HumanoidCmd" :depends-on ("_package_M3HumanoidCmd"))
    (:file "_package_M3HumanoidCmd" :depends-on ("_package"))
  ))