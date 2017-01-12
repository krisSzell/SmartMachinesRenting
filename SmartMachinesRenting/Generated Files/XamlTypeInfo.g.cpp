﻿//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------
#include "pch.h"
#include "XamlTypeInfo.g.h"

#include "DetailView.xaml.h"
#include "DetailViewForRented.xaml.h"
#include "ForRentView.xaml.h"
#include "App.xaml.h"
#include "MainPage.xaml.h"
#include "RentedView.xaml.h"
#include "XamlBindingInfo.g.hpp"
#include "DetailView.g.hpp"
#include "DetailViewForRented.g.hpp"
#include "ForRentView.g.hpp"
#include "App.g.hpp"
#include "MainPage.g.hpp"
#include "RentedView.g.hpp"

template<typename T>
::Platform::Object^ ActivateType()
{
    return ref new T;
}

template<typename TInstance, typename TItem>
void CollectionAdd(::Platform::Object^ instance, ::Platform::Object^ item)
{
    safe_cast<TInstance^>(instance)->Append((TItem)item);
}

template<typename TInstance, typename TKey, typename TItem>
void DictionaryAdd(::Platform::Object^ instance, ::Platform::Object^ key, ::Platform::Object^ item)
{
    safe_cast<TInstance^>(instance)->Insert((TKey)key, (TItem)item);
}

template<typename T>
::Platform::Object^ FromStringConverter(::XamlTypeInfo::InfoProvider::XamlUserType^ userType, ::Platform::String^ input)
{
    return ref new ::Platform::Box<T>((T)userType->CreateEnumUIntFromString(input));
}

template<typename TDeclaringType, typename TValue>
::Platform::Object^ GetValueTypeMember_Availability(::Platform::Object^ instance)
{
    return ref new ::Platform::Box<TValue>(safe_cast<TDeclaringType^>(instance)->Availability);
}

template<typename TDeclaringType, typename TValue>
::Platform::Object^ GetValueTypeMember_TankCapacity(::Platform::Object^ instance)
{
    return ref new ::Platform::Box<TValue>(safe_cast<TDeclaringType^>(instance)->TankCapacity);
}

template<typename TDeclaringType>
::Platform::Object^ GetReferenceTypeMember_SentDigger(::Platform::Object^ instance)
{
    return safe_cast<TDeclaringType^>(instance)->SentDigger;
}

template<typename TDeclaringType>
::Platform::Object^ GetReferenceTypeMember_DiggerToPass(::Platform::Object^ instance)
{
    return safe_cast<TDeclaringType^>(instance)->DiggerToPass;
}

template<typename TDeclaringType>
::Platform::Object^ GetReferenceTypeMember_Diggers(::Platform::Object^ instance)
{
    return safe_cast<TDeclaringType^>(instance)->Diggers;
}

template<typename TDeclaringType>
::Platform::Object^ GetReferenceTypeMember_EngineState(::Platform::Object^ instance)
{
    return safe_cast<TDeclaringType^>(instance)->EngineState;
}

template<typename TDeclaringType>
::Platform::Object^ GetReferenceTypeMember_Description(::Platform::Object^ instance)
{
    return safe_cast<TDeclaringType^>(instance)->Description;
}

template<typename TDeclaringType>
::Platform::Object^ GetReferenceTypeMember_Status(::Platform::Object^ instance)
{
    return safe_cast<TDeclaringType^>(instance)->Status;
}

template<typename TDeclaringType>
::Platform::Object^ GetReferenceTypeMember_ImgUrl(::Platform::Object^ instance)
{
    return safe_cast<TDeclaringType^>(instance)->ImgUrl;
}

template<typename TDeclaringType>
::Platform::Object^ GetReferenceTypeMember_Model(::Platform::Object^ instance)
{
    return safe_cast<TDeclaringType^>(instance)->Model;
}

template<typename TDeclaringType>
::Platform::Object^ GetReferenceTypeMember_Name(::Platform::Object^ instance)
{
    return safe_cast<TDeclaringType^>(instance)->Name;
}

template<typename TDeclaringType>
::Platform::Object^ GetReferenceTypeMember_RentedMachines(::Platform::Object^ instance)
{
    return safe_cast<TDeclaringType^>(instance)->RentedMachines;
}

template<typename TDeclaringType, typename TValue>
void SetValueTypeMember_Availability(::Platform::Object^ instance, ::Platform::Object^ value)
{
    safe_cast<TDeclaringType^>(instance)->Availability = safe_cast<::Platform::IBox<TValue>^>(value)->Value;
}

