//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Home/HFStaticItemProvider.h>

@class HMCameraProfile;

@interface HUCameraCloudStorageItemProvider : HFStaticItemProvider
{
    HMCameraProfile *_cameraProfile;
}

@property(readonly, copy, nonatomic) HMCameraProfile *cameraProfile; // @synthesize cameraProfile=_cameraProfile;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCameraProfile:(id)arg1;

@end
