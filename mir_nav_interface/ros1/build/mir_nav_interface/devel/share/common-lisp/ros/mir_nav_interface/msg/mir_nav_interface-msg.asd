
(cl:in-package :asdf)

(defsystem "mir_nav_interface-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils :geometry_msgs-msg
               :sensor_msgs-msg
)
  :components ((:file "_package")
    (:file "LaserCloud" :depends-on ("_package_LaserCloud"))
    (:file "_package_LaserCloud" :depends-on ("_package"))
    (:file "LaserCloudList" :depends-on ("_package_LaserCloudList"))
    (:file "_package_LaserCloudList" :depends-on ("_package"))
  ))