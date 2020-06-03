; Auto-generated. Do not edit!


(cl:in-package cruiser_msgs-msg)


;//! \htmlinclude VirtualWall.msg.html

(cl:defclass <VirtualWall> (roslisp-msg-protocol:ros-message)
  ((info
    :reader info
    :initarg :info
    :type nav_msgs-msg:MapMetaData
    :initform (cl:make-instance 'nav_msgs-msg:MapMetaData))
   (walls
    :reader walls
    :initarg :walls
    :type (cl:vector nav_msgs-msg:Path)
   :initform (cl:make-array 0 :element-type 'nav_msgs-msg:Path :initial-element (cl:make-instance 'nav_msgs-msg:Path))))
)

(cl:defclass VirtualWall (<VirtualWall>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <VirtualWall>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'VirtualWall)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name cruiser_msgs-msg:<VirtualWall> is deprecated: use cruiser_msgs-msg:VirtualWall instead.")))

(cl:ensure-generic-function 'info-val :lambda-list '(m))
(cl:defmethod info-val ((m <VirtualWall>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader cruiser_msgs-msg:info-val is deprecated.  Use cruiser_msgs-msg:info instead.")
  (info m))

(cl:ensure-generic-function 'walls-val :lambda-list '(m))
(cl:defmethod walls-val ((m <VirtualWall>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader cruiser_msgs-msg:walls-val is deprecated.  Use cruiser_msgs-msg:walls instead.")
  (walls m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <VirtualWall>) ostream)
  "Serializes a message object of type '<VirtualWall>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'info) ostream)
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'walls))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (roslisp-msg-protocol:serialize ele ostream))
   (cl:slot-value msg 'walls))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <VirtualWall>) istream)
  "Deserializes a message object of type '<VirtualWall>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'info) istream)
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'walls) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'walls)))
    (cl:dotimes (i __ros_arr_len)
    (cl:setf (cl:aref vals i) (cl:make-instance 'nav_msgs-msg:Path))
  (roslisp-msg-protocol:deserialize (cl:aref vals i) istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<VirtualWall>)))
  "Returns string type for a message object of type '<VirtualWall>"
  "cruiser_msgs/VirtualWall")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'VirtualWall)))
  "Returns string type for a message object of type 'VirtualWall"
  "cruiser_msgs/VirtualWall")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<VirtualWall>)))
  "Returns md5sum for a message object of type '<VirtualWall>"
  "f2a170bcae45cdc4c5d5fe2965ae941e")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'VirtualWall)))
  "Returns md5sum for a message object of type 'VirtualWall"
  "f2a170bcae45cdc4c5d5fe2965ae941e")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<VirtualWall>)))
  "Returns full string definition for message of type '<VirtualWall>"
  (cl:format cl:nil "nav_msgs/MapMetaData info
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'VirtualWall)))
  "Returns full string definition for message of type 'VirtualWall"
  (cl:format cl:nil "nav_msgs/MapMetaData info
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <VirtualWall>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'info))
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'walls) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ (roslisp-msg-protocol:serialization-length ele))))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <VirtualWall>))
  "Converts a ROS message object to a list"
  (cl:list 'VirtualWall
    (cl:cons ':info (info msg))
    (cl:cons ':walls (walls msg))
))