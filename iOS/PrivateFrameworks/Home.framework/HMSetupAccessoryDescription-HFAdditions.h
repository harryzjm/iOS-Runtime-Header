//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKit/HMSetupAccessoryDescription.h>

@class NSString, NSURL;

@interface HMSetupAccessoryDescription (HFAdditions)
- (void)hf_updateWithDiscoveredAccessory:(id)arg1;
@property(readonly, nonatomic) NSString *hf_localizedLaunchingAppName;
@property(readonly, nonatomic) _Bool hf_isLaunchedByHomeDaemon;
@property(readonly, nonatomic) _Bool hf_isLaunchedByHomeApp;
@property(readonly, nonatomic) _Bool hf_isKeyedToASpecificAccessory;
@property(readonly, nonatomic) NSURL *hf_installationGuideURL;
@property(readonly, nonatomic) NSString *hf_marketingName;
- (_Bool)hf_isLogitechCircleViewDoorbell;
- (id)hf_home;
@end

