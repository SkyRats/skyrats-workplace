

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ModelState_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef ModelState__1678448970_h
#define ModelState__1678448970_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "geometry_msgs/msg/dds_connext/Pose_.h"
#include "geometry_msgs/msg/dds_connext/Twist_.h"
namespace gazebo_msgs {
    namespace msg {
        namespace dds_ {

            extern const char *ModelState_TYPENAME;

            struct ModelState_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class ModelState_TypeSupport;
            class ModelState_DataWriter;
            class ModelState_DataReader;
            #endif

            class ModelState_ 
            {
              public:
                typedef struct ModelState_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef ModelState_TypeSupport TypeSupport;
                typedef ModelState_DataWriter DataWriter;
                typedef ModelState_DataReader DataReader;
                #endif

                DDS_Char *   model_name_ ;
                geometry_msgs::msg::dds_::Pose_   pose_ ;
                geometry_msgs::msg::dds_::Twist_   twist_ ;
                DDS_Char *   reference_frame_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* ModelState__get_typecode(void); /* Type code */

            DDS_SEQUENCE(ModelState_Seq, ModelState_);

            NDDSUSERDllExport
            RTIBool ModelState__initialize(
                ModelState_* self);

            NDDSUSERDllExport
            RTIBool ModelState__initialize_ex(
                ModelState_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool ModelState__initialize_w_params(
                ModelState_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void ModelState__finalize(
                ModelState_* self);

            NDDSUSERDllExport
            void ModelState__finalize_ex(
                ModelState_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void ModelState__finalize_w_params(
                ModelState_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void ModelState__finalize_optional_members(
                ModelState_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool ModelState__copy(
                ModelState_* dst,
                const ModelState_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace gazebo_msgs  */

#endif /* ModelState_ */

