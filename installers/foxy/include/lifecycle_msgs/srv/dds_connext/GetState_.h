

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GetState_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef GetState__271552917_h
#define GetState__271552917_h

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

            extern const char *GetState_Request_TYPENAME;

            struct GetState_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class GetState_Request_TypeSupport;
            class GetState_Request_DataWriter;
            class GetState_Request_DataReader;
            #endif

            class GetState_Request_ 
            {
              public:
                typedef struct GetState_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef GetState_Request_TypeSupport TypeSupport;
                typedef GetState_Request_DataWriter DataWriter;
                typedef GetState_Request_DataReader DataReader;
                #endif

                DDS_Octet   structure_needs_at_least_one_member_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* GetState_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(GetState_Request_Seq, GetState_Request_);

            NDDSUSERDllExport
            RTIBool GetState_Request__initialize(
                GetState_Request_* self);

            NDDSUSERDllExport
            RTIBool GetState_Request__initialize_ex(
                GetState_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool GetState_Request__initialize_w_params(
                GetState_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void GetState_Request__finalize(
                GetState_Request_* self);

            NDDSUSERDllExport
            void GetState_Request__finalize_ex(
                GetState_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void GetState_Request__finalize_w_params(
                GetState_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void GetState_Request__finalize_optional_members(
                GetState_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool GetState_Request__copy(
                GetState_Request_* dst,
                const GetState_Request_* src);

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

            extern const char *GetState_Response_TYPENAME;

            struct GetState_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class GetState_Response_TypeSupport;
            class GetState_Response_DataWriter;
            class GetState_Response_DataReader;
            #endif

            class GetState_Response_ 
            {
              public:
                typedef struct GetState_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef GetState_Response_TypeSupport TypeSupport;
                typedef GetState_Response_DataWriter DataWriter;
                typedef GetState_Response_DataReader DataReader;
                #endif

                lifecycle_msgs::msg::dds_::State_   current_state_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* GetState_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(GetState_Response_Seq, GetState_Response_);

            NDDSUSERDllExport
            RTIBool GetState_Response__initialize(
                GetState_Response_* self);

            NDDSUSERDllExport
            RTIBool GetState_Response__initialize_ex(
                GetState_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool GetState_Response__initialize_w_params(
                GetState_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void GetState_Response__finalize(
                GetState_Response_* self);

            NDDSUSERDllExport
            void GetState_Response__finalize_ex(
                GetState_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void GetState_Response__finalize_w_params(
                GetState_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void GetState_Response__finalize_optional_members(
                GetState_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool GetState_Response__copy(
                GetState_Response_* dst,
                const GetState_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace lifecycle_msgs  */

#endif /* GetState_ */

