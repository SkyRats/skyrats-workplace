

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GetModelProperties_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef GetModelProperties__1702457580_h
#define GetModelProperties__1702457580_h

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

            extern const char *GetModelProperties_Request_TYPENAME;

            struct GetModelProperties_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class GetModelProperties_Request_TypeSupport;
            class GetModelProperties_Request_DataWriter;
            class GetModelProperties_Request_DataReader;
            #endif

            class GetModelProperties_Request_ 
            {
              public:
                typedef struct GetModelProperties_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef GetModelProperties_Request_TypeSupport TypeSupport;
                typedef GetModelProperties_Request_DataWriter DataWriter;
                typedef GetModelProperties_Request_DataReader DataReader;
                #endif

                DDS_Char *   model_name_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* GetModelProperties_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(GetModelProperties_Request_Seq, GetModelProperties_Request_);

            NDDSUSERDllExport
            RTIBool GetModelProperties_Request__initialize(
                GetModelProperties_Request_* self);

            NDDSUSERDllExport
            RTIBool GetModelProperties_Request__initialize_ex(
                GetModelProperties_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool GetModelProperties_Request__initialize_w_params(
                GetModelProperties_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void GetModelProperties_Request__finalize(
                GetModelProperties_Request_* self);

            NDDSUSERDllExport
            void GetModelProperties_Request__finalize_ex(
                GetModelProperties_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void GetModelProperties_Request__finalize_w_params(
                GetModelProperties_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void GetModelProperties_Request__finalize_optional_members(
                GetModelProperties_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool GetModelProperties_Request__copy(
                GetModelProperties_Request_* dst,
                const GetModelProperties_Request_* src);

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

            extern const char *GetModelProperties_Response_TYPENAME;

            struct GetModelProperties_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class GetModelProperties_Response_TypeSupport;
            class GetModelProperties_Response_DataWriter;
            class GetModelProperties_Response_DataReader;
            #endif

            class GetModelProperties_Response_ 
            {
              public:
                typedef struct GetModelProperties_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef GetModelProperties_Response_TypeSupport TypeSupport;
                typedef GetModelProperties_Response_DataWriter DataWriter;
                typedef GetModelProperties_Response_DataReader DataReader;
                #endif

                DDS_Char *   parent_model_name_ ;
                DDS_Char *   canonical_body_name_ ;
                DDS_StringSeq  body_names_ ;
                DDS_StringSeq  geom_names_ ;
                DDS_StringSeq  joint_names_ ;
                DDS_StringSeq  child_model_names_ ;
                DDS_Boolean   is_static_ ;
                DDS_Boolean   success_ ;
                DDS_Char *   status_message_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* GetModelProperties_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(GetModelProperties_Response_Seq, GetModelProperties_Response_);

            NDDSUSERDllExport
            RTIBool GetModelProperties_Response__initialize(
                GetModelProperties_Response_* self);

            NDDSUSERDllExport
            RTIBool GetModelProperties_Response__initialize_ex(
                GetModelProperties_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool GetModelProperties_Response__initialize_w_params(
                GetModelProperties_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void GetModelProperties_Response__finalize(
                GetModelProperties_Response_* self);

            NDDSUSERDllExport
            void GetModelProperties_Response__finalize_ex(
                GetModelProperties_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void GetModelProperties_Response__finalize_w_params(
                GetModelProperties_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void GetModelProperties_Response__finalize_optional_members(
                GetModelProperties_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool GetModelProperties_Response__copy(
                GetModelProperties_Response_* dst,
                const GetModelProperties_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace gazebo_msgs  */

#endif /* GetModelProperties_ */

