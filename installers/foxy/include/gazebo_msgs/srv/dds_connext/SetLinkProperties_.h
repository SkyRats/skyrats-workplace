

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from SetLinkProperties_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef SetLinkProperties__1778971474_h
#define SetLinkProperties__1778971474_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "geometry_msgs/msg/dds_connext/Pose_.h"
namespace gazebo_msgs {
    namespace srv {
        namespace dds_ {

            extern const char *SetLinkProperties_Request_TYPENAME;

            struct SetLinkProperties_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class SetLinkProperties_Request_TypeSupport;
            class SetLinkProperties_Request_DataWriter;
            class SetLinkProperties_Request_DataReader;
            #endif

            class SetLinkProperties_Request_ 
            {
              public:
                typedef struct SetLinkProperties_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef SetLinkProperties_Request_TypeSupport TypeSupport;
                typedef SetLinkProperties_Request_DataWriter DataWriter;
                typedef SetLinkProperties_Request_DataReader DataReader;
                #endif

                DDS_Char *   link_name_ ;
                geometry_msgs::msg::dds_::Pose_   com_ ;
                DDS_Boolean   gravity_mode_ ;
                DDS_Double   mass_ ;
                DDS_Double   ixx_ ;
                DDS_Double   ixy_ ;
                DDS_Double   ixz_ ;
                DDS_Double   iyy_ ;
                DDS_Double   iyz_ ;
                DDS_Double   izz_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* SetLinkProperties_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(SetLinkProperties_Request_Seq, SetLinkProperties_Request_);

            NDDSUSERDllExport
            RTIBool SetLinkProperties_Request__initialize(
                SetLinkProperties_Request_* self);

            NDDSUSERDllExport
            RTIBool SetLinkProperties_Request__initialize_ex(
                SetLinkProperties_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool SetLinkProperties_Request__initialize_w_params(
                SetLinkProperties_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void SetLinkProperties_Request__finalize(
                SetLinkProperties_Request_* self);

            NDDSUSERDllExport
            void SetLinkProperties_Request__finalize_ex(
                SetLinkProperties_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void SetLinkProperties_Request__finalize_w_params(
                SetLinkProperties_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void SetLinkProperties_Request__finalize_optional_members(
                SetLinkProperties_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool SetLinkProperties_Request__copy(
                SetLinkProperties_Request_* dst,
                const SetLinkProperties_Request_* src);

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

            extern const char *SetLinkProperties_Response_TYPENAME;

            struct SetLinkProperties_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class SetLinkProperties_Response_TypeSupport;
            class SetLinkProperties_Response_DataWriter;
            class SetLinkProperties_Response_DataReader;
            #endif

            class SetLinkProperties_Response_ 
            {
              public:
                typedef struct SetLinkProperties_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef SetLinkProperties_Response_TypeSupport TypeSupport;
                typedef SetLinkProperties_Response_DataWriter DataWriter;
                typedef SetLinkProperties_Response_DataReader DataReader;
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

            NDDSUSERDllExport DDS_TypeCode* SetLinkProperties_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(SetLinkProperties_Response_Seq, SetLinkProperties_Response_);

            NDDSUSERDllExport
            RTIBool SetLinkProperties_Response__initialize(
                SetLinkProperties_Response_* self);

            NDDSUSERDllExport
            RTIBool SetLinkProperties_Response__initialize_ex(
                SetLinkProperties_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool SetLinkProperties_Response__initialize_w_params(
                SetLinkProperties_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void SetLinkProperties_Response__finalize(
                SetLinkProperties_Response_* self);

            NDDSUSERDllExport
            void SetLinkProperties_Response__finalize_ex(
                SetLinkProperties_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void SetLinkProperties_Response__finalize_w_params(
                SetLinkProperties_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void SetLinkProperties_Response__finalize_optional_members(
                SetLinkProperties_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool SetLinkProperties_Response__copy(
                SetLinkProperties_Response_* dst,
                const SetLinkProperties_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace gazebo_msgs  */

#endif /* SetLinkProperties_ */

