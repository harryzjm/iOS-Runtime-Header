//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface PUAssetPickerCollectionLayoutSections : NSObject
{
}

+ (id)createOrthogonalScrollingGridSectionWithEffectiveContentWidth:(double)arg1 numberOfColumns:(long long)arg2 numberOfRows:(long long)arg3 itemAspectRatio:(double)arg4 headerKind:(id)arg5;
+ (id)createAlbumGridSectionWithEffectiveContentWidth:(double)arg1 numberOfColumns:(long long)arg2 headerKind:(id)arg3;
+ (id)createAssetGridSectionWithEffectiveContentWidth:(double)arg1 numberOfColumns:(long long)arg2 headerKind:(id)arg3;
- (id)init;

@end
