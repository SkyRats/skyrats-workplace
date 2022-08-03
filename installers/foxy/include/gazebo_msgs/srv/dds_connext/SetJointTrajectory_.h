

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from SetJointTrajectory_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef SetJointTrajectory__381080328_h
#define SetJointTrajectory__381080328_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "geometry_msgs/msg/dds_connext/Pose_.h"
#include "trajectory_msgs/msg/dds_connext/JointTrajectory_.h"
namespace gazebo_msgs {
    namespace srv {
        namespace dds_ {

            extern const char *SetJointTrajectory_Request_TYPENAME;

            struct SetJointTrajectory_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class SetJointTrajectory_Request_TypeSupport;
            class SetJointTrajectory_Request_DataWriter;
            class SetJointTrajectory_Request_DataReader;
            #endif

            class SetJointTrajectory_Request_ 
            {
              public:
                typedef struct SetJointTrajectory_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef SetJointTrajectory_Request_TypeSupport TypeSupport;
                typedef SetJointTrajectory_Request_DataWriter DataWriter;
                typedef SetJointTrajectory_Request_DataReader DataReader;
                #endif

                DDS_Char *   model_name_ ;
                trajectory_msgs::msg::dds_::JointTrajectory_   joint_trajectory_ ;
                geometry_msgs::msg::dds_::Pose_   model_pose_ ;
                DDS_Boolean   set_model_pose_ ;
                DDS_Boolean   disable_physics_updates_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* SetJointTrajectory_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(SetJointTrajectory_Request_Seq, SetJointTrajectory_Request_);

            NDDSUSERDllExport
            RTIBool SetJointTrajectory_Request__initialize(
                SetJointTrajectory_Request_* self);

            NDDSUSERDllExport
            RTIBool SetJointTrajectory_Request__initialize_ex(
                SetJointTrajectory_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool SetJointTrajectory_Request__initialize_w_params(
                SetJointTrajectory_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void SetJointTrajectory_Request__finalize(
                SetJointTrajectory_Request_* self);

            NDDSUSERDllExport
            void SetJointTrajectory_Request__finalize_ex(
                SetJointTrajectory_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void SetJointTrajectory_Request__finalize_w_params(
                SetJointTrajectory_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void SetJointTrajectory_Request__finalize_optional_members(
                SetJointTrajectory_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool SetJointTrajectory_Request__copy(
                SetJointTrajectory_Request_* dst,
                const SetJointTrajectory_Request_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace gazebo_msgs  */
namespace gazebo_msgs {
    namespace srv {
        namespace dds_ {

            extern const char *SetJointTrajectory_Response_TYPENAME;

            struct SetJointTrajectory_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class SetJointTrajectory_Response_TypeSupport;
            class SetJointTrajectory_Response_DataWriter;
            class SetJointTrajectory_Response_DataReader;
            #endif

            class SetJointTrajectory_Response_ 
            {
              public:
                typedef struct SetJointTrajectory_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef SetJointTrajectory_Response_TypeSupport TypeSupport;
                typedef SetJointTrajectory_Response_DataWriter DataWriter;
                typedef SetJointTrajectory_Response_DataReader DataReader;
                #endif

                DDS_Boolean   success_ ;
                DDS_Char *   status_message_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* SetJointTrajectory_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(SetJointTrajectory_Response_Seq, SetJointTrajectory_Response_);

            NDDSUSERDllExport
            RTIBool SetJointTrajectory_Response__initialize(
                SetJointTrajectory_Response_* self);

            NDDSUSERDllExport
            RTIBool SetJointTrajectory_Response__initialize_ex(
                SetJointTrajectory_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool SetJointTrajectory_Response__initialize_w_params(
                SetJointTrajectory_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void SetJointTrajectory_Response__finalize(
                SetJointTrajectory_Response_* self);

            NDDSUSERDllExport
            void SetJointTrajectory_Response__finalize_ex(
                SetJointTrajectory_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void SetJointTrajectory_Response__finalize_w_params(
                SetJointTrajectory_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void SetJointTrajectory_Response__finalize_optional_members(
                SetJointTrajectory_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool SetJointTrajectory_Response__copy(
                SetJointTrajectory_Response_* dst,
                const SetJointTrajectory_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace gazebo_msgs  */

#endif /* SetJointTrajectory_ */

