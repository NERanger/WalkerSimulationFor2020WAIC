; Auto-generated. Do not edit!


(cl:in-package cruiser_msgs-msg)


;//! \htmlinclude RangeArray.msg.html

(cl:defclass <RangeArray> (roslisp-msg-protocol:ros-message)
  ((header
    :reader header
    :initarg :header
    :type std_msgs-msg:Header
    :initform (cl:make-instance 'std_msgs-msg:Header))
   (ranges
    :reader ranges
    :initarg :ranges
    :type (cl:vector sensor_msgs-msg:Range)
   :initform (cl:make-array 0 :element-type 'sensor_msgs-msg:Range :initial-element (cl:make-instance 'sensor_msgs-msg:Range))))
)

(cl:defclass RangeArray (<RangeArray>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <RangeArray>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'RangeArray)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name cruiser_msgs-msg:<RangeArray> is deprecated: use cruiser_msgs-msg:RangeArray instead.")))

(cl:ensure-generic-function 'header-val :lambda-list '(m))
(cl:defmethod header-val ((m <RangeArray>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader cruiser_msgs-msg:header-val is deprecated.  Use cruiser_msgs-msg:header instead.")
  (header m))

(cl:ensure-generic-function 'ranges-val :lambda-list '(m))
(cl:defmethod ranges-val ((m <RangeArray>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader cruiser_msgs-msg:ranges-val is deprecated.  Use cruiser_msgs-msg:ranges instead.")
  (ranges m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <RangeArray>) ostream)
  "Serializes a message object of type '<RangeArray>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'header) ostream)
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'ranges))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (roslisp-msg-protocol:serialize ele ostream))
   (cl:slot-value msg 'ranges))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <RangeArray>) istream)
  "Deserializes a message object of type '<RangeArray>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'header) istream)
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'ranges) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'ranges)))
    (cl:dotimes (i __ros_arr_len)
    (cl:setf (cl:aref vals i) (cl:make-instance 'sensor_msgs-msg:Range))
  (roslisp-msg-protocol:deserialize (cl:aref vals i) istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<RangeArray>)))
  "Returns string type for a message object of type '<RangeArray>"
  "cruiser_msgs/RangeArray")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'RangeArray)))
  "Returns string type for a message object of type 'RangeArray"
  "cruiser_msgs/RangeArray")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<RangeArray>)))
  "Returns md5sum for a message object of type '<RangeArray>"
  "4c1d9b3ff03219d31e41c86817a72ba8")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'RangeArray)))
  "Returns md5sum for a message object of type 'RangeArray"
  "4c1d9b3ff03219d31e41c86817a72ba8")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<RangeArray>)))
  "Returns full string definition for message of type '<RangeArray>"
  (cl:format cl:nil "std_msgs/Header header
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'RangeArray)))
  "Returns full string definition for message of type 'RangeArray"
  (cl:format cl:nil "std_msgs/Header header
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <RangeArray>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'header))
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'ranges) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ (roslisp-msg-protocol:serialization-length ele))))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <RangeArray>))
  "Converts a ROS message object to a list"
  (cl:list 'RangeArray
    (cl:cons ':header (header msg))
    (cl:cons ':ranges (ranges msg))
))