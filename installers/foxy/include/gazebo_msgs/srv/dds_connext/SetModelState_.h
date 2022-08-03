

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from SetModelState_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef SetModelState__678725935_h
#define SetModelState__678725935_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "gazebo_msgs/msg/dds_connext/ModelState_.h"
namespace gazebo_msgs {
    namespace srv {
        namespace dds_ {

            extern const char *SetModelState_Request_TYPENAME;

            struct SetModelState_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class SetModelState_Request_TypeSupport;
            class SetModelState_Request_DataWriter;
            class SetModelState_Request_DataReader;
            #endif

            class SetModelState_Request_ 
            {
              public:
                typedef struct SetModelState_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef SetModelState_Request_TypeSupport TypeSupport;
                typedef SetModelState_Request_DataWriter DataWriter;
                typedef SetModelState_Request_DataReader DataReader;
                #endif

                gazebo_msgs::msg::dds_::ModelState_   model_state_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* SetModelState_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(SetModelState_Request_Seq, SetModelState_Request_);

            NDDSUSERDllExport
            RTIBool SetModelState_Request__initialize(
                SetModelState_Request_* self);

            NDDSUSERDllExport
            RTIBool SetModelState_Request__initialize_ex(
                SetModelState_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool SetModelState_Request__initialize_w_params(
                SetModelState_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void SetModelState_Request__finalize(
                SetModelState_Request_* self);

            NDDSUSERDllExport
            void SetModelState_Request__finalize_ex(
                SetModelState_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void SetModelState_Request__finalize_w_params(
                SetModelState_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void SetModelState_Request__finalize_optional_members(
                SetModelState_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool SetModelState_Request__copy(
                SetModelState_Request_* dst,
                const SetModelState_Request_* src);

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

            extern const char *SetModelState_Response_TYPENAME;

            struct SetModelState_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class SetModelState_Response_TypeSupport;
            class SetModelState_Response_DataWriter;
            class SetModelState_Response_DataReader;
            #endif

            class SetModelState_Response_ 
            {
              public:
                typedef struct SetModelState_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef SetModelState_Response_TypeSupport TypeSupport;
                typedef SetModelState_Response_DataWriter DataWriter;
                typedef SetModelState_Response_DataReader DataReader;
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

            NDDSUSERDllExport DDS_TypeCode* SetModelState_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(SetModelState_Response_Seq, SetModelState_Response_);

            NDDSUSERDllExport
            RTIBool SetModelState_Response__initialize(
                SetModelState_Response_* self);

            NDDSUSERDllExport
            RTIBool SetModelState_Response__initialize_ex(
                SetModelState_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool SetModelState_Response__initialize_w_params(
                SetModelState_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void SetModelState_Response__finalize(
                SetModelState_Response_* self);

            NDDSUSERDllExport
            void SetModelState_Response__finalize_ex(
                SetModelState_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void SetModelState_Response__finalize_w_params(
                SetModelState_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void SetModelState_Response__finalize_optional_members(
                SetModelState_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool SetModelState_Response__copy(
                SetModelState_Response_* dst,
                const SetModelState_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace gazebo_msgs  */

#endif /* SetModelState_ */

