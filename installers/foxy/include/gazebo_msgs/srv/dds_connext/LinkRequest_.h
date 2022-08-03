

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LinkRequest_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef LinkRequest__407460359_h
#define LinkRequest__407460359_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

namespace gazebo_msgs {
    namespace srv {
        namespace dds_ {

            extern const char *LinkRequest_Request_TYPENAME;

            struct LinkRequest_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class LinkRequest_Request_TypeSupport;
            class LinkRequest_Request_DataWriter;
            class LinkRequest_Request_DataReader;
            #endif

            class LinkRequest_Request_ 
            {
              public:
                typedef struct LinkRequest_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef LinkRequest_Request_TypeSupport TypeSupport;
                typedef LinkRequest_Request_DataWriter DataWriter;
                typedef LinkRequest_Request_DataReader DataReader;
                #endif

                DDS_Char *   link_name_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* LinkRequest_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(LinkRequest_Request_Seq, LinkRequest_Request_);

            NDDSUSERDllExport
            RTIBool LinkRequest_Request__initialize(
                LinkRequest_Request_* self);

            NDDSUSERDllExport
            RTIBool LinkRequest_Request__initialize_ex(
                LinkRequest_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool LinkRequest_Request__initialize_w_params(
                LinkRequest_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void LinkRequest_Request__finalize(
                LinkRequest_Request_* self);

            NDDSUSERDllExport
            void LinkRequest_Request__finalize_ex(
                LinkRequest_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void LinkRequest_Request__finalize_w_params(
                LinkRequest_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void LinkRequest_Request__finalize_optional_members(
                LinkRequest_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool LinkRequest_Request__copy(
                LinkRequest_Request_* dst,
                const LinkRequest_Request_* src);

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

            extern const char *LinkRequest_Response_TYPENAME;

            struct LinkRequest_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class LinkRequest_Response_TypeSupport;
            class LinkRequest_Response_DataWriter;
            class LinkRequest_Response_DataReader;
            #endif

            class LinkRequest_Response_ 
            {
              public:
                typedef struct LinkRequest_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef LinkRequest_Response_TypeSupport TypeSupport;
                typedef LinkRequest_Response_DataWriter DataWriter;
                typedef LinkRequest_Response_DataReader DataReader;
                #endif

                DDS_Octet   structure_needs_at_least_one_member_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* LinkRequest_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(LinkRequest_Response_Seq, LinkRequest_Response_);

            NDDSUSERDllExport
            RTIBool LinkRequest_Response__initialize(
                LinkRequest_Response_* self);

            NDDSUSERDllExport
            RTIBool LinkRequest_Response__initialize_ex(
                LinkRequest_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool LinkRequest_Response__initialize_w_params(
                LinkRequest_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void LinkRequest_Response__finalize(
                LinkRequest_Response_* self);

            NDDSUSERDllExport
            void LinkRequest_Response__finalize_ex(
                LinkRequest_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void LinkRequest_Response__finalize_w_params(
                LinkRequest_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void LinkRequest_Response__finalize_optional_members(
                LinkRequest_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool LinkRequest_Response__copy(
                LinkRequest_Response_* dst,
                const LinkRequest_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace gazebo_msgs  */

#endif /* LinkRequest_ */

