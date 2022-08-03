

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from SpawnModel_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef SpawnModel__724273792_h
#define SpawnModel__724273792_h

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

            extern const char *SpawnModel_Request_TYPENAME;

            struct SpawnModel_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class SpawnModel_Request_TypeSupport;
            class SpawnModel_Request_DataWriter;
            class SpawnModel_Request_DataReader;
            #endif

            class SpawnModel_Request_ 
            {
              public:
                typedef struct SpawnModel_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef SpawnModel_Request_TypeSupport TypeSupport;
                typedef SpawnModel_Request_DataWriter DataWriter;
                typedef SpawnModel_Request_DataReader DataReader;
                #endif

                DDS_Char *   model_name_ ;
                DDS_Char *   model_xml_ ;
                DDS_Char *   robot_namespace_ ;
                geometry_msgs::msg::dds_::Pose_   initial_pose_ ;
                DDS_Char *   reference_frame_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* SpawnModel_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(SpawnModel_Request_Seq, SpawnModel_Request_);

            NDDSUSERDllExport
            RTIBool SpawnModel_Request__initialize(
                SpawnModel_Request_* self);

            NDDSUSERDllExport
            RTIBool SpawnModel_Request__initialize_ex(
                SpawnModel_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool SpawnModel_Request__initialize_w_params(
                SpawnModel_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void SpawnModel_Request__finalize(
                SpawnModel_Request_* self);

            NDDSUSERDllExport
            void SpawnModel_Request__finalize_ex(
                SpawnModel_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void SpawnModel_Request__finalize_w_params(
                SpawnModel_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void SpawnModel_Request__finalize_optional_members(
                SpawnModel_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool SpawnModel_Request__copy(
                SpawnModel_Request_* dst,
                const SpawnModel_Request_* src);

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

            extern const char *SpawnModel_Response_TYPENAME;

            struct SpawnModel_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class SpawnModel_Response_TypeSupport;
            class SpawnModel_Response_DataWriter;
            class SpawnModel_Response_DataReader;
            #endif

            class SpawnModel_Response_ 
            {
              public:
                typedef struct SpawnModel_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef SpawnModel_Response_TypeSupport TypeSupport;
                typedef SpawnModel_Response_DataWriter DataWriter;
                typedef SpawnModel_Response_DataReader DataReader;
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

            NDDSUSERDllExport DDS_TypeCode* SpawnModel_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(SpawnModel_Response_Seq, SpawnModel_Response_);

            NDDSUSERDllExport
            RTIBool SpawnModel_Response__initialize(
                SpawnModel_Response_* self);

            NDDSUSERDllExport
            RTIBool SpawnModel_Response__initialize_ex(
                SpawnModel_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool SpawnModel_Response__initialize_w_params(
                SpawnModel_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void SpawnModel_Response__finalize(
                SpawnModel_Response_* self);

            NDDSUSERDllExport
            void SpawnModel_Response__finalize_ex(
                SpawnModel_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void SpawnModel_Response__finalize_w_params(
                SpawnModel_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void SpawnModel_Response__finalize_optional_members(
                SpawnModel_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool SpawnModel_Response__copy(
                SpawnModel_Response_* dst,
                const SpawnModel_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace gazebo_msgs  */

#endif /* SpawnModel_ */

