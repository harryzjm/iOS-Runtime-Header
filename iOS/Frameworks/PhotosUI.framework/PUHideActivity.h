//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PUAssetHidingHelper;

__attribute__((visibility("hidden")))
@interface PUHideActivity
{
    PUAssetHidingHelper *_assetHidingHelper;
}

+ (long long)activityCategory;
- (void).cxx_destruct;
- (void)performActivity;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (id)activityImage;
- (id)activityTitle;
- (id)activityType;
- (void)setItemSourceController:(id)arg1;
- (id)_assetHidingHelper;

@end