template<typename TDeclaringType, typename TValue>
void SetReferenceTypeMember_SentDigger(::Platform::Object^ instance, ::Platform::Object^ value)
{
    safe_cast<TDeclaringType^>(instance)->SentDigger = safe_cast<TValue^>(value);
}

template<typename TDeclaringType, typename TValue>
void SetReferenceTypeMember_DiggerToPass(::Platform::Object^ instance, ::Platform::Object^ value)
{
    safe_cast<TDeclaringType^>(instance)->DiggerToPass = safe_cast<TValue^>(value);
}

struct TypeInfo
{
    PCWSTR  typeName;
    PCWSTR contentPropertyName;
    ::Platform::Object^ (*activator)();
    void (*collectionAdd)(::Platform::Object^, ::Platform::Object^);
    void (*dictionaryAdd)(::Platform::Object^, ::Platform::Object^, ::Platform::Object^);
    ::Platform::Object^ (*fromStringConverter)(::XamlTypeInfo::InfoProvider::XamlUserType^, ::Platform::String^);
    int     baseTypeIndex;
    int     firstMemberIndex;
    int     firstEnumValueIndex;
    ::Windows::UI::Xaml::Interop::TypeKind kindofType;
    bool    isLocalType;
    bool    isSystemType;
    bool    isReturnTypeStub;
    bool    isBindable;
};

TypeInfo TypeInfos[] = 
{
    //   0
    L"Object", L"",
    nullptr, nullptr, nullptr, nullptr,
    -1,
    0, 0, ::Windows::UI::Xaml::Interop::TypeKind::Metadata,
    false, true,  false, false,
    //   1
    L"String", L"",
    nullptr, nullptr, nullptr, nullptr,
    -1,
    0, 0, ::Windows::UI::Xaml::Interop::TypeKind::Metadata,
    false, true,  false, false,
    //   2
    L"Double", L"",
    nullptr, nullptr, nullptr, nullptr,
    -1,
    0, 0, ::Windows::UI::Xaml::Interop::TypeKind::Metadata,
    false, true,  false, false,
    //   3
    L"Boolean", L"",
    nullptr, nullptr, nullptr, nullptr,
    -1,
    0, 0, ::Windows::UI::Xaml::Interop::TypeKind::Metadata,
    false, true,  false, false,
    //   4
    L"SmartMachinesRenting.Digger", L"",
    &ActivateType<::SmartMachinesRenting::Digger>, nullptr, nullptr, nullptr,
    0, // Object
    0, 0, ::Windows::UI::Xaml::Interop::TypeKind::Custom,
    true,  false, false, true, 
    //   5
    L"Windows.UI.Xaml.Controls.Page", L"",
    nullptr, nullptr, nullptr, nullptr,
    -1,
    8, 0, ::Windows::UI::Xaml::Interop::TypeKind::Metadata,
    false, true,  false, false,
    //   6
    L"SmartMachinesRenting.MainPage", L"",
    &ActivateType<::SmartMachinesRenting::MainPage>, nullptr, nullptr, nullptr,
    5, // Windows.UI.Xaml.Controls.Page
    8, 0, ::Windows::UI::Xaml::Interop::TypeKind::Custom,
    true,  false, false, false,
    //   7
    L"SmartMachinesRenting.DetailView", L"",
    &ActivateType<::SmartMachinesRenting::DetailView>, nullptr, nullptr, nullptr,
    5, // Windows.UI.Xaml.Controls.Page
    8, 0, ::Windows::UI::Xaml::Interop::TypeKind::Custom,
    true,  false, false, false,
    //   8
    L"SmartMachinesRenting.RentedView", L"",
    &ActivateType<::SmartMachinesRenting::RentedView>, nullptr, nullptr, nullptr,
    5, // Windows.UI.Xaml.Controls.Page
    9, 0, ::Windows::UI::Xaml::Interop::TypeKind::Custom,
    true,  false, false, false,
    //   9
    L"SmartMachinesRenting.ForRentView", L"",
    &ActivateType<::SmartMachinesRenting::ForRentView>, nullptr, nullptr, nullptr,
    5, // Windows.UI.Xaml.Controls.Page
    11, 0, ::Windows::UI::Xaml::Interop::TypeKind::Custom,
    true,  false, false, false,
    //  10
    L"Windows.UI.Xaml.Controls.UserControl", L"",
    nullptr, nullptr, nullptr, nullptr,
    -1,
    13, 0, ::Windows::UI::Xaml::Interop::TypeKind::Metadata,
    false, true,  false, false,
    //  11
    L"SmartMachinesRenting.DetailViewForRented", L"",
    &ActivateType<::SmartMachinesRenting::DetailViewForRented>, nullptr, nullptr, nullptr,
    5, // Windows.UI.Xaml.Controls.Page
    13, 0, ::Windows::UI::Xaml::Interop::TypeKind::Custom,
    true,  false, false, false,
    //  12
    L"Windows.Foundation.Collections.IVector`1<SmartMachinesRenting.Digger>", L"",
    nullptr, &CollectionAdd<::Windows::Foundation::Collections::IVector<::SmartMachinesRenting::Digger^>, ::SmartMachinesRenting::Digger^>, nullptr, nullptr,
    -1,
    14, 0, ::Windows::UI::Xaml::Interop::TypeKind::Metadata,
    false, false, true,  false,
    //  Last type here is for padding
    L"", L"",
    nullptr, nullptr, nullptr, nullptr,
    -1, 
    14, 0,::Windows::UI::Xaml::Interop::TypeKind::Custom,
    false, false, false, false,
};

