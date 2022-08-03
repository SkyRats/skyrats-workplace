

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ModelStates_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef ModelStates__1108372430_h
#define ModelStates__1108372430_h

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

            extern const char *ModelStates_TYPENAME;

            struct ModelStates_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class ModelStates_TypeSupport;
            class ModelStates_DataWriter;
            class ModelStates_DataReader;
            #endif

            class ModelStates_ 
            {
              public:
                typedef struct ModelStates_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef ModelStates_TypeSupport TypeSupport;
                typedef ModelStates_DataWriter DataWriter;
                typedef ModelStates_DataReader DataReader;
                #endif

                DDS_StringSeq  name_ ;
                geometry_msgs::msg::dds_::Pose_Seq  pose_ ;
                geometry_msgs::msg::dds_::Twist_Seq  twist_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* ModelStates__get_typecode(void); /* Type code */

            DDS_SEQUENCE(ModelStates_Seq, ModelStates_);

            NDDSUSERDllExport
            RTIBool ModelStates__initialize(
                ModelStates_* self);

            NDDSUSERDllExport
            RTIBool ModelStates__initialize_ex(
                ModelStates_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool ModelStates__initialize_w_params(
                ModelStates_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void ModelStates__finalize(
                ModelStates_* self);

            NDDSUSERDllExport
            void ModelStates__finalize_ex(
                ModelStates_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void ModelStates__finalize_w_params(
                ModelStates_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void ModelStates__finalize_optional_members(
                ModelStates_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool ModelStates__copy(
                ModelStates_* dst,
                const ModelStates_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace gazebo_msgs  */

#endif /* ModelStates_ */

