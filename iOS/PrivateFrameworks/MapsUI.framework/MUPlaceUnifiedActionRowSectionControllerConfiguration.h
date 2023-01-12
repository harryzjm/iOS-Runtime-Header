//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOUnifiedActionButtonModuleConfiguration, MKETAProvider, MKPlaceActionManager, MUAMSResultProvider, MUTimeExpirableLRUCache, _MKPlaceActionButtonController;
@protocol MUExternalActionHandling, MUHeaderButtonMenuActionProvider, MUPlaceActionRowMenuProvider;

__attribute__((visibility("hidden")))
@interface MUPlaceUnifiedActionRowSectionControllerConfiguration : NSObject
{
    _Bool _shouldPerformMapsExtensionDiscovery;
    _Bool _canShowDetourTime;
    _Bool _isSearchAlongRoute;
    MKPlaceActionManager *_actionManager;
    unsigned long long _primaryButtonType;
    id <MUHeaderButtonMenuActionProvider> _moreActionsProvider;
    id <MUPlaceActionRowMenuProvider> _actionRowMenuProvider;
    MKETAProvider *_etaProvider;
    id <MUExternalActionHandling> _externalActionHandler;
    GEOUnifiedActionButtonModuleConfiguration *_buttonModuleConfiguration;
    _MKPlaceActionButtonController *_secondaryActionButtonController;
    MUTimeExpirableLRUCache *_artworkCache;
    MUAMSResultProvider *_amsResultProvider;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MUAMSResultProvider *amsResultProvider; // @synthesize amsResultProvider=_amsResultProvider;
@property(retain, nonatomic) MUTimeExpirableLRUCache *artworkCache; // @synthesize artworkCache=_artworkCache;
@property(retain, nonatomic) _MKPlaceActionButtonController *secondaryActionButtonController; // @synthesize secondaryActionButtonController=_secondaryActionButtonController;
@property(nonatomic) _Bool isSearchAlongRoute; // @synthesize isSearchAlongRoute=_isSearchAlongRoute;
@property(nonatomic) _Bool canShowDetourTime; // @synthesize canShowDetourTime=_canShowDetourTime;
@property(nonatomic) _Bool shouldPerformMapsExtensionDiscovery; // @synthesize shouldPerformMapsExtensionDiscovery=_shouldPerformMapsExtensionDiscovery;
@property(retain, nonatomic) GEOUnifiedActionButtonModuleConfiguration *buttonModuleConfiguration; // @synthesize buttonModuleConfiguration=_buttonModuleConfiguration;
@property(nonatomic) __weak id <MUExternalActionHandling> externalActionHandler; // @synthesize externalActionHandler=_externalActionHandler;
@property(nonatomic) __weak MKETAProvider *etaProvider; // @synthesize etaProvider=_etaProvider;
@property(nonatomic) __weak id <MUPlaceActionRowMenuProvider> actionRowMenuProvider; // @synthesize actionRowMenuProvider=_actionRowMenuProvider;
@property(nonatomic) __weak id <MUHeaderButtonMenuActionProvider> moreActionsProvider; // @synthesize moreActionsProvider=_moreActionsProvider;
@property(nonatomic) unsigned long long primaryButtonType; // @synthesize primaryButtonType=_primaryButtonType;
@property(nonatomic) __weak MKPlaceActionManager *actionManager; // @synthesize actionManager=_actionManager;

@end

