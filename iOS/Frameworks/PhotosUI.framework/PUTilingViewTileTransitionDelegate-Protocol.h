//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUI/NSObject-Protocol.h>

@class NSArray, PUTileReattachmentContext, PUTileTransitionCoordinator, PUTilingDataSourceConverter, PUTilingLayout, PUTilingLayoutInvalidationContext, PUTilingLayoutTransitionContext, PUTilingView;
@protocol NSFastEnumeration;

@protocol PUTilingViewTileTransitionDelegate <NSObject>

@optional
- (_Bool)tilingViewCanBypass20069585Check:(PUTilingView *)arg1;
- (PUTileTransitionCoordinator *)tilingView:(PUTilingView *)arg1 tileTransitionCoordinatorForLayoutInvalidationContext:(PUTilingLayoutInvalidationContext *)arg2;
- (PUTileTransitionCoordinator *)tilingView:(PUTilingView *)arg1 tileTransitionCoordinatorForReattachedTileControllers:(id <NSFastEnumeration>)arg2 context:(PUTileReattachmentContext *)arg3;
- (PUTileTransitionCoordinator *)tilingView:(PUTilingView *)arg1 tileTransitionCoordinatorForChangeFromFrame:(struct CGRect)arg2 toFrame:(struct CGRect)arg3 duration:(double)arg4;
- (PUTileTransitionCoordinator *)tilingView:(PUTilingView *)arg1 tileTransitionCoordinatorForUpdateWithItems:(NSArray *)arg2;
- (PUTilingDataSourceConverter *)tilingView:(PUTilingView *)arg1 dataSourceConverterForTransitionFromLayout:(PUTilingLayout *)arg2 toLayout:(PUTilingLayout *)arg3;
- (PUTileTransitionCoordinator *)tilingView:(PUTilingView *)arg1 tileTransitionCoordinatorForTransitionFromLayout:(PUTilingLayout *)arg2 toLayout:(PUTilingLayout *)arg3 withContext:(PUTilingLayoutTransitionContext *)arg4;
@end