UINT TypeInfoLookup[] = { 
      0,   //   0
      0,   //   1
      0,   //   2
      0,   //   3
      0,   //   4
      0,   //   5
      0,   //   6
      3,   //   7
      4,   //   8
      4,   //   9
      4,   //  10
      4,   //  11
      4,   //  12
      4,   //  13
      4,   //  14
      4,   //  15
      4,   //  16
      4,   //  17
      4,   //  18
      4,   //  19
      4,   //  20
      4,   //  21
      4,   //  22
      4,   //  23
      4,   //  24
      4,   //  25
      4,   //  26
      4,   //  27
      5,   //  28
      5,   //  29
      7,   //  30
      7,   //  31
      9,   //  32
     10,   //  33
     10,   //  34
     10,   //  35
     10,   //  36
     11,   //  37
     11,   //  38
     11,   //  39
     11,   //  40
     12,   //  41
     12,   //  42
     12,   //  43
     12,   //  44
     12,   //  45
     12,   //  46
     12,   //  47
     12,   //  48
     12,   //  49
     12,   //  50
     12,   //  51
     12,   //  52
     12,   //  53
     12,   //  54
     12,   //  55
     12,   //  56
     12,   //  57
     12,   //  58
     12,   //  59
     12,   //  60
     12,   //  61
     12,   //  62
     12,   //  63
     12,   //  64
     12,   //  65
     12,   //  66
     12,   //  67
     12,   //  68
     12,   //  69
     13,   //  70
};

struct MemberInfo 
{
    PCWSTR shortName;
    ::Platform::Object^ (*getter)(::Platform::Object^);
    void (*setter)(::Platform::Object^, ::Platform::Object^);
    int typeIndex;
    int targetTypeIndex;
    bool isReadOnly;
    bool isDependencyProperty;
    bool isAttachable;
};

