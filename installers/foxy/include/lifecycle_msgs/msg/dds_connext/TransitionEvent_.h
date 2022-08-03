

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from TransitionEvent_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef TransitionEvent__413790389_h
#define TransitionEvent__413790389_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "lifecycle_msgs/msg/dds_connext/State_.h"
#include "lifecycle_msgs/msg/dds_connext/Transition_.h"
namespace lifecycle_msgs {
    namespace msg {
        namespace dds_ {

            extern const char *TransitionEvent_TYPENAME;

            struct TransitionEvent_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class TransitionEvent_TypeSupport;
            class TransitionEvent_DataWriter;
            class TransitionEvent_DataReader;
            #endif

            class TransitionEvent_ 
            {
              public:
                typedef struct TransitionEvent_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef TransitionEvent_TypeSupport TypeSupport;
                typedef TransitionEvent_DataWriter DataWriter;
                typedef TransitionEvent_DataReader DataReader;
                #endif

                DDS_UnsignedLongLong   timestamp_ ;
                lifecycle_msgs::msg::dds_::Transition_   transition_ ;
                lifecycle_msgs::msg::dds_::State_   start_state_ ;
                lifecycle_msgs::msg::dds_::State_   goal_state_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* TransitionEvent__get_typecode(void); /* Type code */

            DDS_SEQUENCE(TransitionEvent_Seq, TransitionEvent_);

            NDDSUSERDllExport
            RTIBool TransitionEvent__initialize(
                TransitionEvent_* self);

            NDDSUSERDllExport
            RTIBool TransitionEvent__initialize_ex(
                TransitionEvent_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool TransitionEvent__initialize_w_params(
                TransitionEvent_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void TransitionEvent__finalize(
                TransitionEvent_* self);

            NDDSUSERDllExport
            void TransitionEvent__finalize_ex(
                TransitionEvent_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void TransitionEvent__finalize_w_params(
                TransitionEvent_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void TransitionEvent__finalize_optional_members(
                TransitionEvent_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool TransitionEvent__copy(
                TransitionEvent_* dst,
                const TransitionEvent_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace lifecycle_msgs  */

#endif /* TransitionEvent_ */

