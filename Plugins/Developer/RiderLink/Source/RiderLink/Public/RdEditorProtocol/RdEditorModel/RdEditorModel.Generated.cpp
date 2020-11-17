//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a RdGen v1.07.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------
#include "RdEditorModel.Generated.h"


#include "../RdEditorRoot/RdEditorRoot.Generated.h"
#pragma warning( push )
#pragma warning( disable:4250 )
#pragma warning( disable:4307 )
#pragma warning( disable:4267 )
#pragma warning( disable:4244 )
#pragma warning( disable:4100 )
namespace Jetbrains {
    namespace EditorPlugin {
        
        //companion
        
        RdEditorModel::RdEditorModelSerializersOwner const RdEditorModel::serializersOwner;
        
        void RdEditorModel::RdEditorModelSerializersOwner::registerSerializersCore(rd::Serializers const& serializers) const
        {
        }
        
        void RdEditorModel::connect(rd::Lifetime lifetime, rd::IProtocol const * protocol)
        {
            RdEditorRoot::serializersOwner.registry(protocol->get_serializers());
            
            identify(*(protocol->get_identity()), rd::RdId::Null().mix("RdEditorModel"));
            bind(lifetime, protocol, "RdEditorModel");
        }
        
        
        //constants
        
        //initializer
        void RdEditorModel::initialize()
        {
            playMode_.optimize_nested = true;
            unrealLog_.async = true;
            onBlueprintAdded_.async = true;
            serializationHash = -1569663499128468552L;
        }
        
        //primary ctor
        RdEditorModel::RdEditorModel(rd::RdSignal<UnrealLogEvent, rd::Polymorphic<UnrealLogEvent>> unrealLog_, rd::RdProperty<int32_t, rd::Polymorphic<int32_t>> playMode_, rd::RdSignal<rd::Void, rd::Polymorphic<rd::Void>> frameSkip_, rd::RdSignal<BlueprintReference, rd::Polymorphic<BlueprintReference>> openBlueprint_, rd::RdSignal<UClass, rd::Polymorphic<UClass>> onBlueprintAdded_, rd::RdEndpoint<FString, bool, rd::Polymorphic<FString>, rd::Polymorphic<bool>> isBlueprintPathName_, rd::RdEndpoint<FString, rd::optional<FString>, rd::Polymorphic<FString>, RdEditorModel::__FStringNullableSerializer> getPathNameByPath_, rd::RdCall<int32_t, bool, rd::Polymorphic<int32_t>, rd::Polymorphic<bool>> allowSetForegroundWindow_, rd::RdSignal<PlayState, rd::Polymorphic<PlayState>> playStateFromEditor_, rd::RdSignal<PlayState, rd::Polymorphic<PlayState>> playStateFromRider_) :
        rd::RdExtBase()
        ,unrealLog_(std::move(unrealLog_)), playMode_(std::move(playMode_)), frameSkip_(std::move(frameSkip_)), openBlueprint_(std::move(openBlueprint_)), onBlueprintAdded_(std::move(onBlueprintAdded_)), isBlueprintPathName_(std::move(isBlueprintPathName_)), getPathNameByPath_(std::move(getPathNameByPath_)), allowSetForegroundWindow_(std::move(allowSetForegroundWindow_)), playStateFromEditor_(std::move(playStateFromEditor_)), playStateFromRider_(std::move(playStateFromRider_))
        {
            initialize();
        }
        
        //secondary constructor
        
        //default ctors and dtors
        RdEditorModel::RdEditorModel()
        {
            initialize();
        }
        
        //reader
        
        //writer
        
        //virtual init
        void RdEditorModel::init(rd::Lifetime lifetime) const
        {
            rd::RdExtBase::init(lifetime);
            bindPolymorphic(unrealLog_, lifetime, this, "unrealLog");
            bindPolymorphic(playMode_, lifetime, this, "playMode");
            bindPolymorphic(frameSkip_, lifetime, this, "frameSkip");
            bindPolymorphic(openBlueprint_, lifetime, this, "openBlueprint");
            bindPolymorphic(onBlueprintAdded_, lifetime, this, "onBlueprintAdded");
            bindPolymorphic(isBlueprintPathName_, lifetime, this, "isBlueprintPathName");
            bindPolymorphic(getPathNameByPath_, lifetime, this, "getPathNameByPath");
            bindPolymorphic(allowSetForegroundWindow_, lifetime, this, "allowSetForegroundWindow");
            bindPolymorphic(playStateFromEditor_, lifetime, this, "playStateFromEditor");
            bindPolymorphic(playStateFromRider_, lifetime, this, "playStateFromRider");
        }
        
