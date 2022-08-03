

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from SetModelConfiguration_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef SetModelConfiguration__1179449634_h
#define SetModelConfiguration__1179449634_h

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

            extern const char *SetModelConfiguration_Request_TYPENAME;

            struct SetModelConfiguration_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class SetModelConfiguration_Request_TypeSupport;
            class SetModelConfiguration_Request_DataWriter;
            class SetModelConfiguration_Request_DataReader;
            #endif

            class SetModelConfiguration_Request_ 
            {
              public:
                typedef struct SetModelConfiguration_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef SetModelConfiguration_Request_TypeSupport TypeSupport;
                typedef SetModelConfiguration_Request_DataWriter DataWriter;
                typedef SetModelConfiguration_Request_DataReader DataReader;
                #endif

                DDS_Char *   model_name_ ;
                DDS_Char *   urdf_param_name_ ;
                DDS_StringSeq  joint_names_ ;
                DDS_DoubleSeq  joint_positions_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* SetModelConfiguration_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(SetModelConfiguration_Request_Seq, SetModelConfiguration_Request_);

            NDDSUSERDllExport
            RTIBool SetModelConfiguration_Request__initialize(
                SetModelConfiguration_Request_* self);

            NDDSUSERDllExport
            RTIBool SetModelConfiguration_Request__initialize_ex(
                SetModelConfiguration_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool SetModelConfiguration_Request__initialize_w_params(
                SetModelConfiguration_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void SetModelConfiguration_Request__finalize(
                SetModelConfiguration_Request_* self);

            NDDSUSERDllExport
            void SetModelConfiguration_Request__finalize_ex(
                SetModelConfiguration_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void SetModelConfiguration_Request__finalize_w_params(
                SetModelConfiguration_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void SetModelConfiguration_Request__finalize_optional_members(
                SetModelConfiguration_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool SetModelConfiguration_Request__copy(
                SetModelConfiguration_Request_* dst,
                const SetModelConfiguration_Request_* src);

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

            extern const char *SetModelConfiguration_Response_TYPENAME;

            struct SetModelConfiguration_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class SetModelConfiguration_Response_TypeSupport;
            class SetModelConfiguration_Response_DataWriter;
            class SetModelConfiguration_Response_DataReader;
            #endif

            class SetModelConfiguration_Response_ 
            {
              public:
                typedef struct SetModelConfiguration_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef SetModelConfiguration_Response_TypeSupport TypeSupport;
                typedef SetModelConfiguration_Response_DataWriter DataWriter;
                typedef SetModelConfiguration_Response_DataReader DataReader;
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

            NDDSUSERDllExport DDS_TypeCode* SetModelConfiguration_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(SetModelConfiguration_Response_Seq, SetModelConfiguration_Response_);

            NDDSUSERDllExport
            RTIBool SetModelConfiguration_Response__initialize(
                SetModelConfiguration_Response_* self);

            NDDSUSERDllExport
            RTIBool SetModelConfiguration_Response__initialize_ex(
                SetModelConfiguration_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool SetModelConfiguration_Response__initialize_w_params(
                SetModelConfiguration_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void SetModelConfiguration_Response__finalize(
                SetModelConfiguration_Response_* self);

            NDDSUSERDllExport
            void SetModelConfiguration_Response__finalize_ex(
                SetModelConfiguration_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void SetModelConfiguration_Response__finalize_w_params(
                SetModelConfiguration_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void SetModelConfiguration_Response__finalize_optional_members(
                SetModelConfiguration_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool SetModelConfiguration_Response__copy(
                SetModelConfiguration_Response_* dst,
                const SetModelConfiguration_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace gazebo_msgs  */

#endif /* SetModelConfiguration_ */

