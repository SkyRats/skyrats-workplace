

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GetLightProperties_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef GetLightProperties__132417511_h
#define GetLightProperties__132417511_h

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

            extern const char *GetLightProperties_Request_TYPENAME;

            struct GetLightProperties_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class GetLightProperties_Request_TypeSupport;
            class GetLightProperties_Request_DataWriter;
            class GetLightProperties_Request_DataReader;
            #endif

            class GetLightProperties_Request_ 
            {
              public:
                typedef struct GetLightProperties_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef GetLightProperties_Request_TypeSupport TypeSupport;
                typedef GetLightProperties_Request_DataWriter DataWriter;
                typedef GetLightProperties_Request_DataReader DataReader;
                #endif

                DDS_Char *   light_name_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* GetLightProperties_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(GetLightProperties_Request_Seq, GetLightProperties_Request_);

            NDDSUSERDllExport
            RTIBool GetLightProperties_Request__initialize(
                GetLightProperties_Request_* self);

            NDDSUSERDllExport
            RTIBool GetLightProperties_Request__initialize_ex(
                GetLightProperties_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool GetLightProperties_Request__initialize_w_params(
                GetLightProperties_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void GetLightProperties_Request__finalize(
                GetLightProperties_Request_* self);

            NDDSUSERDllExport
            void GetLightProperties_Request__finalize_ex(
                GetLightProperties_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void GetLightProperties_Request__finalize_w_params(
                GetLightProperties_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void GetLightProperties_Request__finalize_optional_members(
                GetLightProperties_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool GetLightProperties_Request__copy(
                GetLightProperties_Request_* dst,
                const GetLightProperties_Request_* src);

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

            extern const char *GetLightProperties_Response_TYPENAME;

            struct GetLightProperties_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class GetLightProperties_Response_TypeSupport;
            class GetLightProperties_Response_DataWriter;
            class GetLightProperties_Response_DataReader;
            #endif

            class GetLightProperties_Response_ 
            {
              public:
                typedef struct GetLightProperties_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef GetLightProperties_Response_TypeSupport TypeSupport;
                typedef GetLightProperties_Response_DataWriter DataWriter;
                typedef GetLightProperties_Response_DataReader DataReader;
                #endif

                std_msgs::msg::dds_::ColorRGBA_   diffuse_ ;
                DDS_Double   attenuation_constant_ ;
                DDS_Double   attenuation_linear_ ;
                DDS_Double   attenuation_quadratic_ ;
                DDS_Boolean   success_ ;
                DDS_Char *   status_message_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* GetLightProperties_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(GetLightProperties_Response_Seq, GetLightProperties_Response_);

            NDDSUSERDllExport
            RTIBool GetLightProperties_Response__initialize(
                GetLightProperties_Response_* self);

            NDDSUSERDllExport
            RTIBool GetLightProperties_Response__initialize_ex(
                GetLightProperties_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool GetLightProperties_Response__initialize_w_params(
                GetLightProperties_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void GetLightProperties_Response__finalize(
                GetLightProperties_Response_* self);

            NDDSUSERDllExport
            void GetLightProperties_Response__finalize_ex(
                GetLightProperties_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void GetLightProperties_Response__finalize_w_params(
                GetLightProperties_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void GetLightProperties_Response__finalize_optional_members(
                GetLightProperties_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool GetLightProperties_Response__copy(
                GetLightProperties_Response_* dst,
                const GetLightProperties_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace gazebo_msgs  */

#endif /* GetLightProperties_ */

