

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GetLinkState_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef GetLinkState__373814297_h
#define GetLinkState__373814297_h

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

            extern const char *GetLinkState_Request_TYPENAME;

            struct GetLinkState_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class GetLinkState_Request_TypeSupport;
            class GetLinkState_Request_DataWriter;
            class GetLinkState_Request_DataReader;
            #endif

            class GetLinkState_Request_ 
            {
              public:
                typedef struct GetLinkState_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef GetLinkState_Request_TypeSupport TypeSupport;
                typedef GetLinkState_Request_DataWriter DataWriter;
                typedef GetLinkState_Request_DataReader DataReader;
                #endif

                DDS_Char *   link_name_ ;
                DDS_Char *   reference_frame_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* GetLinkState_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(GetLinkState_Request_Seq, GetLinkState_Request_);

            NDDSUSERDllExport
            RTIBool GetLinkState_Request__initialize(
                GetLinkState_Request_* self);

            NDDSUSERDllExport
            RTIBool GetLinkState_Request__initialize_ex(
                GetLinkState_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool GetLinkState_Request__initialize_w_params(
                GetLinkState_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void GetLinkState_Request__finalize(
                GetLinkState_Request_* self);

            NDDSUSERDllExport
            void GetLinkState_Request__finalize_ex(
                GetLinkState_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void GetLinkState_Request__finalize_w_params(
                GetLinkState_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void GetLinkState_Request__finalize_optional_members(
                GetLinkState_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool GetLinkState_Request__copy(
                GetLinkState_Request_* dst,
                const GetLinkState_Request_* src);

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

            extern const char *GetLinkState_Response_TYPENAME;

            struct GetLinkState_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class GetLinkState_Response_TypeSupport;
            class GetLinkState_Response_DataWriter;
            class GetLinkState_Response_DataReader;
            #endif

            class GetLinkState_Response_ 
            {
              public:
                typedef struct GetLinkState_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef GetLinkState_Response_TypeSupport TypeSupport;
                typedef GetLinkState_Response_DataWriter DataWriter;
                typedef GetLinkState_Response_DataReader DataReader;
                #endif

                gazebo_msgs::msg::dds_::LinkState_   link_state_ ;
                DDS_Boolean   success_ ;
                DDS_Char *   status_message_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* GetLinkState_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(GetLinkState_Response_Seq, GetLinkState_Response_);

            NDDSUSERDllExport
            RTIBool GetLinkState_Response__initialize(
                GetLinkState_Response_* self);

            NDDSUSERDllExport
            RTIBool GetLinkState_Response__initialize_ex(
                GetLinkState_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool GetLinkState_Response__initialize_w_params(
                GetLinkState_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void GetLinkState_Response__finalize(
                GetLinkState_Response_* self);

            NDDSUSERDllExport
            void GetLinkState_Response__finalize_ex(
                GetLinkState_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void GetLinkState_Response__finalize_w_params(
                GetLinkState_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void GetLinkState_Response__finalize_optional_members(
                GetLinkState_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool GetLinkState_Response__copy(
                GetLinkState_Response_* dst,
                const GetLinkState_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace gazebo_msgs  */

#endif /* GetLinkState_ */