        //identify
        void RdEditorModel::identify(const rd::Identities &identities, rd::RdId const &id) const
        {
            rd::RdBindableBase::identify(identities, id);
            identifyPolymorphic(unrealLog_, identities, id.mix(".unrealLog"));
            identifyPolymorphic(playMode_, identities, id.mix(".playMode"));
            identifyPolymorphic(frameSkip_, identities, id.mix(".frameSkip"));
            identifyPolymorphic(openBlueprint_, identities, id.mix(".openBlueprint"));
            identifyPolymorphic(onBlueprintAdded_, identities, id.mix(".onBlueprintAdded"));
            identifyPolymorphic(isBlueprintPathName_, identities, id.mix(".isBlueprintPathName"));
            identifyPolymorphic(getPathNameByPath_, identities, id.mix(".getPathNameByPath"));
            identifyPolymorphic(allowSetForegroundWindow_, identities, id.mix(".allowSetForegroundWindow"));
            identifyPolymorphic(playStateFromEditor_, identities, id.mix(".playStateFromEditor"));
            identifyPolymorphic(playStateFromRider_, identities, id.mix(".playStateFromRider"));
        }
        
        //getters
        rd::ISignal<UnrealLogEvent> const & RdEditorModel::get_unrealLog() const
        {
            return unrealLog_;
        }
        rd::IProperty<int32_t> const & RdEditorModel::get_playMode() const
        {
            return playMode_;
        }
        rd::ISource<rd::Void> const & RdEditorModel::get_frameSkip() const
        {
            return frameSkip_;
        }
        rd::ISignal<BlueprintReference> const & RdEditorModel::get_openBlueprint() const
        {
            return openBlueprint_;
        }
        rd::ISignal<UClass> const & RdEditorModel::get_onBlueprintAdded() const
        {
            return onBlueprintAdded_;
        }
        rd::RdEndpoint<FString, bool, rd::Polymorphic<FString>, rd::Polymorphic<bool>> const & RdEditorModel::get_isBlueprintPathName() const
        {
            return isBlueprintPathName_;
        }
        rd::RdEndpoint<FString, rd::optional<FString>, rd::Polymorphic<FString>, RdEditorModel::__FStringNullableSerializer> const & RdEditorModel::get_getPathNameByPath() const
        {
            return getPathNameByPath_;
        }
        rd::RdCall<int32_t, bool, rd::Polymorphic<int32_t>, rd::Polymorphic<bool>> const & RdEditorModel::get_allowSetForegroundWindow() const
        {
            return allowSetForegroundWindow_;
        }
        rd::ISignal<PlayState> const & RdEditorModel::get_playStateFromEditor() const
        {
            return playStateFromEditor_;
        }
        rd::ISource<PlayState> const & RdEditorModel::get_playStateFromRider() const
        {
            return playStateFromRider_;
        }
        
        //intern
        
        //equals trait
        
        //equality operators
        bool operator==(const RdEditorModel &lhs, const RdEditorModel &rhs) {
            return &lhs == &rhs;
        };
        bool operator!=(const RdEditorModel &lhs, const RdEditorModel &rhs){
            return !(lhs == rhs);
        }
        
        //hash code trait
        
        //type name trait
        
        //static type name trait
        
        //polymorphic to string
        std::string RdEditorModel::toString() const
        {
            std::string res = "RdEditorModel\n";
            res += "\tunrealLog = ";
            res += rd::to_string(unrealLog_);
            res += '\n';
            res += "\tplayMode = ";
            res += rd::to_string(playMode_);
            res += '\n';
            res += "\tframeSkip = ";
            res += rd::to_string(frameSkip_);
            res += '\n';
            res += "\topenBlueprint = ";
            res += rd::to_string(openBlueprint_);
            res += '\n';
            res += "\tonBlueprintAdded = ";
            res += rd::to_string(onBlueprintAdded_);
            res += '\n';
            res += "\tisBlueprintPathName = ";
            res += rd::to_string(isBlueprintPathName_);
            res += '\n';
            res += "\tgetPathNameByPath = ";
            res += rd::to_string(getPathNameByPath_);
            res += '\n';
            res += "\tallowSetForegroundWindow = ";
            res += rd::to_string(allowSetForegroundWindow_);
            res += '\n';
            res += "\tplayStateFromEditor = ";
            res += rd::to_string(playStateFromEditor_);
            res += '\n';
            res += "\tplayStateFromRider = ";
            res += rd::to_string(playStateFromRider_);
            res += '\n';
            return res;
        }
        
        //external to string
        std::string to_string(const RdEditorModel & value)
        {
            return value.toString();
        }
    };
};

#pragma warning( pop )

