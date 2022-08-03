

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from DeleteLight_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef DeleteLight__1720684586_h
#define DeleteLight__1720684586_h

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

            extern const char *DeleteLight_Request_TYPENAME;

            struct DeleteLight_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class DeleteLight_Request_TypeSupport;
            class DeleteLight_Request_DataWriter;
            class DeleteLight_Request_DataReader;
            #endif

            class DeleteLight_Request_ 
            {
              public:
                typedef struct DeleteLight_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef DeleteLight_Request_TypeSupport TypeSupport;
                typedef DeleteLight_Request_DataWriter DataWriter;
                typedef DeleteLight_Request_DataReader DataReader;
                #endif

                DDS_Char *   light_name_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* DeleteLight_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(DeleteLight_Request_Seq, DeleteLight_Request_);

            NDDSUSERDllExport
            RTIBool DeleteLight_Request__initialize(
                DeleteLight_Request_* self);

            NDDSUSERDllExport
            RTIBool DeleteLight_Request__initialize_ex(
                DeleteLight_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool DeleteLight_Request__initialize_w_params(
                DeleteLight_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void DeleteLight_Request__finalize(
                DeleteLight_Request_* self);

            NDDSUSERDllExport
            void DeleteLight_Request__finalize_ex(
                DeleteLight_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void DeleteLight_Request__finalize_w_params(
                DeleteLight_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void DeleteLight_Request__finalize_optional_members(
                DeleteLight_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool DeleteLight_Request__copy(
                DeleteLight_Request_* dst,
                const DeleteLight_Request_* src);

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

            extern const char *DeleteLight_Response_TYPENAME;

            struct DeleteLight_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class DeleteLight_Response_TypeSupport;
            class DeleteLight_Response_DataWriter;
            class DeleteLight_Response_DataReader;
            #endif

            class DeleteLight_Response_ 
            {
              public:
                typedef struct DeleteLight_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef DeleteLight_Response_TypeSupport TypeSupport;
                typedef DeleteLight_Response_DataWriter DataWriter;
                typedef DeleteLight_Response_DataReader DataReader;
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

            NDDSUSERDllExport DDS_TypeCode* DeleteLight_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(DeleteLight_Response_Seq, DeleteLight_Response_);

            NDDSUSERDllExport
            RTIBool DeleteLight_Response__initialize(
                DeleteLight_Response_* self);

            NDDSUSERDllExport
            RTIBool DeleteLight_Response__initialize_ex(
                DeleteLight_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool DeleteLight_Response__initialize_w_params(
                DeleteLight_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void DeleteLight_Response__finalize(
                DeleteLight_Response_* self);

            NDDSUSERDllExport
            void DeleteLight_Response__finalize_ex(
                DeleteLight_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void DeleteLight_Response__finalize_w_params(
                DeleteLight_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void DeleteLight_Response__finalize_optional_members(
                DeleteLight_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool DeleteLight_Response__copy(
                DeleteLight_Response_* dst,
                const DeleteLight_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace gazebo_msgs  */

#endif /* DeleteLight_ */

