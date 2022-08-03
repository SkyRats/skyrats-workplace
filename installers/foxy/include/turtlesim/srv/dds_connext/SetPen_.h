

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from SetPen_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef SetPen__329542944_h
#define SetPen__329542944_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

namespace turtlesim {
    namespace srv {
        namespace dds_ {

            extern const char *SetPen_Request_TYPENAME;

            struct SetPen_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class SetPen_Request_TypeSupport;
            class SetPen_Request_DataWriter;
            class SetPen_Request_DataReader;
            #endif

            class SetPen_Request_ 
            {
              public:
                typedef struct SetPen_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef SetPen_Request_TypeSupport TypeSupport;
                typedef SetPen_Request_DataWriter DataWriter;
                typedef SetPen_Request_DataReader DataReader;
                #endif

                DDS_Octet   r_ ;
                DDS_Octet   g_ ;
                DDS_Octet   b_ ;
                DDS_Octet   width_ ;
                DDS_Octet   off_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* SetPen_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(SetPen_Request_Seq, SetPen_Request_);

            NDDSUSERDllExport
            RTIBool SetPen_Request__initialize(
                SetPen_Request_* self);

            NDDSUSERDllExport
            RTIBool SetPen_Request__initialize_ex(
                SetPen_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool SetPen_Request__initialize_w_params(
                SetPen_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void SetPen_Request__finalize(
                SetPen_Request_* self);

            NDDSUSERDllExport
            void SetPen_Request__finalize_ex(
                SetPen_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void SetPen_Request__finalize_w_params(
                SetPen_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void SetPen_Request__finalize_optional_members(
                SetPen_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool SetPen_Request__copy(
                SetPen_Request_* dst,
                const SetPen_Request_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace turtlesim  */
namespace turtlesim {
    namespace srv {
        namespace dds_ {

            extern const char *SetPen_Response_TYPENAME;

            struct SetPen_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class SetPen_Response_TypeSupport;
            class SetPen_Response_DataWriter;
            class SetPen_Response_DataReader;
            #endif

            class SetPen_Response_ 
            {
              public:
                typedef struct SetPen_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef SetPen_Response_TypeSupport TypeSupport;
                typedef SetPen_Response_DataWriter DataWriter;
                typedef SetPen_Response_DataReader DataReader;
                #endif

                DDS_Octet   structure_needs_at_least_one_member_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* SetPen_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(SetPen_Response_Seq, SetPen_Response_);

            NDDSUSERDllExport
            RTIBool SetPen_Response__initialize(
                SetPen_Response_* self);

            NDDSUSERDllExport
            RTIBool SetPen_Response__initialize_ex(
                SetPen_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool SetPen_Response__initialize_w_params(
                SetPen_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void SetPen_Response__finalize(
                SetPen_Response_* self);

            NDDSUSERDllExport
            void SetPen_Response__finalize_ex(
                SetPen_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void SetPen_Response__finalize_w_params(
                SetPen_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void SetPen_Response__finalize_optional_members(
                SetPen_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool SetPen_Response__copy(
                SetPen_Response_* dst,
                const SetPen_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace turtlesim  */

#endif /* SetPen_ */

