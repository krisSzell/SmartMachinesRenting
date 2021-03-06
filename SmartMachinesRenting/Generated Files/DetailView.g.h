﻿#pragma once
//------------------------------------------------------------------------------
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
//------------------------------------------------------------------------------

#include "XamlBindingInfo.g.h"

namespace Windows {
    namespace UI {
        namespace Xaml {
            namespace Controls {
                ref class ProgressRing;
                ref class StackPanel;
                ref class Image;
                ref class TextBlock;
                ref class Border;
                ref class SymbolIcon;
            }
        }
    }
}

namespace SmartMachinesRenting
{
    [::Windows::Foundation::Metadata::WebHostHidden]
    partial ref class DetailView : public ::Windows::UI::Xaml::Controls::Page, 
        public ::Windows::UI::Xaml::Markup::IComponentConnector,
        public ::Windows::UI::Xaml::Markup::IComponentConnector2
    {
    public:
        void InitializeComponent();
        virtual void Connect(int connectionId, ::Platform::Object^ target);
        virtual ::Windows::UI::Xaml::Markup::IComponentConnector^ GetBindingConnector(int connectionId, ::Platform::Object^ target);
    
    private:
        bool _contentLoaded;
        class DetailView_obj1_Bindings;
    
        ::XamlBindingInfo::XamlBindings^ Bindings;
        private: ::Windows::UI::Xaml::Controls::ProgressRing^ PageLoadingProgressRing;
        private: ::Windows::UI::Xaml::Controls::StackPanel^ ContentStackPanel;
        private: ::Windows::UI::Xaml::Controls::Image^ imgDigger;
        private: ::Windows::UI::Xaml::Controls::TextBlock^ txtModel;
        private: ::Windows::UI::Xaml::Controls::TextBlock^ txtDescription;
        private: ::Windows::UI::Xaml::Controls::TextBlock^ txtAvailability;
        private: ::Windows::UI::Xaml::Controls::Border^ borderAvailability;
        private: ::Windows::UI::Xaml::Controls::SymbolIcon^ iconAvailability;
        private: ::Windows::UI::Xaml::Controls::TextBlock^ txtTank;
    };
}

