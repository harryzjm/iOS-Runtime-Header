//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUI/PUMomentShareActivity-Protocol.h>

@class NSString, PUActivityItemSourceController;

__attribute__((visibility("hidden")))
@interface PUCopyLinkActivity <PUMomentShareActivity>
{
}

+ (long long)activityCategory;
+ (_Bool)wantsMomentShareLinkForAssetCount:(long long)arg1;
- (void)performActivity;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (id)_activityBundleImageConfiguration;
- (id)activityTitle;
- (id)activityType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) __weak PUActivityItemSourceController *itemSourceController;
@property(readonly) Class superclass;

@end
