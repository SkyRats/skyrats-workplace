

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from TransitionDescription_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef TransitionDescription__1881353564_h
#define TransitionDescription__1881353564_h

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

            extern const char *TransitionDescription_TYPENAME;

            struct TransitionDescription_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class TransitionDescription_TypeSupport;
            class TransitionDescription_DataWriter;
            class TransitionDescription_DataReader;
            #endif

            class TransitionDescription_ 
            {
              public:
                typedef struct TransitionDescription_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef TransitionDescription_TypeSupport TypeSupport;
                typedef TransitionDescription_DataWriter DataWriter;
                typedef TransitionDescription_DataReader DataReader;
                #endif

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

            NDDSUSERDllExport DDS_TypeCode* TransitionDescription__get_typecode(void); /* Type code */

            DDS_SEQUENCE(TransitionDescription_Seq, TransitionDescription_);

            NDDSUSERDllExport
            RTIBool TransitionDescription__initialize(
                TransitionDescription_* self);

            NDDSUSERDllExport
            RTIBool TransitionDescription__initialize_ex(
                TransitionDescription_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool TransitionDescription__initialize_w_params(
                TransitionDescription_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void TransitionDescription__finalize(
                TransitionDescription_* self);

            NDDSUSERDllExport
            void TransitionDescription__finalize_ex(
                TransitionDescription_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void TransitionDescription__finalize_w_params(
                TransitionDescription_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void TransitionDescription__finalize_optional_members(
                TransitionDescription_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool TransitionDescription__copy(
                TransitionDescription_* dst,
                const TransitionDescription_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace lifecycle_msgs  */

#endif /* TransitionDescription_ */

