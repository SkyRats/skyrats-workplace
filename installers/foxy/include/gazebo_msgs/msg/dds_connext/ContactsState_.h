

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ContactsState_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef ContactsState__1442803488_h
#define ContactsState__1442803488_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "gazebo_msgs/msg/dds_connext/ContactState_.h"
#include "std_msgs/msg/dds_connext/Header_.h"
namespace gazebo_msgs {
    namespace msg {
        namespace dds_ {

            extern const char *ContactsState_TYPENAME;

            struct ContactsState_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class ContactsState_TypeSupport;
            class ContactsState_DataWriter;
            class ContactsState_DataReader;
            #endif

            class ContactsState_ 
            {
              public:
                typedef struct ContactsState_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef ContactsState_TypeSupport TypeSupport;
                typedef ContactsState_DataWriter DataWriter;
                typedef ContactsState_DataReader DataReader;
                #endif

                std_msgs::msg::dds_::Header_   header_ ;
                gazebo_msgs::msg::dds_::ContactState_Seq  states_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* ContactsState__get_typecode(void); /* Type code */

            DDS_SEQUENCE(ContactsState_Seq, ContactsState_);

            NDDSUSERDllExport
            RTIBool ContactsState__initialize(
                ContactsState_* self);

            NDDSUSERDllExport
            RTIBool ContactsState__initialize_ex(
                ContactsState_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool ContactsState__initialize_w_params(
                ContactsState_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void ContactsState__finalize(
                ContactsState_* self);

            NDDSUSERDllExport
            void ContactsState__finalize_ex(
                ContactsState_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void ContactsState__finalize_w_params(
                ContactsState_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void ContactsState__finalize_optional_members(
                ContactsState_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool ContactsState__copy(
                ContactsState_* dst,
                const ContactsState_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace gazebo_msgs  */

#endif /* ContactsState_ */

