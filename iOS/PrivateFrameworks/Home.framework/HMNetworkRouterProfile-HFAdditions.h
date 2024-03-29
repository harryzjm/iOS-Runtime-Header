//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKit/HMNetworkRouterProfile.h>

@class NSString;

@interface HMNetworkRouterProfile (HFAdditions)
- (id)hf_iconDescriptor;
@property(readonly, copy, nonatomic) NSString *hf_statusLocalizedDescription;
@property(readonly, nonatomic) _Bool hf_isCableOrSatelliteNotConnected;
@property(readonly, nonatomic) _Bool hf_isReady;
@property(readonly, nonatomic) _Bool hf_isStatusKnown;
@property(readonly, nonatomic) _Bool hf_isConnected;
- (Class)hf_itemClass;
- (id)hf_rootAccessoryLikeHomeKitObject;
@end

