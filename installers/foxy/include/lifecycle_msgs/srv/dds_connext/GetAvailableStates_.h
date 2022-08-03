

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GetAvailableStates_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef GetAvailableStates__1105255854_h
#define GetAvailableStates__1105255854_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "lifecycle_msgs/msg/dds_connext/State_.h"
namespace lifecycle_msgs {
    namespace srv {
        namespace dds_ {

            extern const char *GetAvailableStates_Request_TYPENAME;

            struct GetAvailableStates_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class GetAvailableStates_Request_TypeSupport;
            class GetAvailableStates_Request_DataWriter;
            class GetAvailableStates_Request_DataReader;
            #endif

            class GetAvailableStates_Request_ 
            {
              public:
                typedef struct GetAvailableStates_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef GetAvailableStates_Request_TypeSupport TypeSupport;
                typedef GetAvailableStates_Request_DataWriter DataWriter;
                typedef GetAvailableStates_Request_DataReader DataReader;
                #endif

                DDS_Octet   structure_needs_at_least_one_member_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* GetAvailableStates_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(GetAvailableStates_Request_Seq, GetAvailableStates_Request_);

            NDDSUSERDllExport
            RTIBool GetAvailableStates_Request__initialize(
                GetAvailableStates_Request_* self);

            NDDSUSERDllExport
            RTIBool GetAvailableStates_Request__initialize_ex(
                GetAvailableStates_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool GetAvailableStates_Request__initialize_w_params(
                GetAvailableStates_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void GetAvailableStates_Request__finalize(
                GetAvailableStates_Request_* self);

            NDDSUSERDllExport
            void GetAvailableStates_Request__finalize_ex(
                GetAvailableStates_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void GetAvailableStates_Request__finalize_w_params(
                GetAvailableStates_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void GetAvailableStates_Request__finalize_optional_members(
                GetAvailableStates_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool GetAvailableStates_Request__copy(
                GetAvailableStates_Request_* dst,
                const GetAvailableStates_Request_* src);

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

            extern const char *GetAvailableStates_Response_TYPENAME;

            struct GetAvailableStates_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class GetAvailableStates_Response_TypeSupport;
            class GetAvailableStates_Response_DataWriter;
            class GetAvailableStates_Response_DataReader;
            #endif

            class GetAvailableStates_Response_ 
            {
              public:
                typedef struct GetAvailableStates_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef GetAvailableStates_Response_TypeSupport TypeSupport;
                typedef GetAvailableStates_Response_DataWriter DataWriter;
                typedef GetAvailableStates_Response_DataReader DataReader;
                #endif

                lifecycle_msgs::msg::dds_::State_Seq  available_states_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* GetAvailableStates_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(GetAvailableStates_Response_Seq, GetAvailableStates_Response_);

            NDDSUSERDllExport
            RTIBool GetAvailableStates_Response__initialize(
                GetAvailableStates_Response_* self);

            NDDSUSERDllExport
            RTIBool GetAvailableStates_Response__initialize_ex(
                GetAvailableStates_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool GetAvailableStates_Response__initialize_w_params(
                GetAvailableStates_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void GetAvailableStates_Response__finalize(
                GetAvailableStates_Response_* self);

            NDDSUSERDllExport
            void GetAvailableStates_Response__finalize_ex(
                GetAvailableStates_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void GetAvailableStates_Response__finalize_w_params(
                GetAvailableStates_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void GetAvailableStates_Response__finalize_optional_members(
                GetAvailableStates_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool GetAvailableStates_Response__copy(
                GetAvailableStates_Response_* dst,
                const GetAvailableStates_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace lifecycle_msgs  */

#endif /* GetAvailableStates_ */

