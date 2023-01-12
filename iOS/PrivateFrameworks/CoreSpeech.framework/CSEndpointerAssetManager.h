//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreSpeech/CESRTrialAssetDelegate-Protocol.h>
#import <CoreSpeech/CSAssetManagerDelegate-Protocol.h>
#import <CoreSpeech/CSFirstUnlockMonitorDelegate-Protocol.h>

@class CSAsset, NSDictionary, NSHashTable, NSString;
@protocol OS_dispatch_queue;

@interface CSEndpointerAssetManager : NSObject <CSAssetManagerDelegate, CSFirstUnlockMonitorDelegate, CESRTrialAssetDelegate>
{
    CSAsset *_currentHEPAsset;
    CSAsset *_currentOEPAsset;
    NSObject<OS_dispatch_queue> *_queue;
    NSDictionary *_asrDatapackInstallationStatus;
    NSHashTable *_observers;
}

+ (id)sharedManager;
- (void).cxx_destruct;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) NSDictionary *asrDatapackInstallationStatus; // @synthesize asrDatapackInstallationStatus=_asrDatapackInstallationStatus;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) CSAsset *currentOEPAsset; // @synthesize currentOEPAsset=_currentOEPAsset;
@property(retain, nonatomic) CSAsset *currentHEPAsset; // @synthesize currentHEPAsset=_currentHEPAsset;
- (id)_getOEPVersionFromPath:(id)arg1;
- (_Bool)_isOSDIncludedInAsset:(id)arg1;
- (id)_getModelPathFromInstallationStatusString:(id)arg1;
- (void)_notifyAssetsUpdate;
- (void)_updateOEPAssetsWithLanguage:(id)arg1;
- (void)_updateAssetWithLanguage:(id)arg1 assetType:(unsigned long long)arg2;
- (void)_updateAssetWithCurrentLanguageForAssetType:(unsigned long long)arg1;
- (id)_getCurrentHEPAsset;
- (void)assetStatus:(id)arg1;
- (void)CSFirstUnlockMonitor:(id)arg1 didReceiveFirstUnlock:(_Bool)arg2;
- (void)CSAssetManagerDidDownloadNewAsset:(id)arg1;
- (void)CSLanguageCodeUpdateMonitor:(id)arg1 didReceiveLanguageCodeChanged:(id)arg2;
- (id)getCurrentEndpointerAsset;
- (id)getCurrentOSDAsset;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)checkFirstUnlocked;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
