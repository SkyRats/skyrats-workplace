

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from SetLinkState_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef SetLinkState__1313967073_h
#define SetLinkState__1313967073_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "gazebo_msgs/msg/dds_connext/LinkState_.h"
namespace gazebo_msgs {
    namespace srv {
        namespace dds_ {

            extern const char *SetLinkState_Request_TYPENAME;

            struct SetLinkState_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class SetLinkState_Request_TypeSupport;
            class SetLinkState_Request_DataWriter;
            class SetLinkState_Request_DataReader;
            #endif

            class SetLinkState_Request_ 
            {
              public:
                typedef struct SetLinkState_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef SetLinkState_Request_TypeSupport TypeSupport;
                typedef SetLinkState_Request_DataWriter DataWriter;
                typedef SetLinkState_Request_DataReader DataReader;
                #endif

                gazebo_msgs::msg::dds_::LinkState_   link_state_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* SetLinkState_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(SetLinkState_Request_Seq, SetLinkState_Request_);

            NDDSUSERDllExport
            RTIBool SetLinkState_Request__initialize(
                SetLinkState_Request_* self);

            NDDSUSERDllExport
            RTIBool SetLinkState_Request__initialize_ex(
                SetLinkState_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool SetLinkState_Request__initialize_w_params(
                SetLinkState_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void SetLinkState_Request__finalize(
                SetLinkState_Request_* self);

            NDDSUSERDllExport
            void SetLinkState_Request__finalize_ex(
                SetLinkState_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void SetLinkState_Request__finalize_w_params(
                SetLinkState_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void SetLinkState_Request__finalize_optional_members(
                SetLinkState_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool SetLinkState_Request__copy(
                SetLinkState_Request_* dst,
                const SetLinkState_Request_* src);

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

            extern const char *SetLinkState_Response_TYPENAME;

            struct SetLinkState_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class SetLinkState_Response_TypeSupport;
            class SetLinkState_Response_DataWriter;
            class SetLinkState_Response_DataReader;
            #endif

            class SetLinkState_Response_ 
            {
              public:
                typedef struct SetLinkState_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef SetLinkState_Response_TypeSupport TypeSupport;
                typedef SetLinkState_Response_DataWriter DataWriter;
                typedef SetLinkState_Response_DataReader DataReader;
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

            NDDSUSERDllExport DDS_TypeCode* SetLinkState_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(SetLinkState_Response_Seq, SetLinkState_Response_);

            NDDSUSERDllExport
            RTIBool SetLinkState_Response__initialize(
                SetLinkState_Response_* self);

            NDDSUSERDllExport
            RTIBool SetLinkState_Response__initialize_ex(
                SetLinkState_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool SetLinkState_Response__initialize_w_params(
                SetLinkState_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void SetLinkState_Response__finalize(
                SetLinkState_Response_* self);

            NDDSUSERDllExport
            void SetLinkState_Response__finalize_ex(
                SetLinkState_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void SetLinkState_Response__finalize_w_params(
                SetLinkState_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void SetLinkState_Response__finalize_optional_members(
                SetLinkState_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool SetLinkState_Response__copy(
                SetLinkState_Response_* dst,
                const SetLinkState_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace gazebo_msgs  */

#endif /* SetLinkState_ */

