//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BacklightServicesHost/NSObject-Protocol.h>

@class NSString;
@protocol BLSHBacklightSceneHostEnvironment;

@protocol BLSHBacklightSceneHostEnvironmentObserver <NSObject>

@optional
- (void)hostEnvironment:(id <BLSHBacklightSceneHostEnvironment>)arg1 hostDidSetUnrestrictedFramerateUpdates:(_Bool)arg2;
- (void)hostEnvironment:(id <BLSHBacklightSceneHostEnvironment>)arg1 hostDidSetLiveUpdating:(_Bool)arg2;
- (void)hostEnvironment:(id <BLSHBacklightSceneHostEnvironment>)arg1 hostDidSetAlwaysOnEnabledForEnvironment:(_Bool)arg2;
- (void)hostEnvironment:(id <BLSHBacklightSceneHostEnvironment>)arg1 invalidateContentForReason:(NSString *)arg2;
- (void)hostEnvironment:(id <BLSHBacklightSceneHostEnvironment>)arg1 clientDidUpdateSupportsAlwaysOn:(_Bool)arg2;
- (void)hostEnvironment:(id <BLSHBacklightSceneHostEnvironment>)arg1 clientDidUpdateEnabled:(_Bool)arg2;
@end

