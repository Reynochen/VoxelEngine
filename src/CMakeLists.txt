# file(GLOB subdirs CONFIGURE_DEPENDS Graphics/*)

# foreach(subdir ${subdirs})
#     if(IS_DIRECTORY ${subdir} AND NOT ${subdir} MATCHES "include")
#         get_filename_component(component "${subdir}" NAME) #Get component name
        
#         get_filename_component(modulepath "${subdir}" PATH) #Get module path
#         get_filename_component(module "${modulepath}" NAME) #Get module name

#         add_subdirectory(${module}/${component})
#     endif()
# endforeach()

add_subdirectory(Graphics)