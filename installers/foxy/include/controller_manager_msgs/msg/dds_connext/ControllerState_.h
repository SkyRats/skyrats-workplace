

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ControllerState_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef ControllerState__505264882_h
#define ControllerState__505264882_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

namespace controller_manager_msgs {
    namespace msg {
        namespace dds_ {

            extern const char *ControllerState_TYPENAME;

            struct ControllerState_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class ControllerState_TypeSupport;
            class ControllerState_DataWriter;
            class ControllerState_DataReader;
            #endif

            class ControllerState_ 
            {
              public:
                typedef struct ControllerState_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef ControllerState_TypeSupport TypeSupport;
                typedef ControllerState_DataWriter DataWriter;
                typedef ControllerState_DataReader DataReader;
                #endif

                DDS_Char *   name_ ;
                DDS_Char *   state_ ;
                DDS_Char *   type_ ;
                DDS_StringSeq  claimed_interfaces_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* ControllerState__get_typecode(void); /* Type code */

            DDS_SEQUENCE(ControllerState_Seq, ControllerState_);

            NDDSUSERDllExport
            RTIBool ControllerState__initialize(
                ControllerState_* self);

            NDDSUSERDllExport
            RTIBool ControllerState__initialize_ex(
                ControllerState_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool ControllerState__initialize_w_params(
                ControllerState_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void ControllerState__finalize(
                ControllerState_* self);

            NDDSUSERDllExport
            void ControllerState__finalize_ex(
                ControllerState_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void ControllerState__finalize_w_params(
                ControllerState_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void ControllerState__finalize_optional_members(
                ControllerState_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool ControllerState__copy(
                ControllerState_* dst,
                const ControllerState_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace controller_manager_msgs  */

#endif /* ControllerState_ */

