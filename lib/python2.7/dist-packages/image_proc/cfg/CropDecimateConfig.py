## *********************************************************
## 
## File autogenerated for the image_proc package 
## by the dynamic_reconfigure package.
## Please do not edit.
## 
## ********************************************************/

from dynamic_reconfigure.encoding import extract_params

inf = float('inf')

config_description = {'upper': 'DEFAULT', 'lower': 'groups', 'srcline': 235, 'name': 'Default', 'parent': 0, 'srcfile': '/home/scmbuild/workspaces_cluster/baidu.adu.ros/baidu/adu/ros/output/ros/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'cstate': 'true', 'parentname': 'Default', 'class': 'DEFAULT', 'field': 'default', 'state': True, 'parentclass': '', 'groups': [], 'parameters': [{'srcline': 280, 'description': 'Number of pixels to decimate to one horizontally', 'max': 16, 'cconsttype': 'const int', 'ctype': 'int', 'srcfile': '/home/scmbuild/workspaces_cluster/baidu.adu.ros/baidu/adu/ros/output/ros/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'decimation_x', 'edit_method': '', 'default': 1, 'level': 0, 'min': 1, 'type': 'int'}, {'srcline': 280, 'description': 'Number of pixels to decimate to one vertically', 'max': 16, 'cconsttype': 'const int', 'ctype': 'int', 'srcfile': '/home/scmbuild/workspaces_cluster/baidu.adu.ros/baidu/adu/ros/output/ros/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'decimation_y', 'edit_method': '', 'default': 1, 'level': 0, 'min': 1, 'type': 'int'}, {'srcline': 280, 'description': 'X offset of the region of interest', 'max': 2447, 'cconsttype': 'const int', 'ctype': 'int', 'srcfile': '/home/scmbuild/workspaces_cluster/baidu.adu.ros/baidu/adu/ros/output/ros/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'x_offset', 'edit_method': '', 'default': 0, 'level': 0, 'min': 0, 'type': 'int'}, {'srcline': 280, 'description': 'Y offset of the region of interest', 'max': 2049, 'cconsttype': 'const int', 'ctype': 'int', 'srcfile': '/home/scmbuild/workspaces_cluster/baidu.adu.ros/baidu/adu/ros/output/ros/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'y_offset', 'edit_method': '', 'default': 0, 'level': 0, 'min': 0, 'type': 'int'}, {'srcline': 280, 'description': 'Width of the region of interest', 'max': 2448, 'cconsttype': 'const int', 'ctype': 'int', 'srcfile': '/home/scmbuild/workspaces_cluster/baidu.adu.ros/baidu/adu/ros/output/ros/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'width', 'edit_method': '', 'default': 0, 'level': 0, 'min': 0, 'type': 'int'}, {'srcline': 280, 'description': 'Height of the region of interest', 'max': 2050, 'cconsttype': 'const int', 'ctype': 'int', 'srcfile': '/home/scmbuild/workspaces_cluster/baidu.adu.ros/baidu/adu/ros/output/ros/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'height', 'edit_method': '', 'default': 0, 'level': 0, 'min': 0, 'type': 'int'}, {'srcline': 280, 'description': 'Sampling algorithm', 'max': 4, 'cconsttype': 'const int', 'ctype': 'int', 'srcfile': '/home/scmbuild/workspaces_cluster/baidu.adu.ros/baidu/adu/ros/output/ros/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py', 'name': 'interpolation', 'edit_method': "{'enum_description': 'interpolation type', 'enum': [{'srcline': 21, 'description': 'Nearest-neighbor sampling', 'srcfile': '/home/scmbuild/workspaces_cluster/baidu.adu.ros/baidu/adu/ros/image_pipeline/image_proc/cfg/CropDecimate.cfg', 'cconsttype': 'const int', 'value': 0, 'ctype': 'int', 'type': 'int', 'name': 'NN'}, {'srcline': 22, 'description': 'Bilinear interpolation', 'srcfile': '/home/scmbuild/workspaces_cluster/baidu.adu.ros/baidu/adu/ros/image_pipeline/image_proc/cfg/CropDecimate.cfg', 'cconsttype': 'const int', 'value': 1, 'ctype': 'int', 'type': 'int', 'name': 'Linear'}, {'srcline': 23, 'description': 'Bicubic interpolation over 4x4 neighborhood', 'srcfile': '/home/scmbuild/workspaces_cluster/baidu.adu.ros/baidu/adu/ros/image_pipeline/image_proc/cfg/CropDecimate.cfg', 'cconsttype': 'const int', 'value': 2, 'ctype': 'int', 'type': 'int', 'name': 'Cubic'}, {'srcline': 24, 'description': 'Resampling using pixel area relation', 'srcfile': '/home/scmbuild/workspaces_cluster/baidu.adu.ros/baidu/adu/ros/image_pipeline/image_proc/cfg/CropDecimate.cfg', 'cconsttype': 'const int', 'value': 3, 'ctype': 'int', 'type': 'int', 'name': 'Area'}, {'srcline': 25, 'description': 'Lanczos interpolation over 8x8 neighborhood', 'srcfile': '/home/scmbuild/workspaces_cluster/baidu.adu.ros/baidu/adu/ros/image_pipeline/image_proc/cfg/CropDecimate.cfg', 'cconsttype': 'const int', 'value': 4, 'ctype': 'int', 'type': 'int', 'name': 'Lanczos4'}]}", 'default': 0, 'level': 0, 'min': 0, 'type': 'int'}], 'type': '', 'id': 0}

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

CropDecimate_NN = 0
CropDecimate_Linear = 1
CropDecimate_Cubic = 2
CropDecimate_Area = 3
CropDecimate_Lanczos4 = 4
