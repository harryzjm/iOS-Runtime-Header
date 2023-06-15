//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMIExternalPersonManager, NSString;

__attribute__((visibility("hidden")))
@interface HMDHomeAIPhotosPersonDataInterface
{
    HMIExternalPersonManager *_photosPersonManager;
}

+ (id)logCategory;
- (void).cxx_destruct;
@property(readonly) HMIExternalPersonManager *photosPersonManager; // @synthesize photosPersonManager=_photosPersonManager;
- (void)handleUpdatedSettings:(id)arg1 mirrorOutputFuture:(id)arg2;
- (void)fetchSettingsWithCompletion:(CDUnknownBlockType)arg1;
- (id)logIdentifier;
- (id)initWithPhotosPersonManager:(id)arg1 workQueue:(id)arg2;
- (id)initWithPersonManagerUUID:(id)arg1 homeUUID:(id)arg2 workQueue:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

