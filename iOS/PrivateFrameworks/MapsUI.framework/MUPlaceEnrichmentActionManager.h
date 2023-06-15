//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MKMapItem, MUAMSResultProvider, MUPlaceActionManager, MUPlaceDataAvailability, MUPresentationOptions, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, UIView;
@protocol MUExternalActionHandling, MUPlaceCallToActionSectionControllerDelegate, MUPlaceEnrichmentDataProvider, MUPlaceEnrichmentSectionAnalyticsDelegate, MUPlaceEnrichmentSectionContextMenuDelegate;

__attribute__((visibility("hidden")))
@interface MUPlaceEnrichmentActionManager : NSObject
{
    MUPlaceActionManager *_placeActionManager;
    id <MUPlaceEnrichmentDataProvider> _enrichmentDataProvider;
    MKMapItem *_mapItem;
    MUPlaceDataAvailability *_dataAvailability;
    NSMutableSet *_supportedActions;
    id <MUPlaceCallToActionSectionControllerDelegate> _callToActionDelegate;
    id <MUPlaceEnrichmentSectionContextMenuDelegate> _contextMenuDelegate;
    id <MUExternalActionHandling> _externalActionHandler;
    id <MUPlaceEnrichmentSectionAnalyticsDelegate> _analyticsDelegate;
    NSMutableDictionary *_externalActionsPairs;
    NSMutableArray *_externalActionsControllers;
    CDUnknownBlockType _onActionUpdate;
    MUPresentationOptions *_presentationOptions;
    MUAMSResultProvider *_amsResultProvider;
    UIView *_sourceView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *sourceView; // @synthesize sourceView=_sourceView;
@property(retain, nonatomic) MUAMSResultProvider *amsResultProvider; // @synthesize amsResultProvider=_amsResultProvider;
@property(retain, nonatomic) MUPresentationOptions *presentationOptions; // @synthesize presentationOptions=_presentationOptions;
@property(copy, nonatomic) CDUnknownBlockType onActionUpdate; // @synthesize onActionUpdate=_onActionUpdate;
@property(retain, nonatomic) NSMutableArray *externalActionsControllers; // @synthesize externalActionsControllers=_externalActionsControllers;
@property(retain, nonatomic) NSMutableDictionary *externalActionsPairs; // @synthesize externalActionsPairs=_externalActionsPairs;
@property(nonatomic) __weak id <MUPlaceEnrichmentSectionAnalyticsDelegate> analyticsDelegate; // @synthesize analyticsDelegate=_analyticsDelegate;
@property(nonatomic) __weak id <MUExternalActionHandling> externalActionHandler; // @synthesize externalActionHandler=_externalActionHandler;
@property(nonatomic) __weak id <MUPlaceEnrichmentSectionContextMenuDelegate> contextMenuDelegate; // @synthesize contextMenuDelegate=_contextMenuDelegate;
@property(nonatomic) __weak id <MUPlaceCallToActionSectionControllerDelegate> callToActionDelegate; // @synthesize callToActionDelegate=_callToActionDelegate;
@property(retain, nonatomic) NSMutableSet *supportedActions; // @synthesize supportedActions=_supportedActions;
@property(retain, nonatomic) MUPlaceDataAvailability *dataAvailability; // @synthesize dataAvailability=_dataAvailability;
@property(retain, nonatomic) MKMapItem *mapItem; // @synthesize mapItem=_mapItem;
@property(retain, nonatomic) id <MUPlaceEnrichmentDataProvider> enrichmentDataProvider; // @synthesize enrichmentDataProvider=_enrichmentDataProvider;
@property(retain, nonatomic) MUPlaceActionManager *placeActionManager; // @synthesize placeActionManager=_placeActionManager;
- (void)addExternalActionsAsSupportedActions:(id)arg1;
- (void)contextMenuAction:(id)arg1;
- (void)getAppAction:(id)arg1;
- (void)addPhotoAction:(id)arg1;
- (void)ratePlaceAction:(id)arg1;
- (void)directionsAction:(id)arg1;
- (void)layoutActionsUsingArguments:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)performActionUsingArguments:(id)arg1 contextMenu:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)adamIDForAppCategory:(id)arg1;
- (void)configureWithEnrichmentDataProvider:(id)arg1 presentationOptions:(id)arg2;
- (id)dictionaryForAction:(id)arg1;
- (id)supportedPlaceEnrichmentActions;
- (id)initWithPlaceActionManager:(id)arg1 mapItem:(id)arg2 dataAvailability:(id)arg3 amsResultProvider:(id)arg4 callToActionDelegate:(id)arg5 contextMenuDelegate:(id)arg6 externalActionHandler:(id)arg7 analyticsDelegate:(id)arg8 onActionUpdate:(CDUnknownBlockType)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

