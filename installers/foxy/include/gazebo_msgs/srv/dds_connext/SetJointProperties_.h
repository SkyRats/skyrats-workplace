

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from SetJointProperties_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef SetJointProperties__498582167_h
#define SetJointProperties__498582167_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "gazebo_msgs/msg/dds_connext/ODEJointProperties_.h"
namespace gazebo_msgs {
    namespace srv {
        namespace dds_ {

            extern const char *SetJointProperties_Request_TYPENAME;

            struct SetJointProperties_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class SetJointProperties_Request_TypeSupport;
            class SetJointProperties_Request_DataWriter;
            class SetJointProperties_Request_DataReader;
            #endif

            class SetJointProperties_Request_ 
            {
              public:
                typedef struct SetJointProperties_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef SetJointProperties_Request_TypeSupport TypeSupport;
                typedef SetJointProperties_Request_DataWriter DataWriter;
                typedef SetJointProperties_Request_DataReader DataReader;
                #endif

                DDS_Char *   joint_name_ ;
                gazebo_msgs::msg::dds_::ODEJointProperties_   ode_joint_config_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* SetJointProperties_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(SetJointProperties_Request_Seq, SetJointProperties_Request_);

            NDDSUSERDllExport
            RTIBool SetJointProperties_Request__initialize(
                SetJointProperties_Request_* self);

            NDDSUSERDllExport
            RTIBool SetJointProperties_Request__initialize_ex(
                SetJointProperties_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool SetJointProperties_Request__initialize_w_params(
                SetJointProperties_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void SetJointProperties_Request__finalize(
                SetJointProperties_Request_* self);

            NDDSUSERDllExport
            void SetJointProperties_Request__finalize_ex(
                SetJointProperties_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void SetJointProperties_Request__finalize_w_params(
                SetJointProperties_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void SetJointProperties_Request__finalize_optional_members(
                SetJointProperties_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool SetJointProperties_Request__copy(
                SetJointProperties_Request_* dst,
                const SetJointProperties_Request_* src);

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

            extern const char *SetJointProperties_Response_TYPENAME;

            struct SetJointProperties_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class SetJointProperties_Response_TypeSupport;
            class SetJointProperties_Response_DataWriter;
            class SetJointProperties_Response_DataReader;
            #endif

            class SetJointProperties_Response_ 
            {
              public:
                typedef struct SetJointProperties_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef SetJointProperties_Response_TypeSupport TypeSupport;
                typedef SetJointProperties_Response_DataWriter DataWriter;
                typedef SetJointProperties_Response_DataReader DataReader;
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

            NDDSUSERDllExport DDS_TypeCode* SetJointProperties_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(SetJointProperties_Response_Seq, SetJointProperties_Response_);

            NDDSUSERDllExport
            RTIBool SetJointProperties_Response__initialize(
                SetJointProperties_Response_* self);

            NDDSUSERDllExport
            RTIBool SetJointProperties_Response__initialize_ex(
                SetJointProperties_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool SetJointProperties_Response__initialize_w_params(
                SetJointProperties_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void SetJointProperties_Response__finalize(
                SetJointProperties_Response_* self);

            NDDSUSERDllExport
            void SetJointProperties_Response__finalize_ex(
                SetJointProperties_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void SetJointProperties_Response__finalize_w_params(
                SetJointProperties_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void SetJointProperties_Response__finalize_optional_members(
                SetJointProperties_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool SetJointProperties_Response__copy(
                SetJointProperties_Response_* dst,
                const SetJointProperties_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace gazebo_msgs  */

#endif /* SetJointProperties_ */

