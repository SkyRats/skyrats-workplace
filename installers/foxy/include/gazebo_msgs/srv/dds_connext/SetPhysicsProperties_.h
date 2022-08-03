

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from SetPhysicsProperties_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef SetPhysicsProperties__2136016057_h
#define SetPhysicsProperties__2136016057_h

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

            extern const char *SetPhysicsProperties_Request_TYPENAME;

            struct SetPhysicsProperties_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class SetPhysicsProperties_Request_TypeSupport;
            class SetPhysicsProperties_Request_DataWriter;
            class SetPhysicsProperties_Request_DataReader;
            #endif

            class SetPhysicsProperties_Request_ 
            {
              public:
                typedef struct SetPhysicsProperties_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef SetPhysicsProperties_Request_TypeSupport TypeSupport;
                typedef SetPhysicsProperties_Request_DataWriter DataWriter;
                typedef SetPhysicsProperties_Request_DataReader DataReader;
                #endif

                DDS_Double   time_step_ ;
                DDS_Double   max_update_rate_ ;
                geometry_msgs::msg::dds_::Vector3_   gravity_ ;
                gazebo_msgs::msg::dds_::ODEPhysics_   ode_config_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* SetPhysicsProperties_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(SetPhysicsProperties_Request_Seq, SetPhysicsProperties_Request_);

            NDDSUSERDllExport
            RTIBool SetPhysicsProperties_Request__initialize(
                SetPhysicsProperties_Request_* self);

            NDDSUSERDllExport
            RTIBool SetPhysicsProperties_Request__initialize_ex(
                SetPhysicsProperties_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool SetPhysicsProperties_Request__initialize_w_params(
                SetPhysicsProperties_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void SetPhysicsProperties_Request__finalize(
                SetPhysicsProperties_Request_* self);

            NDDSUSERDllExport
            void SetPhysicsProperties_Request__finalize_ex(
                SetPhysicsProperties_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void SetPhysicsProperties_Request__finalize_w_params(
                SetPhysicsProperties_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void SetPhysicsProperties_Request__finalize_optional_members(
                SetPhysicsProperties_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool SetPhysicsProperties_Request__copy(
                SetPhysicsProperties_Request_* dst,
                const SetPhysicsProperties_Request_* src);

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

            extern const char *SetPhysicsProperties_Response_TYPENAME;

            struct SetPhysicsProperties_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class SetPhysicsProperties_Response_TypeSupport;
            class SetPhysicsProperties_Response_DataWriter;
            class SetPhysicsProperties_Response_DataReader;
            #endif

            class SetPhysicsProperties_Response_ 
            {
              public:
                typedef struct SetPhysicsProperties_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef SetPhysicsProperties_Response_TypeSupport TypeSupport;
                typedef SetPhysicsProperties_Response_DataWriter DataWriter;
                typedef SetPhysicsProperties_Response_DataReader DataReader;
                #endif

                DDS_Boolean   success_ ;
                DDS_Char *   status_message_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* SetPhysicsProperties_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(SetPhysicsProperties_Response_Seq, SetPhysicsProperties_Response_);

            NDDSUSERDllExport
            RTIBool SetPhysicsProperties_Response__initialize(
                SetPhysicsProperties_Response_* self);

            NDDSUSERDllExport
            RTIBool SetPhysicsProperties_Response__initialize_ex(
                SetPhysicsProperties_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool SetPhysicsProperties_Response__initialize_w_params(
                SetPhysicsProperties_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void SetPhysicsProperties_Response__finalize(
                SetPhysicsProperties_Response_* self);

            NDDSUSERDllExport
            void SetPhysicsProperties_Response__finalize_ex(
                SetPhysicsProperties_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void SetPhysicsProperties_Response__finalize_w_params(
                SetPhysicsProperties_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void SetPhysicsProperties_Response__finalize_optional_members(
                SetPhysicsProperties_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool SetPhysicsProperties_Response__copy(
                SetPhysicsProperties_Response_* dst,
                const SetPhysicsProperties_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace gazebo_msgs  */

#endif /* SetPhysicsProperties_ */

