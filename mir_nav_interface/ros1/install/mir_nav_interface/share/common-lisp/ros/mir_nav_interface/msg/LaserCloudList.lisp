; Auto-generated. Do not edit!


(cl:in-package mir_nav_interface-msg)


;//! \htmlinclude LaserCloudList.msg.html

(cl:defclass <LaserCloudList> (roslisp-msg-protocol:ros-message)
  ((clouds
    :reader clouds
    :initarg :clouds
    :type (cl:vector mir_nav_interface-msg:LaserCloud)
   :initform (cl:make-array 0 :element-type 'mir_nav_interface-msg:LaserCloud :initial-element (cl:make-instance 'mir_nav_interface-msg:LaserCloud))))
)

(cl:defclass LaserCloudList (<LaserCloudList>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <LaserCloudList>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'LaserCloudList)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name mir_nav_interface-msg:<LaserCloudList> is deprecated: use mir_nav_interface-msg:LaserCloudList instead.")))

(cl:ensure-generic-function 'clouds-val :lambda-list '(m))
(cl:defmethod clouds-val ((m <LaserCloudList>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader mir_nav_interface-msg:clouds-val is deprecated.  Use mir_nav_interface-msg:clouds instead.")
  (clouds m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <LaserCloudList>) ostream)
  "Serializes a message object of type '<LaserCloudList>"
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'clouds))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (roslisp-msg-protocol:serialize ele ostream))
   (cl:slot-value msg 'clouds))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <LaserCloudList>) istream)
  "Deserializes a message object of type '<LaserCloudList>"
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'clouds) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'clouds)))
    (cl:dotimes (i __ros_arr_len)
    (cl:setf (cl:aref vals i) (cl:make-instance 'mir_nav_interface-msg:LaserCloud))
  (roslisp-msg-protocol:deserialize (cl:aref vals i) istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<LaserCloudList>)))
  "Returns string type for a message object of type '<LaserCloudList>"
  "mir_nav_interface/LaserCloudList")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'LaserCloudList)))
  "Returns string type for a message object of type 'LaserCloudList"
  "mir_nav_interface/LaserCloudList")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<LaserCloudList>)))
  "Returns md5sum for a message object of type '<LaserCloudList>"
  "03378f16abdd7f192fda69da6535d6f5")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'LaserCloudList)))
  "Returns md5sum for a message object of type 'LaserCloudList"
  "03378f16abdd7f192fda69da6535d6f5")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<LaserCloudList>)))
  "Returns full string definition for message of type '<LaserCloudList>"
  (cl:format cl:nil "LaserCloud[] clouds~%~%================================================================================~%MSG: mir_nav_interface/LaserCloud~%# scanner~%uint8 BACK_SCANNER=1~%uint8 FRONT_SCANNER=2~%uint8 RIGHT_SCANNER=3~%~%sensor_msgs/PointCloud2 cloud_data~%geometry_msgs/Pose origin~%geometry_msgs/Transform odom_to_base~%uint8 scanner~%~%================================================================================~%MSG: sensor_msgs/PointCloud2~%# This message holds a collection of N-dimensional points, which may~%# contain additional information such as normals, intensity, etc. The~%# point data is stored as a binary blob, its layout described by the~%# contents of the \"fields\" array.~%~%# The point cloud data may be organized 2d (image-like) or 1d~%# (unordered). Point clouds organized as 2d images may be produced by~%# camera depth sensors such as stereo or time-of-flight.~%~%# Time of sensor data acquisition, and the coordinate frame ID (for 3d~%# points).~%Header header~%~%# 2D structure of the point cloud. If the cloud is unordered, height is~%# 1 and width is the length of the point cloud.~%uint32 height~%uint32 width~%~%# Describes the channels and their layout in the binary data blob.~%PointField[] fields~%~%bool    is_bigendian # Is this data bigendian?~%uint32  point_step   # Length of a point in bytes~%uint32  row_step     # Length of a row in bytes~%uint8[] data         # Actual point data, size is (row_step*height)~%~%bool is_dense        # True if there are no invalid points~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%================================================================================~%MSG: sensor_msgs/PointField~%# This message holds the description of one point entry in the~%# PointCloud2 message format.~%uint8 INT8    = 1~%uint8 UINT8   = 2~%uint8 INT16   = 3~%uint8 UINT16  = 4~%uint8 INT32   = 5~%uint8 UINT32  = 6~%uint8 FLOAT32 = 7~%uint8 FLOAT64 = 8~%~%string name      # Name of field~%uint32 offset    # Offset from start of point struct~%uint8  datatype  # Datatype enumeration, see above~%uint32 count     # How many elements in the field~%~%================================================================================~%MSG: geometry_msgs/Pose~%# A representation of pose in free space, composed of position and orientation. ~%Point position~%Quaternion orientation~%~%================================================================================~%MSG: geometry_msgs/Point~%# This contains the position of a point in free space~%float64 x~%float64 y~%float64 z~%~%================================================================================~%MSG: geometry_msgs/Quaternion~%# This represents an orientation in free space in quaternion form.~%~%float64 x~%float64 y~%float64 z~%float64 w~%~%================================================================================~%MSG: geometry_msgs/Transform~%# This represents the transform between two coordinate frames in free space.~%~%Vector3 translation~%Quaternion rotation~%~%================================================================================~%MSG: geometry_msgs/Vector3~%# This represents a vector in free space. ~%# It is only meant to represent a direction. Therefore, it does not~%# make sense to apply a translation to it (e.g., when applying a ~%# generic rigid transformation to a Vector3, tf2 will only apply the~%# rotation). If you want your data to be translatable too, use the~%# geometry_msgs/Point message instead.~%~%float64 x~%float64 y~%float64 z~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'LaserCloudList)))
  "Returns full string definition for message of type 'LaserCloudList"
  (cl:format cl:nil "LaserCloud[] clouds~%~%================================================================================~%MSG: mir_nav_interface/LaserCloud~%# scanner~%uint8 BACK_SCANNER=1~%uint8 FRONT_SCANNER=2~%uint8 RIGHT_SCANNER=3~%~%sensor_msgs/PointCloud2 cloud_data~%geometry_msgs/Pose origin~%geometry_msgs/Transform odom_to_base~%uint8 scanner~%~%================================================================================~%MSG: sensor_msgs/PointCloud2~%# This message holds a collection of N-dimensional points, which may~%# contain additional information such as normals, intensity, etc. The~%# point data is stored as a binary blob, its layout described by the~%# contents of the \"fields\" array.~%~%# The point cloud data may be organized 2d (image-like) or 1d~%# (unordered). Point clouds organized as 2d images may be produced by~%# camera depth sensors such as stereo or time-of-flight.~%~%# Time of sensor data acquisition, and the coordinate frame ID (for 3d~%# points).~%Header header~%~%# 2D structure of the point cloud. If the cloud is unordered, height is~%# 1 and width is the length of the point cloud.~%uint32 height~%uint32 width~%~%# Describes the channels and their layout in the binary data blob.~%PointField[] fields~%~%bool    is_bigendian # Is this data bigendian?~%uint32  point_step   # Length of a point in bytes~%uint32  row_step     # Length of a row in bytes~%uint8[] data         # Actual point data, size is (row_step*height)~%~%bool is_dense        # True if there are no invalid points~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%================================================================================~%MSG: sensor_msgs/PointField~%# This message holds the description of one point entry in the~%# PointCloud2 message format.~%uint8 INT8    = 1~%uint8 UINT8   = 2~%uint8 INT16   = 3~%uint8 UINT16  = 4~%uint8 INT32   = 5~%uint8 UINT32  = 6~%uint8 FLOAT32 = 7~%uint8 FLOAT64 = 8~%~%string name      # Name of field~%uint32 offset    # Offset from start of point struct~%uint8  datatype  # Datatype enumeration, see above~%uint32 count     # How many elements in the field~%~%================================================================================~%MSG: geometry_msgs/Pose~%# A representation of pose in free space, composed of position and orientation. ~%Point position~%Quaternion orientation~%~%================================================================================~%MSG: geometry_msgs/Point~%# This contains the position of a point in free space~%float64 x~%float64 y~%float64 z~%~%================================================================================~%MSG: geometry_msgs/Quaternion~%# This represents an orientation in free space in quaternion form.~%~%float64 x~%float64 y~%float64 z~%float64 w~%~%================================================================================~%MSG: geometry_msgs/Transform~%# This represents the transform between two coordinate frames in free space.~%~%Vector3 translation~%Quaternion rotation~%~%================================================================================~%MSG: geometry_msgs/Vector3~%# This represents a vector in free space. ~%# It is only meant to represent a direction. Therefore, it does not~%# make sense to apply a translation to it (e.g., when applying a ~%# generic rigid transformation to a Vector3, tf2 will only apply the~%# rotation). If you want your data to be translatable too, use the~%# geometry_msgs/Point message instead.~%~%float64 x~%float64 y~%float64 z~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <LaserCloudList>))
  (cl:+ 0
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'clouds) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ (roslisp-msg-protocol:serialization-length ele))))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <LaserCloudList>))
  "Converts a ROS message object to a list"
  (cl:list 'LaserCloudList
    (cl:cons ':clouds (clouds msg))
))