MemberInfo MemberInfos[] = 
{
    //   0 - SmartMachinesRenting.Digger.Availability
    L"Availability",
    &GetValueTypeMember_Availability<::SmartMachinesRenting::Digger, ::Platform::Boolean>,
    &SetValueTypeMember_Availability<::SmartMachinesRenting::Digger, ::Platform::Boolean>,
    3, // Boolean
    -1,
    false, false, false,
    //   1 - SmartMachinesRenting.Digger.EngineState
    L"EngineState",
    &GetReferenceTypeMember_EngineState<::SmartMachinesRenting::Digger>,
    nullptr,
    1, // String
    -1,
    true,  false, false,
    //   2 - SmartMachinesRenting.Digger.TankCapacity
    L"TankCapacity",
    &GetValueTypeMember_TankCapacity<::SmartMachinesRenting::Digger, ::default::float64>,
    nullptr,
    2, // Double
    -1,
    true,  false, false,
    //   3 - SmartMachinesRenting.Digger.Description
    L"Description",
    &GetReferenceTypeMember_Description<::SmartMachinesRenting::Digger>,
    nullptr,
    1, // String
    -1,
    true,  false, false,
    //   4 - SmartMachinesRenting.Digger.Status
    L"Status",
    &GetReferenceTypeMember_Status<::SmartMachinesRenting::Digger>,
    nullptr,
    1, // String
    -1,
    true,  false, false,
    //   5 - SmartMachinesRenting.Digger.ImgUrl
    L"ImgUrl",
    &GetReferenceTypeMember_ImgUrl<::SmartMachinesRenting::Digger>,
    nullptr,
    1, // String
    -1,
    true,  false, false,
    //   6 - SmartMachinesRenting.Digger.Model
    L"Model",
    &GetReferenceTypeMember_Model<::SmartMachinesRenting::Digger>,
    nullptr,
    1, // String
    -1,
    true,  false, false,
    //   7 - SmartMachinesRenting.Digger.Name
    L"Name",
    &GetReferenceTypeMember_Name<::SmartMachinesRenting::Digger>,
    nullptr,
    1, // String
    -1,
    true,  false, false,
    //   8 - SmartMachinesRenting.DetailView.SentDigger
    L"SentDigger",
    &GetReferenceTypeMember_SentDigger<::SmartMachinesRenting::DetailView>,
    &SetReferenceTypeMember_SentDigger<::SmartMachinesRenting::DetailView, ::SmartMachinesRenting::Digger>,
    4, // SmartMachinesRenting.Digger
    -1,
    false, false, false,
    //   9 - SmartMachinesRenting.RentedView.DiggerToPass
    L"DiggerToPass",
    &GetReferenceTypeMember_DiggerToPass<::SmartMachinesRenting::RentedView>,
    &SetReferenceTypeMember_DiggerToPass<::SmartMachinesRenting::RentedView, ::SmartMachinesRenting::Digger>,
    4, // SmartMachinesRenting.Digger
    -1,
    false, false, false,
    //  10 - SmartMachinesRenting.RentedView.RentedMachines
    L"RentedMachines",
    &GetReferenceTypeMember_RentedMachines<::SmartMachinesRenting::RentedView>,
    nullptr,
    12, // Windows.Foundation.Collections.IVector`1<SmartMachinesRenting.Digger>
    -1,
    true,  false, false,
    //  11 - SmartMachinesRenting.ForRentView.DiggerToPass
    L"DiggerToPass",
    &GetReferenceTypeMember_DiggerToPass<::SmartMachinesRenting::ForRentView>,
    &SetReferenceTypeMember_DiggerToPass<::SmartMachinesRenting::ForRentView, ::SmartMachinesRenting::Digger>,
    4, // SmartMachinesRenting.Digger
    -1,
    false, false, false,
    //  12 - SmartMachinesRenting.ForRentView.Diggers
    L"Diggers",
    &GetReferenceTypeMember_Diggers<::SmartMachinesRenting::ForRentView>,
    nullptr,
    12, // Windows.Foundation.Collections.IVector`1<SmartMachinesRenting.Digger>
    -1,
    true,  false, false,
    //  13 - SmartMachinesRenting.DetailViewForRented.SentDigger
    L"SentDigger",
    &GetReferenceTypeMember_SentDigger<::SmartMachinesRenting::DetailViewForRented>,
    &SetReferenceTypeMember_SentDigger<::SmartMachinesRenting::DetailViewForRented, ::SmartMachinesRenting::Digger>,
    4, // SmartMachinesRenting.Digger
    -1,
    false, false, false,
};

PCWSTR GetShortName(PCWSTR longName)
{
    PCWSTR separator = wcsrchr(longName, '.');
    return separator != nullptr ? separator + 1: longName;
}

TypeInfo* GetTypeInfo(::Platform::String^ typeName)
{
    int typeNameLength = typeName->Length();
    if (typeNameLength < _countof(TypeInfoLookup) - 1)
    {
        for (UINT i = TypeInfoLookup[typeNameLength]; i < TypeInfoLookup[typeNameLength+1]; i++)
        {
            if (typeName == ::Platform::StringReference(TypeInfos[i].typeName))
            {
                return &TypeInfos[i];
            }
        }
    }
    return nullptr;
}

