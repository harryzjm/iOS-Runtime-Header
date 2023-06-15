//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDUser, HMDUserPresenceRegion, HMDUserPresenceUpdateReason, HMUserPresenceAuthorization, HMUserPresenceCompute;

__attribute__((visibility("hidden")))
@interface HMDUserPresenceFeed : HMFObject
{
    HMDUser *_user;
    HMUserPresenceAuthorization *_presenceAuthStatus;
    HMUserPresenceCompute *_presenceComputeStatus;
    HMDUserPresenceRegion *_presenceRegion;
    HMDUserPresenceUpdateReason *_reason;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) HMDUserPresenceUpdateReason *reason; // @synthesize reason=_reason;
@property(readonly, nonatomic) HMDUserPresenceRegion *presenceRegion; // @synthesize presenceRegion=_presenceRegion;
@property(readonly, nonatomic) HMUserPresenceCompute *presenceComputeStatus; // @synthesize presenceComputeStatus=_presenceComputeStatus;
@property(readonly, nonatomic) HMUserPresenceAuthorization *presenceAuthStatus; // @synthesize presenceAuthStatus=_presenceAuthStatus;
@property(readonly, nonatomic) __weak HMDUser *user; // @synthesize user=_user;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)initWithUser:(id)arg1 presenceAuthStatus:(id)arg2 presenceComputeStatus:(id)arg3 presenceRegion:(id)arg4 reason:(id)arg5;

@end

