

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GetPhysicsProperties_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef GetPhysicsProperties__1292724457_h
#define GetPhysicsProperties__1292724457_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "gazebo_msgs/msg/dds_connext/ODEPhysics_.h"
#include "geometry_msgs/msg/dds_connext/Vector3_.h"
namespace gazebo_msgs {
    namespace srv {
        namespace dds_ {

            extern const char *GetPhysicsProperties_Request_TYPENAME;

            struct GetPhysicsProperties_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class GetPhysicsProperties_Request_TypeSupport;
            class GetPhysicsProperties_Request_DataWriter;
            class GetPhysicsProperties_Request_DataReader;
            #endif

            class GetPhysicsProperties_Request_ 
            {
              public:
                typedef struct GetPhysicsProperties_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef GetPhysicsProperties_Request_TypeSupport TypeSupport;
                typedef GetPhysicsProperties_Request_DataWriter DataWriter;
                typedef GetPhysicsProperties_Request_DataReader DataReader;
                #endif

                DDS_Octet   structure_needs_at_least_one_member_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* GetPhysicsProperties_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(GetPhysicsProperties_Request_Seq, GetPhysicsProperties_Request_);

            NDDSUSERDllExport
            RTIBool GetPhysicsProperties_Request__initialize(
                GetPhysicsProperties_Request_* self);

            NDDSUSERDllExport
            RTIBool GetPhysicsProperties_Request__initialize_ex(
                GetPhysicsProperties_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool GetPhysicsProperties_Request__initialize_w_params(
                GetPhysicsProperties_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void GetPhysicsProperties_Request__finalize(
                GetPhysicsProperties_Request_* self);

            NDDSUSERDllExport
            void GetPhysicsProperties_Request__finalize_ex(
                GetPhysicsProperties_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void GetPhysicsProperties_Request__finalize_w_params(
                GetPhysicsProperties_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void GetPhysicsProperties_Request__finalize_optional_members(
                GetPhysicsProperties_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool GetPhysicsProperties_Request__copy(
                GetPhysicsProperties_Request_* dst,
                const GetPhysicsProperties_Request_* src);

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

            extern const char *GetPhysicsProperties_Response_TYPENAME;

            struct GetPhysicsProperties_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class GetPhysicsProperties_Response_TypeSupport;
            class GetPhysicsProperties_Response_DataWriter;
            class GetPhysicsProperties_Response_DataReader;
            #endif

            class GetPhysicsProperties_Response_ 
            {
              public:
                typedef struct GetPhysicsProperties_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef GetPhysicsProperties_Response_TypeSupport TypeSupport;
                typedef GetPhysicsProperties_Response_DataWriter DataWriter;
                typedef GetPhysicsProperties_Response_DataReader DataReader;
                #endif

                DDS_Double   time_step_ ;
                DDS_Boolean   pause_ ;
                DDS_Double   max_update_rate_ ;
                geometry_msgs::msg::dds_::Vector3_   gravity_ ;
                gazebo_msgs::msg::dds_::ODEPhysics_   ode_config_ ;
                DDS_Boolean   success_ ;
                DDS_Char *   status_message_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* GetPhysicsProperties_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(GetPhysicsProperties_Response_Seq, GetPhysicsProperties_Response_);

            NDDSUSERDllExport
            RTIBool GetPhysicsProperties_Response__initialize(
                GetPhysicsProperties_Response_* self);

            NDDSUSERDllExport
            RTIBool GetPhysicsProperties_Response__initialize_ex(
                GetPhysicsProperties_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool GetPhysicsProperties_Response__initialize_w_params(
                GetPhysicsProperties_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void GetPhysicsProperties_Response__finalize(
                GetPhysicsProperties_Response_* self);

            NDDSUSERDllExport
            void GetPhysicsProperties_Response__finalize_ex(
                GetPhysicsProperties_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void GetPhysicsProperties_Response__finalize_w_params(
                GetPhysicsProperties_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void GetPhysicsProperties_Response__finalize_optional_members(
                GetPhysicsProperties_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool GetPhysicsProperties_Response__copy(
                GetPhysicsProperties_Response_* dst,
                const GetPhysicsProperties_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace gazebo_msgs  */

#endif /* GetPhysicsProperties_ */