MemberInfo* GetMemberInfo(::Platform::String^ longMemberName)
{
    for (int lastDotIndex = longMemberName->Length(); lastDotIndex >= 0; lastDotIndex--)
    {
        if (longMemberName->Data()[lastDotIndex] == '.')
        {
            TypeInfo* pTypeInfo = GetTypeInfo(ref new ::Platform::String(longMemberName->Data(), lastDotIndex));
            TypeInfo* pNextTypeInfo = pTypeInfo + 1;
            if (pTypeInfo)
            {
                PCWSTR shortMemberName = GetShortName(longMemberName->Data());
                for (int i = pTypeInfo->firstMemberIndex; i < pNextTypeInfo->firstMemberIndex; i++)
                {
                    if (wcscmp(shortMemberName, MemberInfos[i].shortName) == 0)
                    {
                        return &MemberInfos[i];
                    }
                }
            }
            break;
        }
    }
    return nullptr;
}

::Platform::Collections::Vector<::Windows::UI::Xaml::Markup::IXamlMetadataProvider^>^ ::XamlTypeInfo::InfoProvider::XamlTypeInfoProvider::OtherProviders::get()
{
    if(_otherProviders == nullptr)
    {
        auto otherProviders = ref new ::Platform::Collections::Vector<::Windows::UI::Xaml::Markup::IXamlMetadataProvider^>();
        _otherProviders = otherProviders;
    }
    return _otherProviders;
}

::Windows::UI::Xaml::Markup::IXamlType^ ::XamlTypeInfo::InfoProvider::XamlTypeInfoProvider::CreateXamlType(::Platform::String^ typeName)
{
    TypeInfo* pTypeInfo = GetTypeInfo(typeName);
    TypeInfo* pNextTypeInfo = pTypeInfo + 1;
    if (pTypeInfo == nullptr || pNextTypeInfo == nullptr)
    {
        return nullptr;
    }
    else if (pTypeInfo->isSystemType)
    {
        return ref new ::XamlTypeInfo::InfoProvider::XamlSystemBaseType(typeName);
    }
    else
    {
        ::XamlTypeInfo::InfoProvider::XamlUserType^ userType = ref new ::XamlTypeInfo::InfoProvider::XamlUserType(
            this, 
            ::Platform::StringReference(pTypeInfo->typeName), 
            this->GetXamlTypeByName(::Platform::StringReference(pTypeInfo->baseTypeIndex >= 0 ? TypeInfos[pTypeInfo->baseTypeIndex].typeName : L"")));
        userType->KindOfType = pTypeInfo->kindofType;
        userType->Activator = pTypeInfo->activator;
        userType->CollectionAdd = pTypeInfo->collectionAdd;
        userType->DictionaryAdd = pTypeInfo->dictionaryAdd;
        userType->FromStringConverter = pTypeInfo->fromStringConverter;
        userType->ContentPropertyName = ::Platform::StringReference(pTypeInfo->contentPropertyName);
        userType->IsLocalType = pTypeInfo->isLocalType;
        userType->IsReturnTypeStub = pTypeInfo->isReturnTypeStub;
        userType->IsBindable = pTypeInfo->isBindable;
        int nextMemberIndex = pTypeInfo->firstMemberIndex;
        for (int i=pTypeInfo->firstMemberIndex; i < pNextTypeInfo->firstMemberIndex; i++)
        {
            userType->AddMemberName(::Platform::StringReference(MemberInfos[i].shortName));
            nextMemberIndex++;
        }
        return userType;
    }
}

::Windows::UI::Xaml::Markup::IXamlMember^ ::XamlTypeInfo::InfoProvider::XamlTypeInfoProvider::CreateXamlMember(::Platform::String^ longMemberName)
{
    ::XamlTypeInfo::InfoProvider::XamlMember^ xamlMember = nullptr;
    MemberInfo* pMemberInfo = GetMemberInfo(longMemberName);
    if (pMemberInfo != nullptr)
    {
        xamlMember = ref new ::XamlTypeInfo::InfoProvider::XamlMember(
            this,
            ::Platform::StringReference(pMemberInfo->shortName),
            ::Platform::StringReference(TypeInfos[pMemberInfo->typeIndex].typeName));
        xamlMember->Getter = pMemberInfo->getter;
        xamlMember->Setter = pMemberInfo->setter;
        xamlMember->TargetTypeName = pMemberInfo->targetTypeIndex >= 0 ? ::Platform::StringReference(TypeInfos[pMemberInfo->targetTypeIndex].typeName) : L"";
        xamlMember->IsReadOnly = pMemberInfo->isReadOnly;
        xamlMember->IsDependencyProperty = pMemberInfo->isDependencyProperty;
        xamlMember->IsAttachable = pMemberInfo->isAttachable;
    }
    return xamlMember;
}
