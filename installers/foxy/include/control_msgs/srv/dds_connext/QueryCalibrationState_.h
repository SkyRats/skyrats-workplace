

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from QueryCalibrationState_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef QueryCalibrationState__979772045_h
#define QueryCalibrationState__979772045_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

namespace control_msgs {
    namespace srv {
        namespace dds_ {

            extern const char *QueryCalibrationState_Request_TYPENAME;

            struct QueryCalibrationState_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class QueryCalibrationState_Request_TypeSupport;
            class QueryCalibrationState_Request_DataWriter;
            class QueryCalibrationState_Request_DataReader;
            #endif

            class QueryCalibrationState_Request_ 
            {
              public:
                typedef struct QueryCalibrationState_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef QueryCalibrationState_Request_TypeSupport TypeSupport;
                typedef QueryCalibrationState_Request_DataWriter DataWriter;
                typedef QueryCalibrationState_Request_DataReader DataReader;
                #endif

                DDS_Octet   structure_needs_at_least_one_member_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* QueryCalibrationState_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(QueryCalibrationState_Request_Seq, QueryCalibrationState_Request_);

            NDDSUSERDllExport
            RTIBool QueryCalibrationState_Request__initialize(
                QueryCalibrationState_Request_* self);

            NDDSUSERDllExport
            RTIBool QueryCalibrationState_Request__initialize_ex(
                QueryCalibrationState_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool QueryCalibrationState_Request__initialize_w_params(
                QueryCalibrationState_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void QueryCalibrationState_Request__finalize(
                QueryCalibrationState_Request_* self);

            NDDSUSERDllExport
            void QueryCalibrationState_Request__finalize_ex(
                QueryCalibrationState_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void QueryCalibrationState_Request__finalize_w_params(
                QueryCalibrationState_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void QueryCalibrationState_Request__finalize_optional_members(
                QueryCalibrationState_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool QueryCalibrationState_Request__copy(
                QueryCalibrationState_Request_* dst,
                const QueryCalibrationState_Request_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace control_msgs  */
namespace control_msgs {
    namespace srv {
        namespace dds_ {

            extern const char *QueryCalibrationState_Response_TYPENAME;

            struct QueryCalibrationState_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class QueryCalibrationState_Response_TypeSupport;
            class QueryCalibrationState_Response_DataWriter;
            class QueryCalibrationState_Response_DataReader;
            #endif

            class QueryCalibrationState_Response_ 
            {
              public:
                typedef struct QueryCalibrationState_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef QueryCalibrationState_Response_TypeSupport TypeSupport;
                typedef QueryCalibrationState_Response_DataWriter DataWriter;
                typedef QueryCalibrationState_Response_DataReader DataReader;
                #endif

                DDS_Boolean   is_calibrated_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* QueryCalibrationState_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(QueryCalibrationState_Response_Seq, QueryCalibrationState_Response_);

            NDDSUSERDllExport
            RTIBool QueryCalibrationState_Response__initialize(
                QueryCalibrationState_Response_* self);

            NDDSUSERDllExport
            RTIBool QueryCalibrationState_Response__initialize_ex(
                QueryCalibrationState_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool QueryCalibrationState_Response__initialize_w_params(
                QueryCalibrationState_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void QueryCalibrationState_Response__finalize(
                QueryCalibrationState_Response_* self);

            NDDSUSERDllExport
            void QueryCalibrationState_Response__finalize_ex(
                QueryCalibrationState_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void QueryCalibrationState_Response__finalize_w_params(
                QueryCalibrationState_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void QueryCalibrationState_Response__finalize_optional_members(
                QueryCalibrationState_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool QueryCalibrationState_Response__copy(
                QueryCalibrationState_Response_* dst,
                const QueryCalibrationState_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace control_msgs  */

#endif /* QueryCalibrationState_ */

