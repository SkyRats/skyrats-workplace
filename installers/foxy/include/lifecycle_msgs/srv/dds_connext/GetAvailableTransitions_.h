

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GetAvailableTransitions_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef GetAvailableTransitions__2136232871_h
#define GetAvailableTransitions__2136232871_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "lifecycle_msgs/msg/dds_connext/TransitionDescription_.h"
namespace lifecycle_msgs {
    namespace srv {
        namespace dds_ {

            extern const char *GetAvailableTransitions_Request_TYPENAME;

            struct GetAvailableTransitions_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class GetAvailableTransitions_Request_TypeSupport;
            class GetAvailableTransitions_Request_DataWriter;
            class GetAvailableTransitions_Request_DataReader;
            #endif

            class GetAvailableTransitions_Request_ 
            {
              public:
                typedef struct GetAvailableTransitions_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef GetAvailableTransitions_Request_TypeSupport TypeSupport;
                typedef GetAvailableTransitions_Request_DataWriter DataWriter;
                typedef GetAvailableTransitions_Request_DataReader DataReader;
                #endif

                DDS_Octet   structure_needs_at_least_one_member_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* GetAvailableTransitions_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(GetAvailableTransitions_Request_Seq, GetAvailableTransitions_Request_);

            NDDSUSERDllExport
            RTIBool GetAvailableTransitions_Request__initialize(
                GetAvailableTransitions_Request_* self);

            NDDSUSERDllExport
            RTIBool GetAvailableTransitions_Request__initialize_ex(
                GetAvailableTransitions_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool GetAvailableTransitions_Request__initialize_w_params(
                GetAvailableTransitions_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void GetAvailableTransitions_Request__finalize(
                GetAvailableTransitions_Request_* self);

            NDDSUSERDllExport
            void GetAvailableTransitions_Request__finalize_ex(
                GetAvailableTransitions_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void GetAvailableTransitions_Request__finalize_w_params(
                GetAvailableTransitions_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void GetAvailableTransitions_Request__finalize_optional_members(
                GetAvailableTransitions_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool GetAvailableTransitions_Request__copy(
                GetAvailableTransitions_Request_* dst,
                const GetAvailableTransitions_Request_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace lifecycle_msgs  */
namespace lifecycle_msgs {
    namespace srv {
        namespace dds_ {

            extern const char *GetAvailableTransitions_Response_TYPENAME;

            struct GetAvailableTransitions_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class GetAvailableTransitions_Response_TypeSupport;
            class GetAvailableTransitions_Response_DataWriter;
            class GetAvailableTransitions_Response_DataReader;
            #endif

            class GetAvailableTransitions_Response_ 
            {
              public:
                typedef struct GetAvailableTransitions_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef GetAvailableTransitions_Response_TypeSupport TypeSupport;
                typedef GetAvailableTransitions_Response_DataWriter DataWriter;
                typedef GetAvailableTransitions_Response_DataReader DataReader;
                #endif

                lifecycle_msgs::msg::dds_::TransitionDescription_Seq  available_transitions_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* GetAvailableTransitions_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(GetAvailableTransitions_Response_Seq, GetAvailableTransitions_Response_);

            NDDSUSERDllExport
            RTIBool GetAvailableTransitions_Response__initialize(
                GetAvailableTransitions_Response_* self);

            NDDSUSERDllExport
            RTIBool GetAvailableTransitions_Response__initialize_ex(
                GetAvailableTransitions_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool GetAvailableTransitions_Response__initialize_w_params(
                GetAvailableTransitions_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void GetAvailableTransitions_Response__finalize(
                GetAvailableTransitions_Response_* self);

            NDDSUSERDllExport
            void GetAvailableTransitions_Response__finalize_ex(
                GetAvailableTransitions_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void GetAvailableTransitions_Response__finalize_w_params(
                GetAvailableTransitions_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void GetAvailableTransitions_Response__finalize_optional_members(
                GetAvailableTransitions_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool GetAvailableTransitions_Response__copy(
                GetAvailableTransitions_Response_* dst,
                const GetAvailableTransitions_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace lifecycle_msgs  */

#endif /* GetAvailableTransitions_ */

