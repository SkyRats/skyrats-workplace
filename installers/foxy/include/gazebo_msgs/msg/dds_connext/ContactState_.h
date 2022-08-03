

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ContactState_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef ContactState__429277784_h
#define ContactState__429277784_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "geometry_msgs/msg/dds_connext/Vector3_.h"
#include "geometry_msgs/msg/dds_connext/Wrench_.h"
namespace gazebo_msgs {
    namespace msg {
        namespace dds_ {

            extern const char *ContactState_TYPENAME;

            struct ContactState_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class ContactState_TypeSupport;
            class ContactState_DataWriter;
            class ContactState_DataReader;
            #endif

            class ContactState_ 
            {
              public:
                typedef struct ContactState_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef ContactState_TypeSupport TypeSupport;
                typedef ContactState_DataWriter DataWriter;
                typedef ContactState_DataReader DataReader;
                #endif

                DDS_Char *   info_ ;
                DDS_Char *   collision1_name_ ;
                DDS_Char *   collision2_name_ ;
                geometry_msgs::msg::dds_::Wrench_Seq  wrenches_ ;
                geometry_msgs::msg::dds_::Wrench_   total_wrench_ ;
                geometry_msgs::msg::dds_::Vector3_Seq  contact_positions_ ;
                geometry_msgs::msg::dds_::Vector3_Seq  contact_normals_ ;
                DDS_DoubleSeq  depths_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* ContactState__get_typecode(void); /* Type code */

            DDS_SEQUENCE(ContactState_Seq, ContactState_);

            NDDSUSERDllExport
            RTIBool ContactState__initialize(
                ContactState_* self);

            NDDSUSERDllExport
            RTIBool ContactState__initialize_ex(
                ContactState_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool ContactState__initialize_w_params(
                ContactState_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void ContactState__finalize(
                ContactState_* self);

            NDDSUSERDllExport
            void ContactState__finalize_ex(
                ContactState_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void ContactState__finalize_w_params(
                ContactState_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void ContactState__finalize_optional_members(
                ContactState_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool ContactState__copy(
                ContactState_* dst,
                const ContactState_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace gazebo_msgs  */

#endif /* ContactState_ */

