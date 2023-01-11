//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Home/NSCopying-Protocol.h>

@class HMCameraClipSignificantEvent, HMCameraProfile, HMHome;

@interface HFCameraClipSignificantEventItem <NSCopying>
{
    HMCameraProfile *_cameraProfile;
    HMHome *_home;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) HMHome *home; // @synthesize home=_home;
@property(readonly, nonatomic) HMCameraProfile *cameraProfile; // @synthesize cameraProfile=_cameraProfile;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)_homeKitObjectFetch;
@property(readonly, copy, nonatomic) HMCameraClipSignificantEvent *event;
- (id)debugDescription;
- (id)description;
- (id)initWithSignificantEvent:(id)arg1 home:(id)arg2;

@end
