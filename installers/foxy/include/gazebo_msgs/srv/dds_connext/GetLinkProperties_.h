

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GetLinkProperties_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef GetLinkProperties__1202869380_h
#define GetLinkProperties__1202869380_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "geometry_msgs/msg/dds_connext/Pose_.h"
namespace gazebo_msgs {
    namespace srv {
        namespace dds_ {

            extern const char *GetLinkProperties_Request_TYPENAME;

            struct GetLinkProperties_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class GetLinkProperties_Request_TypeSupport;
            class GetLinkProperties_Request_DataWriter;
            class GetLinkProperties_Request_DataReader;
            #endif

            class GetLinkProperties_Request_ 
            {
              public:
                typedef struct GetLinkProperties_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef GetLinkProperties_Request_TypeSupport TypeSupport;
                typedef GetLinkProperties_Request_DataWriter DataWriter;
                typedef GetLinkProperties_Request_DataReader DataReader;
                #endif

                DDS_Char *   link_name_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* GetLinkProperties_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(GetLinkProperties_Request_Seq, GetLinkProperties_Request_);

            NDDSUSERDllExport
            RTIBool GetLinkProperties_Request__initialize(
                GetLinkProperties_Request_* self);

            NDDSUSERDllExport
            RTIBool GetLinkProperties_Request__initialize_ex(
                GetLinkProperties_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool GetLinkProperties_Request__initialize_w_params(
                GetLinkProperties_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void GetLinkProperties_Request__finalize(
                GetLinkProperties_Request_* self);

            NDDSUSERDllExport
            void GetLinkProperties_Request__finalize_ex(
                GetLinkProperties_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void GetLinkProperties_Request__finalize_w_params(
                GetLinkProperties_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void GetLinkProperties_Request__finalize_optional_members(
                GetLinkProperties_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool GetLinkProperties_Request__copy(
                GetLinkProperties_Request_* dst,
                const GetLinkProperties_Request_* src);

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

            extern const char *GetLinkProperties_Response_TYPENAME;

            struct GetLinkProperties_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class GetLinkProperties_Response_TypeSupport;
            class GetLinkProperties_Response_DataWriter;
            class GetLinkProperties_Response_DataReader;
            #endif

            class GetLinkProperties_Response_ 
            {
              public:
                typedef struct GetLinkProperties_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef GetLinkProperties_Response_TypeSupport TypeSupport;
                typedef GetLinkProperties_Response_DataWriter DataWriter;
                typedef GetLinkProperties_Response_DataReader DataReader;
                #endif

                geometry_msgs::msg::dds_::Pose_   com_ ;
                DDS_Boolean   gravity_mode_ ;
                DDS_Double   mass_ ;
                DDS_Double   ixx_ ;
                DDS_Double   ixy_ ;
                DDS_Double   ixz_ ;
                DDS_Double   iyy_ ;
                DDS_Double   iyz_ ;
                DDS_Double   izz_ ;
                DDS_Boolean   success_ ;
                DDS_Char *   status_message_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* GetLinkProperties_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(GetLinkProperties_Response_Seq, GetLinkProperties_Response_);

            NDDSUSERDllExport
            RTIBool GetLinkProperties_Response__initialize(
                GetLinkProperties_Response_* self);

            NDDSUSERDllExport
            RTIBool GetLinkProperties_Response__initialize_ex(
                GetLinkProperties_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool GetLinkProperties_Response__initialize_w_params(
                GetLinkProperties_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void GetLinkProperties_Response__finalize(
                GetLinkProperties_Response_* self);

            NDDSUSERDllExport
            void GetLinkProperties_Response__finalize_ex(
                GetLinkProperties_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void GetLinkProperties_Response__finalize_w_params(
                GetLinkProperties_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void GetLinkProperties_Response__finalize_optional_members(
                GetLinkProperties_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool GetLinkProperties_Response__copy(
                GetLinkProperties_Response_* dst,
                const GetLinkProperties_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace gazebo_msgs  */

#endif /* GetLinkProperties_ */

