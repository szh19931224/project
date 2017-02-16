## *********************************************************
## 
## File autogenerated for the pcl_ros package 
## by the dynamic_reconfigure package.
## Please do not edit.
## 
## ********************************************************/

from dynamic_reconfigure.encoding import extract_params

inf = float('inf')

config_description = {'upper': 'DEFAULT', 'lower': 'groups', 'srcline': 235, 'name': 'Default', 'parent': 0, 'srcfile': '/home/scmbuild/workspaces_cluster.tmp/tmp.20161206.225249.22574/baidu/adu/ros/output/install/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'cstate': 'true', 'parentname': 'Default', 'class': 'DEFAULT', 'field': 'default', 'state': True, 'parentclass': '', 'groups': [], 'parameters': [{'srcline': 280, 'description': 'The field name used for filtering', 'max': '', 'cconsttype': 'const char * const', 'ctype': 'std::string', 'srcfile': '/home/scmbuild/workspaces_cluster.tmp/tmp.20161206.225249.22574/baidu/adu/ros/output/install/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'filter_field_name', 'edit_method': '', 'default': 'z', 'level': 0, 'min': '', 'type': 'str'}, {'srcline': 280, 'description': 'The minimum allowed field value a point will be considered from', 'max': 100000.0, 'cconsttype': 'const double', 'ctype': 'double', 'srcfile': '/home/scmbuild/workspaces_cluster.tmp/tmp.20161206.225249.22574/baidu/adu/ros/output/install/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'filter_limit_min', 'edit_method': '', 'default': 0.0, 'level': 0, 'min': -100000.0, 'type': 'double'}, {'srcline': 280, 'description': 'The maximum allowed field value a point will be considered from', 'max': 100000.0, 'cconsttype': 'const double', 'ctype': 'double', 'srcfile': '/home/scmbuild/workspaces_cluster.tmp/tmp.20161206.225249.22574/baidu/adu/ros/output/install/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'filter_limit_max', 'edit_method': '', 'default': 1.0, 'level': 0, 'min': -100000.0, 'type': 'double'}, {'srcline': 280, 'description': 'Set to true if we want to return the data outside [filter_limit_min; filter_limit_max].', 'max': True, 'cconsttype': 'const bool', 'ctype': 'bool', 'srcfile': '/home/scmbuild/workspaces_cluster.tmp/tmp.20161206.225249.22574/baidu/adu/ros/output/install/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'filter_limit_negative', 'edit_method': '', 'default': False, 'level': 0, 'min': False, 'type': 'bool'}, {'srcline': 280, 'description': 'Set whether the filtered points should be kept and set to NaN, or removed from the PointCloud, thus potentially breaking its organized structure.', 'max': True, 'cconsttype': 'const bool', 'ctype': 'bool', 'srcfile': '/home/scmbuild/workspaces_cluster.tmp/tmp.20161206.225249.22574/baidu/adu/ros/output/install/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'keep_organized', 'edit_method': '', 'default': False, 'level': 0, 'min': False, 'type': 'bool'}, {'srcline': 280, 'description': 'The input TF frame the data should be transformed into before processing, if input.header.frame_id is different.', 'max': '', 'cconsttype': 'const char * const', 'ctype': 'std::string', 'srcfile': '/home/scmbuild/workspaces_cluster.tmp/tmp.20161206.225249.22574/baidu/adu/ros/output/install/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'input_frame', 'edit_method': '', 'default': '', 'level': 0, 'min': '', 'type': 'str'}, {'srcline': 280, 'description': 'The output TF frame the data should be transformed into after processing, if input.header.frame_id is different.', 'max': '', 'cconsttype': 'const char * const', 'ctype': 'std::string', 'srcfile': '/home/scmbuild/workspaces_cluster.tmp/tmp.20161206.225249.22574/baidu/adu/ros/output/install/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'output_frame', 'edit_method': '', 'default': '', 'level': 0, 'min': '', 'type': 'str'}], 'type': '', 'id': 0}

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

