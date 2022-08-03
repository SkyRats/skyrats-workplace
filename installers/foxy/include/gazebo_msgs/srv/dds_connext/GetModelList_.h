

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GetModelList_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef GetModelList__1821502883_h
#define GetModelList__1821502883_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "std_msgs/msg/dds_connext/Header_.h"
namespace gazebo_msgs {
    namespace srv {
        namespace dds_ {

            extern const char *GetModelList_Request_TYPENAME;

            struct GetModelList_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class GetModelList_Request_TypeSupport;
            class GetModelList_Request_DataWriter;
            class GetModelList_Request_DataReader;
            #endif

            class GetModelList_Request_ 
            {
              public:
                typedef struct GetModelList_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef GetModelList_Request_TypeSupport TypeSupport;
                typedef GetModelList_Request_DataWriter DataWriter;
                typedef GetModelList_Request_DataReader DataReader;
                #endif

                DDS_Octet   structure_needs_at_least_one_member_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* GetModelList_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(GetModelList_Request_Seq, GetModelList_Request_);

            NDDSUSERDllExport
            RTIBool GetModelList_Request__initialize(
                GetModelList_Request_* self);

            NDDSUSERDllExport
            RTIBool GetModelList_Request__initialize_ex(
                GetModelList_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool GetModelList_Request__initialize_w_params(
                GetModelList_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void GetModelList_Request__finalize(
                GetModelList_Request_* self);

            NDDSUSERDllExport
            void GetModelList_Request__finalize_ex(
                GetModelList_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void GetModelList_Request__finalize_w_params(
                GetModelList_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void GetModelList_Request__finalize_optional_members(
                GetModelList_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool GetModelList_Request__copy(
                GetModelList_Request_* dst,
                const GetModelList_Request_* src);

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

            extern const char *GetModelList_Response_TYPENAME;

            struct GetModelList_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class GetModelList_Response_TypeSupport;
            class GetModelList_Response_DataWriter;
            class GetModelList_Response_DataReader;
            #endif

            class GetModelList_Response_ 
            {
              public:
                typedef struct GetModelList_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef GetModelList_Response_TypeSupport TypeSupport;
                typedef GetModelList_Response_DataWriter DataWriter;
                typedef GetModelList_Response_DataReader DataReader;
                #endif

                std_msgs::msg::dds_::Header_   header_ ;
                DDS_StringSeq  model_names_ ;
                DDS_Boolean   success_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* GetModelList_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(GetModelList_Response_Seq, GetModelList_Response_);

            NDDSUSERDllExport
            RTIBool GetModelList_Response__initialize(
                GetModelList_Response_* self);

            NDDSUSERDllExport
            RTIBool GetModelList_Response__initialize_ex(
                GetModelList_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool GetModelList_Response__initialize_w_params(
                GetModelList_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void GetModelList_Response__finalize(
                GetModelList_Response_* self);

            NDDSUSERDllExport
            void GetModelList_Response__finalize_ex(
                GetModelList_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void GetModelList_Response__finalize_w_params(
                GetModelList_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void GetModelList_Response__finalize_optional_members(
                GetModelList_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool GetModelList_Response__copy(
                GetModelList_Response_* dst,
                const GetModelList_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace gazebo_msgs  */

#endif /* GetModelList_ */

