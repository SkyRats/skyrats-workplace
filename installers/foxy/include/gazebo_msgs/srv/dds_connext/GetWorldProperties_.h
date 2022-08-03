

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GetWorldProperties_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef GetWorldProperties__1507610873_h
#define GetWorldProperties__1507610873_h

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

            extern const char *GetWorldProperties_Request_TYPENAME;

            struct GetWorldProperties_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class GetWorldProperties_Request_TypeSupport;
            class GetWorldProperties_Request_DataWriter;
            class GetWorldProperties_Request_DataReader;
            #endif

            class GetWorldProperties_Request_ 
            {
              public:
                typedef struct GetWorldProperties_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef GetWorldProperties_Request_TypeSupport TypeSupport;
                typedef GetWorldProperties_Request_DataWriter DataWriter;
                typedef GetWorldProperties_Request_DataReader DataReader;
                #endif

                DDS_Octet   structure_needs_at_least_one_member_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* GetWorldProperties_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(GetWorldProperties_Request_Seq, GetWorldProperties_Request_);

            NDDSUSERDllExport
            RTIBool GetWorldProperties_Request__initialize(
                GetWorldProperties_Request_* self);

            NDDSUSERDllExport
            RTIBool GetWorldProperties_Request__initialize_ex(
                GetWorldProperties_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool GetWorldProperties_Request__initialize_w_params(
                GetWorldProperties_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void GetWorldProperties_Request__finalize(
                GetWorldProperties_Request_* self);

            NDDSUSERDllExport
            void GetWorldProperties_Request__finalize_ex(
                GetWorldProperties_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void GetWorldProperties_Request__finalize_w_params(
                GetWorldProperties_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void GetWorldProperties_Request__finalize_optional_members(
                GetWorldProperties_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool GetWorldProperties_Request__copy(
                GetWorldProperties_Request_* dst,
                const GetWorldProperties_Request_* src);

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

            extern const char *GetWorldProperties_Response_TYPENAME;

            struct GetWorldProperties_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class GetWorldProperties_Response_TypeSupport;
            class GetWorldProperties_Response_DataWriter;
            class GetWorldProperties_Response_DataReader;
            #endif

            class GetWorldProperties_Response_ 
            {
              public:
                typedef struct GetWorldProperties_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef GetWorldProperties_Response_TypeSupport TypeSupport;
                typedef GetWorldProperties_Response_DataWriter DataWriter;
                typedef GetWorldProperties_Response_DataReader DataReader;
                #endif

                DDS_Double   sim_time_ ;
                DDS_StringSeq  model_names_ ;
                DDS_Boolean   rendering_enabled_ ;
                DDS_Boolean   success_ ;
                DDS_Char *   status_message_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* GetWorldProperties_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(GetWorldProperties_Response_Seq, GetWorldProperties_Response_);

            NDDSUSERDllExport
            RTIBool GetWorldProperties_Response__initialize(
                GetWorldProperties_Response_* self);

            NDDSUSERDllExport
            RTIBool GetWorldProperties_Response__initialize_ex(
                GetWorldProperties_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool GetWorldProperties_Response__initialize_w_params(
                GetWorldProperties_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void GetWorldProperties_Response__finalize(
                GetWorldProperties_Response_* self);

            NDDSUSERDllExport
            void GetWorldProperties_Response__finalize_ex(
                GetWorldProperties_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void GetWorldProperties_Response__finalize_w_params(
                GetWorldProperties_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void GetWorldProperties_Response__finalize_optional_members(
                GetWorldProperties_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool GetWorldProperties_Response__copy(
                GetWorldProperties_Response_* dst,
                const GetWorldProperties_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace gazebo_msgs  */

#endif /* GetWorldProperties_ */

