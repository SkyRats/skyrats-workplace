

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GetModelState_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef GetModelState__241309513_h
#define GetModelState__241309513_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "geometry_msgs/msg/dds_connext/Pose_.h"
#include "geometry_msgs/msg/dds_connext/Twist_.h"
#include "std_msgs/msg/dds_connext/Header_.h"
namespace gazebo_msgs {
    namespace srv {
        namespace dds_ {

            extern const char *GetModelState_Request_TYPENAME;

            struct GetModelState_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class GetModelState_Request_TypeSupport;
            class GetModelState_Request_DataWriter;
            class GetModelState_Request_DataReader;
            #endif

            class GetModelState_Request_ 
            {
              public:
                typedef struct GetModelState_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef GetModelState_Request_TypeSupport TypeSupport;
                typedef GetModelState_Request_DataWriter DataWriter;
                typedef GetModelState_Request_DataReader DataReader;
                #endif

                DDS_Char *   model_name_ ;
                DDS_Char *   relative_entity_name_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* GetModelState_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(GetModelState_Request_Seq, GetModelState_Request_);

            NDDSUSERDllExport
            RTIBool GetModelState_Request__initialize(
                GetModelState_Request_* self);

            NDDSUSERDllExport
            RTIBool GetModelState_Request__initialize_ex(
                GetModelState_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool GetModelState_Request__initialize_w_params(
                GetModelState_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void GetModelState_Request__finalize(
                GetModelState_Request_* self);

            NDDSUSERDllExport
            void GetModelState_Request__finalize_ex(
                GetModelState_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void GetModelState_Request__finalize_w_params(
                GetModelState_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void GetModelState_Request__finalize_optional_members(
                GetModelState_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool GetModelState_Request__copy(
                GetModelState_Request_* dst,
                const GetModelState_Request_* src);

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

            extern const char *GetModelState_Response_TYPENAME;

            struct GetModelState_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class GetModelState_Response_TypeSupport;
            class GetModelState_Response_DataWriter;
            class GetModelState_Response_DataReader;
            #endif

            class GetModelState_Response_ 
            {
              public:
                typedef struct GetModelState_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef GetModelState_Response_TypeSupport TypeSupport;
                typedef GetModelState_Response_DataWriter DataWriter;
                typedef GetModelState_Response_DataReader DataReader;
                #endif

                std_msgs::msg::dds_::Header_   header_ ;
                geometry_msgs::msg::dds_::Pose_   pose_ ;
                geometry_msgs::msg::dds_::Twist_   twist_ ;
                DDS_Boolean   success_ ;
                DDS_Char *   status_message_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* GetModelState_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(GetModelState_Response_Seq, GetModelState_Response_);

            NDDSUSERDllExport
            RTIBool GetModelState_Response__initialize(
                GetModelState_Response_* self);

            NDDSUSERDllExport
            RTIBool GetModelState_Response__initialize_ex(
                GetModelState_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool GetModelState_Response__initialize_w_params(
                GetModelState_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void GetModelState_Response__finalize(
                GetModelState_Response_* self);

            NDDSUSERDllExport
            void GetModelState_Response__finalize_ex(
                GetModelState_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void GetModelState_Response__finalize_w_params(
                GetModelState_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void GetModelState_Response__finalize_optional_members(
                GetModelState_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool GetModelState_Response__copy(
                GetModelState_Response_* dst,
                const GetModelState_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace gazebo_msgs  */

#endif /* GetModelState_ */

