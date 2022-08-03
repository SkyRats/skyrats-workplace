

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from SetLightProperties_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef SetLightProperties__1919856209_h
#define SetLightProperties__1919856209_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "std_msgs/msg/dds_connext/ColorRGBA_.h"
namespace gazebo_msgs {
    namespace srv {
        namespace dds_ {

            extern const char *SetLightProperties_Request_TYPENAME;

            struct SetLightProperties_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class SetLightProperties_Request_TypeSupport;
            class SetLightProperties_Request_DataWriter;
            class SetLightProperties_Request_DataReader;
            #endif

            class SetLightProperties_Request_ 
            {
              public:
                typedef struct SetLightProperties_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef SetLightProperties_Request_TypeSupport TypeSupport;
                typedef SetLightProperties_Request_DataWriter DataWriter;
                typedef SetLightProperties_Request_DataReader DataReader;
                #endif

                DDS_Char *   light_name_ ;
                std_msgs::msg::dds_::ColorRGBA_   diffuse_ ;
                DDS_Double   attenuation_constant_ ;
                DDS_Double   attenuation_linear_ ;
                DDS_Double   attenuation_quadratic_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* SetLightProperties_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(SetLightProperties_Request_Seq, SetLightProperties_Request_);

            NDDSUSERDllExport
            RTIBool SetLightProperties_Request__initialize(
                SetLightProperties_Request_* self);

            NDDSUSERDllExport
            RTIBool SetLightProperties_Request__initialize_ex(
                SetLightProperties_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool SetLightProperties_Request__initialize_w_params(
                SetLightProperties_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void SetLightProperties_Request__finalize(
                SetLightProperties_Request_* self);

            NDDSUSERDllExport
            void SetLightProperties_Request__finalize_ex(
                SetLightProperties_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void SetLightProperties_Request__finalize_w_params(
                SetLightProperties_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void SetLightProperties_Request__finalize_optional_members(
                SetLightProperties_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool SetLightProperties_Request__copy(
                SetLightProperties_Request_* dst,
                const SetLightProperties_Request_* src);

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

            extern const char *SetLightProperties_Response_TYPENAME;

            struct SetLightProperties_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class SetLightProperties_Response_TypeSupport;
            class SetLightProperties_Response_DataWriter;
            class SetLightProperties_Response_DataReader;
            #endif

            class SetLightProperties_Response_ 
            {
              public:
                typedef struct SetLightProperties_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef SetLightProperties_Response_TypeSupport TypeSupport;
                typedef SetLightProperties_Response_DataWriter DataWriter;
                typedef SetLightProperties_Response_DataReader DataReader;
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

            NDDSUSERDllExport DDS_TypeCode* SetLightProperties_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(SetLightProperties_Response_Seq, SetLightProperties_Response_);

            NDDSUSERDllExport
            RTIBool SetLightProperties_Response__initialize(
                SetLightProperties_Response_* self);

            NDDSUSERDllExport
            RTIBool SetLightProperties_Response__initialize_ex(
                SetLightProperties_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool SetLightProperties_Response__initialize_w_params(
                SetLightProperties_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void SetLightProperties_Response__finalize(
                SetLightProperties_Response_* self);

            NDDSUSERDllExport
            void SetLightProperties_Response__finalize_ex(
                SetLightProperties_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void SetLightProperties_Response__finalize_w_params(
                SetLightProperties_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void SetLightProperties_Response__finalize_optional_members(
                SetLightProperties_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool SetLightProperties_Response__copy(
                SetLightProperties_Response_* dst,
                const SetLightProperties_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace gazebo_msgs  */

#endif /* SetLightProperties_ */

