

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from BodyRequest_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef BodyRequest__1806235913_h
#define BodyRequest__1806235913_h

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

            extern const char *BodyRequest_Request_TYPENAME;

            struct BodyRequest_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class BodyRequest_Request_TypeSupport;
            class BodyRequest_Request_DataWriter;
            class BodyRequest_Request_DataReader;
            #endif

            class BodyRequest_Request_ 
            {
              public:
                typedef struct BodyRequest_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef BodyRequest_Request_TypeSupport TypeSupport;
                typedef BodyRequest_Request_DataWriter DataWriter;
                typedef BodyRequest_Request_DataReader DataReader;
                #endif

                DDS_Char *   body_name_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* BodyRequest_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(BodyRequest_Request_Seq, BodyRequest_Request_);

            NDDSUSERDllExport
            RTIBool BodyRequest_Request__initialize(
                BodyRequest_Request_* self);

            NDDSUSERDllExport
            RTIBool BodyRequest_Request__initialize_ex(
                BodyRequest_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool BodyRequest_Request__initialize_w_params(
                BodyRequest_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void BodyRequest_Request__finalize(
                BodyRequest_Request_* self);

            NDDSUSERDllExport
            void BodyRequest_Request__finalize_ex(
                BodyRequest_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void BodyRequest_Request__finalize_w_params(
                BodyRequest_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void BodyRequest_Request__finalize_optional_members(
                BodyRequest_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool BodyRequest_Request__copy(
                BodyRequest_Request_* dst,
                const BodyRequest_Request_* src);

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

            extern const char *BodyRequest_Response_TYPENAME;

            struct BodyRequest_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class BodyRequest_Response_TypeSupport;
            class BodyRequest_Response_DataWriter;
            class BodyRequest_Response_DataReader;
            #endif

            class BodyRequest_Response_ 
            {
              public:
                typedef struct BodyRequest_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef BodyRequest_Response_TypeSupport TypeSupport;
                typedef BodyRequest_Response_DataWriter DataWriter;
                typedef BodyRequest_Response_DataReader DataReader;
                #endif

                DDS_Octet   structure_needs_at_least_one_member_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* BodyRequest_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(BodyRequest_Response_Seq, BodyRequest_Response_);

            NDDSUSERDllExport
            RTIBool BodyRequest_Response__initialize(
                BodyRequest_Response_* self);

            NDDSUSERDllExport
            RTIBool BodyRequest_Response__initialize_ex(
                BodyRequest_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool BodyRequest_Response__initialize_w_params(
                BodyRequest_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void BodyRequest_Response__finalize(
                BodyRequest_Response_* self);

            NDDSUSERDllExport
            void BodyRequest_Response__finalize_ex(
                BodyRequest_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void BodyRequest_Response__finalize_w_params(
                BodyRequest_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void BodyRequest_Response__finalize_optional_members(
                BodyRequest_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool BodyRequest_Response__copy(
                BodyRequest_Response_* dst,
                const BodyRequest_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace gazebo_msgs  */

#endif /* BodyRequest_ */

