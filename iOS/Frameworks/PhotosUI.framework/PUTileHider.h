//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, PUTilingView;

__attribute__((visibility("hidden")))
@interface PUTileHider : NSObject
{
    PUTilingView *_tilingView;
    NSMutableDictionary *__hiddenTileControllersByLayoutInfo;
    double __animationDuration;
}

@property(readonly, nonatomic) double _animationDuration; // @synthesize _animationDuration=__animationDuration;
@property(readonly, nonatomic) NSMutableDictionary *_hiddenTileControllersByLayoutInfo; // @synthesize _hiddenTileControllersByLayoutInfo=__hiddenTileControllersByLayoutInfo;
@property(readonly, nonatomic) PUTilingView *tilingView; // @synthesize tilingView=_tilingView;
- (void).cxx_destruct;
- (void)reattachTiles;
- (void)unhideTilesAnimated:(_Bool)arg1;
- (void)hideTilesAtIndexPath:(id)arg1 withKinds:(id)arg2 dataSourceIdentifier:(id)arg3 animated:(_Bool)arg4;
- (void)dealloc;
- (id)initWithTilingView:(id)arg1;
- (id)init;

@end

