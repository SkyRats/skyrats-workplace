

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from UpdateFilename_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef UpdateFilename__226288129_h
#define UpdateFilename__226288129_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

namespace pcl_msgs {
    namespace srv {
        namespace dds_ {

            extern const char *UpdateFilename_Request_TYPENAME;

            struct UpdateFilename_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class UpdateFilename_Request_TypeSupport;
            class UpdateFilename_Request_DataWriter;
            class UpdateFilename_Request_DataReader;
            #endif

            class UpdateFilename_Request_ 
            {
              public:
                typedef struct UpdateFilename_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef UpdateFilename_Request_TypeSupport TypeSupport;
                typedef UpdateFilename_Request_DataWriter DataWriter;
                typedef UpdateFilename_Request_DataReader DataReader;
                #endif

                DDS_Char *   filename_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* UpdateFilename_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(UpdateFilename_Request_Seq, UpdateFilename_Request_);

            NDDSUSERDllExport
            RTIBool UpdateFilename_Request__initialize(
                UpdateFilename_Request_* self);

            NDDSUSERDllExport
            RTIBool UpdateFilename_Request__initialize_ex(
                UpdateFilename_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool UpdateFilename_Request__initialize_w_params(
                UpdateFilename_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void UpdateFilename_Request__finalize(
                UpdateFilename_Request_* self);

            NDDSUSERDllExport
            void UpdateFilename_Request__finalize_ex(
                UpdateFilename_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void UpdateFilename_Request__finalize_w_params(
                UpdateFilename_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void UpdateFilename_Request__finalize_optional_members(
                UpdateFilename_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool UpdateFilename_Request__copy(
                UpdateFilename_Request_* dst,
                const UpdateFilename_Request_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace pcl_msgs  */
namespace pcl_msgs {
    namespace srv {
        namespace dds_ {

            extern const char *UpdateFilename_Response_TYPENAME;

            struct UpdateFilename_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class UpdateFilename_Response_TypeSupport;
            class UpdateFilename_Response_DataWriter;
            class UpdateFilename_Response_DataReader;
            #endif

            class UpdateFilename_Response_ 
            {
              public:
                typedef struct UpdateFilename_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef UpdateFilename_Response_TypeSupport TypeSupport;
                typedef UpdateFilename_Response_DataWriter DataWriter;
                typedef UpdateFilename_Response_DataReader DataReader;
                #endif

                DDS_Boolean   success_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* UpdateFilename_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(UpdateFilename_Response_Seq, UpdateFilename_Response_);

            NDDSUSERDllExport
            RTIBool UpdateFilename_Response__initialize(
                UpdateFilename_Response_* self);

            NDDSUSERDllExport
            RTIBool UpdateFilename_Response__initialize_ex(
                UpdateFilename_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool UpdateFilename_Response__initialize_w_params(
                UpdateFilename_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void UpdateFilename_Response__finalize(
                UpdateFilename_Response_* self);

            NDDSUSERDllExport
            void UpdateFilename_Response__finalize_ex(
                UpdateFilename_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void UpdateFilename_Response__finalize_w_params(
                UpdateFilename_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void UpdateFilename_Response__finalize_optional_members(
                UpdateFilename_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool UpdateFilename_Response__copy(
                UpdateFilename_Response_* dst,
                const UpdateFilename_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace pcl_msgs  */

#endif /* UpdateFilename_ */

