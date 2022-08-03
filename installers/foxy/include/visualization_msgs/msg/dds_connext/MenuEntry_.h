

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from MenuEntry_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef MenuEntry__1708096787_h
#define MenuEntry__1708096787_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

namespace visualization_msgs {
    namespace msg {
        namespace dds_ {
            namespace MenuEntry_Constants {
                static const DDS_Octet FEEDBACK_= 0;
                static const DDS_Octet ROSRUN_= 1;
                static const DDS_Octet ROSLAUNCH_= 2;
            } /* namespace MenuEntry_Constants  */

            extern const char *MenuEntry_TYPENAME;

            struct MenuEntry_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class MenuEntry_TypeSupport;
            class MenuEntry_DataWriter;
            class MenuEntry_DataReader;
            #endif

            class MenuEntry_ 
            {
              public:
                typedef struct MenuEntry_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef MenuEntry_TypeSupport TypeSupport;
                typedef MenuEntry_DataWriter DataWriter;
                typedef MenuEntry_DataReader DataReader;
                #endif

                DDS_UnsignedLong   id_ ;
                DDS_UnsignedLong   parent_id_ ;
                DDS_Char *   title_ ;
                DDS_Char *   command_ ;
                DDS_Octet   command_type_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* MenuEntry__get_typecode(void); /* Type code */

            DDS_SEQUENCE(MenuEntry_Seq, MenuEntry_);

            NDDSUSERDllExport
            RTIBool MenuEntry__initialize(
                MenuEntry_* self);

            NDDSUSERDllExport
            RTIBool MenuEntry__initialize_ex(
                MenuEntry_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool MenuEntry__initialize_w_params(
                MenuEntry_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void MenuEntry__finalize(
                MenuEntry_* self);

            NDDSUSERDllExport
            void MenuEntry__finalize_ex(
                MenuEntry_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void MenuEntry__finalize_w_params(
                MenuEntry_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void MenuEntry__finalize_optional_members(
                MenuEntry_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool MenuEntry__copy(
                MenuEntry_* dst,
                const MenuEntry_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace visualization_msgs  */

#endif /* MenuEntry_ */

