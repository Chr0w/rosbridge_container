; Auto-generated. Do not edit!


(cl:in-package mir_nav_interface-msg)


;//! \htmlinclude LaserCloud.msg.html

(cl:defclass <LaserCloud> (roslisp-msg-protocol:ros-message)
  ((cloud_data
    :reader cloud_data
    :initarg :cloud_data
    :type sensor_msgs-msg:PointCloud2
    :initform (cl:make-instance 'sensor_msgs-msg:PointCloud2))
   (origin
    :reader origin
    :initarg :origin
    :type geometry_msgs-msg:Pose
    :initform (cl:make-instance 'geometry_msgs-msg:Pose))
   (odom_to_base
    :reader odom_to_base
    :initarg :odom_to_base
    :type geometry_msgs-msg:Transform
    :initform (cl:make-instance 'geometry_msgs-msg:Transform))
   (scanner
    :reader scanner
    :initarg :scanner
    :type cl:fixnum
    :initform 0))
)

(cl:defclass LaserCloud (<LaserCloud>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <LaserCloud>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'LaserCloud)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name mir_nav_interface-msg:<LaserCloud> is deprecated: use mir_nav_interface-msg:LaserCloud instead.")))

(cl:ensure-generic-function 'cloud_data-val :lambda-list '(m))
(cl:defmethod cloud_data-val ((m <LaserCloud>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader mir_nav_interface-msg:cloud_data-val is deprecated.  Use mir_nav_interface-msg:cloud_data instead.")
  (cloud_data m))

(cl:ensure-generic-function 'origin-val :lambda-list '(m))
(cl:defmethod origin-val ((m <LaserCloud>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader mir_nav_interface-msg:origin-val is deprecated.  Use mir_nav_interface-msg:origin instead.")
  (origin m))

(cl:ensure-generic-function 'odom_to_base-val :lambda-list '(m))
(cl:defmethod odom_to_base-val ((m <LaserCloud>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader mir_nav_interface-msg:odom_to_base-val is deprecated.  Use mir_nav_interface-msg:odom_to_base instead.")
  (odom_to_base m))

(cl:ensure-generic-function 'scanner-val :lambda-list '(m))
(cl:defmethod scanner-val ((m <LaserCloud>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader mir_nav_interface-msg:scanner-val is deprecated.  Use mir_nav_interface-msg:scanner instead.")
  (scanner m))
(cl:defmethod roslisp-msg-protocol:symbol-codes ((msg-type (cl:eql '<LaserCloud>)))
    "Constants for message type '<LaserCloud>"
  '((:BACK_SCANNER . 1)
    (:FRONT_SCANNER . 2)
    (:RIGHT_SCANNER . 3))
)
(cl:defmethod roslisp-msg-protocol:symbol-codes ((msg-type (cl:eql 'LaserCloud)))
    "Constants for message type 'LaserCloud"
  '((:BACK_SCANNER . 1)
    (:FRONT_SCANNER . 2)
    (:RIGHT_SCANNER . 3))
)
(cl:defmethod roslisp-msg-protocol:serialize ((msg <LaserCloud>) ostream)
  "Serializes a message object of type '<LaserCloud>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'cloud_data) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'origin) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'odom_to_base) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'scanner)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <LaserCloud>) istream)
  "Deserializes a message object of type '<LaserCloud>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'cloud_data) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'origin) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'odom_to_base) istream)
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'scanner)) (cl:read-byte istream))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<LaserCloud>)))
  "Returns string type for a message object of type '<LaserCloud>"
  "mir_nav_interface/LaserCloud")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'LaserCloud)))
  "Returns string type for a message object of type 'LaserCloud"
  "mir_nav_interface/LaserCloud")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<LaserCloud>)))
  "Returns md5sum for a message object of type '<LaserCloud>"
  "390c8eed75ff606cf6ecd99f918bcb8c")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'LaserCloud)))
  "Returns md5sum for a message object of type 'LaserCloud"
  "390c8eed75ff606cf6ecd99f918bcb8c")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<LaserCloud>)))
  "Returns full string definition for message of type '<LaserCloud>"
  (cl:format cl:nil "# scanner~%uint8 BACK_SCANNER=1~%uint8 FRONT_SCANNER=2~%uint8 RIGHT_SCANNER=3~%~%sensor_msgs/PointCloud2 cloud_data~%geometry_msgs/Pose origin~%geometry_msgs/Transform odom_to_base~%uint8 scanner~%~%================================================================================~%MSG: sensor_msgs/PointCloud2~%# This message holds a collection of N-dimensional points, which may~%# contain additional information such as normals, intensity, etc. The~%# point data is stored as a binary blob, its layout described by the~%# contents of the \"fields\" array.~%~%# The point cloud data may be organized 2d (image-like) or 1d~%# (unordered). Point clouds organized as 2d images may be produced by~%# camera depth sensors such as stereo or time-of-flight.~%~%# Time of sensor data acquisition, and the coordinate frame ID (for 3d~%# points).~%Header header~%~%# 2D structure of the point cloud. If the cloud is unordered, height is~%# 1 and width is the length of the point cloud.~%uint32 height~%uint32 width~%~%# Describes the channels and their layout in the binary data blob.~%PointField[] fields~%~%bool    is_bigendian # Is this data bigendian?~%uint32  point_step   # Length of a point in bytes~%uint32  row_step     # Length of a row in bytes~%uint8[] data         # Actual point data, size is (row_step*height)~%~%bool is_dense        # True if there are no invalid points~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%================================================================================~%MSG: sensor_msgs/PointField~%# This message holds the description of one point entry in the~%# PointCloud2 message format.~%uint8 INT8    = 1~%uint8 UINT8   = 2~%uint8 INT16   = 3~%uint8 UINT16  = 4~%uint8 INT32   = 5~%uint8 UINT32  = 6~%uint8 FLOAT32 = 7~%uint8 FLOAT64 = 8~%~%string name      # Name of field~%uint32 offset    # Offset from start of point struct~%uint8  datatype  # Datatype enumeration, see above~%uint32 count     # How many elements in the field~%~%================================================================================~%MSG: geometry_msgs/Pose~%# A representation of pose in free space, composed of position and orientation. ~%Point position~%Quaternion orientation~%~%================================================================================~%MSG: geometry_msgs/Point~%# This contains the position of a point in free space~%float64 x~%float64 y~%float64 z~%~%================================================================================~%MSG: geometry_msgs/Quaternion~%# This represents an orientation in free space in quaternion form.~%~%float64 x~%float64 y~%float64 z~%float64 w~%~%================================================================================~%MSG: geometry_msgs/Transform~%# This represents the transform between two coordinate frames in free space.~%~%Vector3 translation~%Quaternion rotation~%~%================================================================================~%MSG: geometry_msgs/Vector3~%# This represents a vector in free space. ~%# It is only meant to represent a direction. Therefore, it does not~%# make sense to apply a translation to it (e.g., when applying a ~%# generic rigid transformation to a Vector3, tf2 will only apply the~%# rotation). If you want your data to be translatable too, use the~%# geometry_msgs/Point message instead.~%~%float64 x~%float64 y~%float64 z~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'LaserCloud)))
  "Returns full string definition for message of type 'LaserCloud"
  (cl:format cl:nil "# scanner~%uint8 BACK_SCANNER=1~%uint8 FRONT_SCANNER=2~%uint8 RIGHT_SCANNER=3~%~%sensor_msgs/PointCloud2 cloud_data~%geometry_msgs/Pose origin~%geometry_msgs/Transform odom_to_base~%uint8 scanner~%~%================================================================================~%MSG: sensor_msgs/PointCloud2~%# This message holds a collection of N-dimensional points, which may~%# contain additional information such as normals, intensity, etc. The~%# point data is stored as a binary blob, its layout described by the~%# contents of the \"fields\" array.~%~%# The point cloud data may be organized 2d (image-like) or 1d~%# (unordered). Point clouds organized as 2d images may be produced by~%# camera depth sensors such as stereo or time-of-flight.~%~%# Time of sensor data acquisition, and the coordinate frame ID (for 3d~%# points).~%Header header~%~%# 2D structure of the point cloud. If the cloud is unordered, height is~%# 1 and width is the length of the point cloud.~%uint32 height~%uint32 width~%~%# Describes the channels and their layout in the binary data blob.~%PointField[] fields~%~%bool    is_bigendian # Is this data bigendian?~%uint32  point_step   # Length of a point in bytes~%uint32  row_step     # Length of a row in bytes~%uint8[] data         # Actual point data, size is (row_step*height)~%~%bool is_dense        # True if there are no invalid points~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%================================================================================~%MSG: sensor_msgs/PointField~%# This message holds the description of one point entry in the~%# PointCloud2 message format.~%uint8 INT8    = 1~%uint8 UINT8   = 2~%uint8 INT16   = 3~%uint8 UINT16  = 4~%uint8 INT32   = 5~%uint8 UINT32  = 6~%uint8 FLOAT32 = 7~%uint8 FLOAT64 = 8~%~%string name      # Name of field~%uint32 offset    # Offset from start of point struct~%uint8  datatype  # Datatype enumeration, see above~%uint32 count     # How many elements in the field~%~%================================================================================~%MSG: geometry_msgs/Pose~%# A representation of pose in free space, composed of position and orientation. ~%Point position~%Quaternion orientation~%~%================================================================================~%MSG: geometry_msgs/Point~%# This contains the position of a point in free space~%float64 x~%float64 y~%float64 z~%~%================================================================================~%MSG: geometry_msgs/Quaternion~%# This represents an orientation in free space in quaternion form.~%~%float64 x~%float64 y~%float64 z~%float64 w~%~%================================================================================~%MSG: geometry_msgs/Transform~%# This represents the transform between two coordinate frames in free space.~%~%Vector3 translation~%Quaternion rotation~%~%================================================================================~%MSG: geometry_msgs/Vector3~%# This represents a vector in free space. ~%# It is only meant to represent a direction. Therefore, it does not~%# make sense to apply a translation to it (e.g., when applying a ~%# generic rigid transformation to a Vector3, tf2 will only apply the~%# rotation). If you want your data to be translatable too, use the~%# geometry_msgs/Point message instead.~%~%float64 x~%float64 y~%float64 z~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <LaserCloud>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'cloud_data))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'origin))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'odom_to_base))
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <LaserCloud>))
  "Converts a ROS message object to a list"
  (cl:list 'LaserCloud
    (cl:cons ':cloud_data (cloud_data msg))
    (cl:cons ':origin (origin msg))
    (cl:cons ':odom_to_base (odom_to_base msg))
    (cl:cons ':scanner (scanner msg))
))
