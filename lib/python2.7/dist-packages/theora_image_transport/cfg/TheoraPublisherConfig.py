## *********************************************************
## 
## File autogenerated for the theora_image_transport package 
## by the dynamic_reconfigure package.
## Please do not edit.
## 
## ********************************************************/

from dynamic_reconfigure.encoding import extract_params

inf = float('inf')

config_description = {'upper': 'DEFAULT', 'lower': 'groups', 'srcline': 235, 'name': 'Default', 'parent': 0, 'srcfile': '/home/caros/ros/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'cstate': 'true', 'parentname': 'Default', 'class': 'DEFAULT', 'field': 'default', 'state': True, 'parentclass': '', 'groups': [], 'parameters': [{'srcline': 280, 'description': "Try to achieve either 'target_bitrate' or 'quality'", 'max': 1, 'cconsttype': 'const int', 'ctype': 'int', 'srcfile': '/home/caros/ros/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'optimize_for', 'edit_method': "{'enum_description': 'Enum to control whether optimizing for bitrate or quality', 'enum': [{'srcline': 9, 'description': 'Aim for requested bitrate', 'srcfile': '/home/scmbuild/workspaces_cluster/baidu.car-os.ros/baidu/car-os/ros/image_transport_plugins/theora_image_transport/cfg/TheoraPublisher.cfg', 'cconsttype': 'const int', 'value': 0, 'ctype': 'int', 'type': 'int', 'name': 'Bitrate'}, {'srcline': 10, 'description': 'Aim for requested quality', 'srcfile': '/home/scmbuild/workspaces_cluster/baidu.car-os.ros/baidu/car-os/ros/image_transport_plugins/theora_image_transport/cfg/TheoraPublisher.cfg', 'cconsttype': 'const int', 'value': 1, 'ctype': 'int', 'type': 'int', 'name': 'Quality'}]}", 'default': 1, 'level': 0, 'min': 0, 'type': 'int'}, {'srcline': 280, 'description': 'Target encoding bitrate, bits per second', 'max': 99200000, 'cconsttype': 'const int', 'ctype': 'int', 'srcfile': '/home/caros/ros/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'target_bitrate', 'edit_method': '', 'default': 800000, 'level': 0, 'min': 0, 'type': 'int'}, {'srcline': 280, 'description': 'Encoding quality', 'max': 63, 'cconsttype': 'const int', 'ctype': 'int', 'srcfile': '/home/caros/ros/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'quality', 'edit_method': '', 'default': 31, 'level': 0, 'min': 0, 'type': 'int'}, {'srcline': 280, 'description': 'Maximum distance between key frames', 'max': 64, 'cconsttype': 'const int', 'ctype': 'int', 'srcfile': '/home/caros/ros/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'keyframe_frequency', 'edit_method': '', 'default': 64, 'level': 0, 'min': 1, 'type': 'int'}], 'type': '', 'id': 0}

min = {}
max = {}
defaults = {}
level = {}
type = {}
all_level = 0

#def extract_params(config):
#    params = []
#    params.extend(config['parameters'])    
#    for group in config['groups']:
#        params.extend(extract_params(group))
#    return params

for param in extract_params(config_description):
    min[param['name']] = param['min']
    max[param['name']] = param['max']
    defaults[param['name']] = param['default']
    level[param['name']] = param['level']
    type[param['name']] = param['type']
    all_level = all_level | param['level']

TheoraPublisher_Bitrate = 0
TheoraPublisher_Quality = 1
