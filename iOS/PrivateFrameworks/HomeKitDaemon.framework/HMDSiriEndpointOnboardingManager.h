//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol HMDSiriEndpointOnboardingManagerDataSource;

__attribute__((visibility("hidden")))
@interface HMDSiriEndpointOnboardingManager : NSObject
{
    NSMutableDictionary *_onboardingSelections;
    NSMutableDictionary *_onboardingUserUUID;
    struct os_unfair_lock_s _lock;
    id <HMDSiriEndpointOnboardingManagerDataSource> _dataSource;
}

- (void).cxx_destruct;
@property __weak id <HMDSiriEndpointOnboardingManagerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (_Bool)readyToApplyOnboardingSelectionsWithHomeUUID:(id)arg1 accessoryUUID:(id)arg2;
- (void)_setNeedsOnboardingCompleteWitHomeUUID:(id)arg1 accessoryUUID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_applyOnboardingSelections:(id)arg1 accessoryUUID:(id)arg2 homeUUID:(id)arg3 userUUID:(id)arg4 cacheKey:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)applyCachedOnboardingSelectionsWithAccessoryUUID:(id)arg1 homeUUID:(id)arg2;
- (void)applyOnboardingSelections:(id)arg1 accessoryUUID:(id)arg2 homeUUID:(id)arg3 userUUID:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)handleAccessoryConfigured:(id)arg1;
- (void)handleCompositeSettingsControllerConfigured:(id)arg1;
- (id)initWithDataSource:(id)arg1;

@end

