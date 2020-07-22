//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TextInputCore/TIAssetManaging-Protocol.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSString, TIMobileAssetMediator, TIMobileAssetTimer;
@protocol OS_dispatch_queue;

@interface TIAssetManager : NSObject <TIAssetManaging>
{
    NSMutableArray *_notificationTokens;
    _Bool _assetDownloadingEnabled;
    CDUnknownBlockType _enabledInputModeIdentifiersProviderBlock;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    TIMobileAssetMediator *_mobileAssetMediator;
    NSMutableDictionary *_assetsByInputMode;
    NSMutableDictionary *_assetsByInputModeLevel;
    TIMobileAssetTimer *_timer;
    NSArray *_currentActiveRegions;
    NSArray *_currentNormalizedActiveRegions;
}

+ (id)_regionFromAddress:(id)arg1;
+ (id)_addressFromRegion:(id)arg1;
+ (id)singletonInstanceWithEnabledInputModesProvider:(CDUnknownBlockType)arg1;
+ (id)sharedAssetManagerWithEnabledInputModesProvider:(CDUnknownBlockType)arg1;
+ (id)sharedAssetManager;
+ (void)setSharedAssetManager:(id)arg1;
@property(retain, nonatomic) NSArray *currentNormalizedActiveRegions; // @synthesize currentNormalizedActiveRegions=_currentNormalizedActiveRegions;
@property(retain, nonatomic) NSArray *currentActiveRegions; // @synthesize currentActiveRegions=_currentActiveRegions;
@property(readonly, nonatomic) _Bool assetDownloadingEnabled; // @synthesize assetDownloadingEnabled=_assetDownloadingEnabled;
@property(retain, nonatomic) TIMobileAssetTimer *timer; // @synthesize timer=_timer;
@property(readonly, nonatomic) NSMutableDictionary *assetsByInputModeLevel; // @synthesize assetsByInputModeLevel=_assetsByInputModeLevel;
@property(readonly, nonatomic) NSMutableDictionary *assetsByInputMode; // @synthesize assetsByInputMode=_assetsByInputMode;
@property(readonly, nonatomic) TIMobileAssetMediator *mobileAssetMediator; // @synthesize mobileAssetMediator=_mobileAssetMediator;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(copy, nonatomic) CDUnknownBlockType enabledInputModeIdentifiersProviderBlock; // @synthesize enabledInputModeIdentifiersProviderBlock=_enabledInputModeIdentifiersProviderBlock;
- (_Bool)purgeAsset:(id)arg1;
- (id)purgeableAssets;
- (void)performMaintenance;
- (id)updateInputModesAndGetNewLevels;
- (void)addAssets:(id)arg1;
- (void)submitStatistics:(id)arg1;
- (void)gatherStatistics:(id)arg1;
- (void)scheduleNextDownload;
- (void)startDownloadingUninstalledAssetsForInputModeLevels:(id)arg1 regions:(id)arg2;
- (void)updateInstalledAssets;
- (void)updateAssetDownloadingEnabled;
- (id)updatedActiveRegions;
- (id)activeInputModeLevels;
- (id)defaultEnabledInputModes;
- (id)enabledInputModes;
- (id)levelsForInputMode:(id)arg1;
- (void)didUpdateAssets;
- (void)newAssetInstalled:(id)arg1;
- (void)appleKeyboardsPreferencesChanged:(id)arg1;
- (void)appleKeyboardsInternalSettingsChanged:(id)arg1;
- (void)unregisterForNotifications;
- (void)registerForNotifications;
- (id)assetContentItemsWithContentType:(id)arg1 inputMode:(id)arg2;
- (id)recursiveDescription;
- (void)dealloc;
- (id)initWithEnabledInputModesProvider:(CDUnknownBlockType)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

