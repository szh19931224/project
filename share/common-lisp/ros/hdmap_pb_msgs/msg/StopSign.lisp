; Auto-generated. Do not edit!


(cl:in-package hdmap_pb_msgs-msg)


;//! \htmlinclude StopSign.msg.html

(cl:defclass <StopSign> (roslisp-msg-protocol:ros-message)
  ((id
    :reader id
    :initarg :id
    :type hdmap_pb_msgs-msg:Id
    :initform (cl:make-instance 'hdmap_pb_msgs-msg:Id))
   (stop_line
    :reader stop_line
    :initarg :stop_line
    :type hdmap_pb_msgs-msg:Curve
    :initform (cl:make-instance 'hdmap_pb_msgs-msg:Curve))
   (location
    :reader location
    :initarg :location
    :type hdmap_pb_msgs-msg:Point
    :initform (cl:make-instance 'hdmap_pb_msgs-msg:Point))
   (overlap_id
    :reader overlap_id
    :initarg :overlap_id
    :type (cl:vector hdmap_pb_msgs-msg:Id)
   :initform (cl:make-array 0 :element-type 'hdmap_pb_msgs-msg:Id :initial-element (cl:make-instance 'hdmap_pb_msgs-msg:Id)))
   (signal_id
    :reader signal_id
    :initarg :signal_id
    :type hdmap_pb_msgs-msg:Id
    :initform (cl:make-instance 'hdmap_pb_msgs-msg:Id)))
)

(cl:defclass StopSign (<StopSign>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <StopSign>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'StopSign)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name hdmap_pb_msgs-msg:<StopSign> is deprecated: use hdmap_pb_msgs-msg:StopSign instead.")))

(cl:ensure-generic-function 'id-val :lambda-list '(m))
(cl:defmethod id-val ((m <StopSign>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader hdmap_pb_msgs-msg:id-val is deprecated.  Use hdmap_pb_msgs-msg:id instead.")
  (id m))

(cl:ensure-generic-function 'stop_line-val :lambda-list '(m))
(cl:defmethod stop_line-val ((m <StopSign>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader hdmap_pb_msgs-msg:stop_line-val is deprecated.  Use hdmap_pb_msgs-msg:stop_line instead.")
  (stop_line m))

(cl:ensure-generic-function 'location-val :lambda-list '(m))
(cl:defmethod location-val ((m <StopSign>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader hdmap_pb_msgs-msg:location-val is deprecated.  Use hdmap_pb_msgs-msg:location instead.")
  (location m))

(cl:ensure-generic-function 'overlap_id-val :lambda-list '(m))
(cl:defmethod overlap_id-val ((m <StopSign>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader hdmap_pb_msgs-msg:overlap_id-val is deprecated.  Use hdmap_pb_msgs-msg:overlap_id instead.")
  (overlap_id m))

(cl:ensure-generic-function 'signal_id-val :lambda-list '(m))
(cl:defmethod signal_id-val ((m <StopSign>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader hdmap_pb_msgs-msg:signal_id-val is deprecated.  Use hdmap_pb_msgs-msg:signal_id instead.")
  (signal_id m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <StopSign>) ostream)
  "Serializes a message object of type '<StopSign>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'id) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'stop_line) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'location) ostream)
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'overlap_id))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (roslisp-msg-protocol:serialize ele ostream))
   (cl:slot-value msg 'overlap_id))
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'signal_id) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <StopSign>) istream)
  "Deserializes a message object of type '<StopSign>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'id) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'stop_line) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'location) istream)
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'overlap_id) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'overlap_id)))
    (cl:dotimes (i __ros_arr_len)
    (cl:setf (cl:aref vals i) (cl:make-instance 'hdmap_pb_msgs-msg:Id))
  (roslisp-msg-protocol:deserialize (cl:aref vals i) istream))))
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'signal_id) istream)
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<StopSign>)))
  "Returns string type for a message object of type '<StopSign>"
  "hdmap_pb_msgs/StopSign")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'StopSign)))
  "Returns string type for a message object of type 'StopSign"
  "hdmap_pb_msgs/StopSign")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<StopSign>)))
  "Returns md5sum for a message object of type '<StopSign>"
  "575b3327bee5b8682ea461e04d308069")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'StopSign)))
  "Returns md5sum for a message object of type 'StopSign"
  "575b3327bee5b8682ea461e04d308069")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<StopSign>)))
  "Returns full string definition for message of type '<StopSign>"
  (cl:format cl:nil "Id id ~%Curve stop_line ~%Point location ~%Id[] overlap_id ~%Id signal_id ~%~%================================================================================~%MSG: hdmap_pb_msgs/Id~%int8 id ~%~%================================================================================~%MSG: hdmap_pb_msgs/Curve~%CurveSegment[] segment ~%~%================================================================================~%MSG: hdmap_pb_msgs/CurveSegment~%LineSegment line_segment ~%Arc arc ~%Spiral spiral ~%Spline spline ~%Poly3 poly3 ~%float64 s ~%Point start_position ~%float64 heading ~%float64 length ~%~%================================================================================~%MSG: hdmap_pb_msgs/LineSegment~%Point[] point ~%~%================================================================================~%MSG: hdmap_pb_msgs/Point~%float64 x ~%float64 y ~%float64 z ~%~%================================================================================~%MSG: hdmap_pb_msgs/Arc~%Point center ~%float64 radius ~%float64 start_angle ~%float64 end_angle ~%~%================================================================================~%MSG: hdmap_pb_msgs/Spiral~%float64 curv_start ~%float64 curv_end ~%~%================================================================================~%MSG: hdmap_pb_msgs/Spline~%int32 dimension ~%int32 degree ~%float64[] knot ~%Point[] control ~%~%================================================================================~%MSG: hdmap_pb_msgs/Poly3~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'StopSign)))
  "Returns full string definition for message of type 'StopSign"
  (cl:format cl:nil "Id id ~%Curve stop_line ~%Point location ~%Id[] overlap_id ~%Id signal_id ~%~%================================================================================~%MSG: hdmap_pb_msgs/Id~%int8 id ~%~%================================================================================~%MSG: hdmap_pb_msgs/Curve~%CurveSegment[] segment ~%~%================================================================================~%MSG: hdmap_pb_msgs/CurveSegment~%LineSegment line_segment ~%Arc arc ~%Spiral spiral ~%Spline spline ~%Poly3 poly3 ~%float64 s ~%Point start_position ~%float64 heading ~%float64 length ~%~%================================================================================~%MSG: hdmap_pb_msgs/LineSegment~%Point[] point ~%~%================================================================================~%MSG: hdmap_pb_msgs/Point~%float64 x ~%float64 y ~%float64 z ~%~%================================================================================~%MSG: hdmap_pb_msgs/Arc~%Point center ~%float64 radius ~%float64 start_angle ~%float64 end_angle ~%~%================================================================================~%MSG: hdmap_pb_msgs/Spiral~%float64 curv_start ~%float64 curv_end ~%~%================================================================================~%MSG: hdmap_pb_msgs/Spline~%int32 dimension ~%int32 degree ~%float64[] knot ~%Point[] control ~%~%================================================================================~%MSG: hdmap_pb_msgs/Poly3~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <StopSign>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'id))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'stop_line))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'location))
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'overlap_id) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ (roslisp-msg-protocol:serialization-length ele))))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'signal_id))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <StopSign>))
  "Converts a ROS message object to a list"
  (cl:list 'StopSign
    (cl:cons ':id (id msg))
    (cl:cons ':stop_line (stop_line msg))
    (cl:cons ':location (location msg))
    (cl:cons ':overlap_id (overlap_id msg))
    (cl:cons ':signal_id (signal_id msg))
))
