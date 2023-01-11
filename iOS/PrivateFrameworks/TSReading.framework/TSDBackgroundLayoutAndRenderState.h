//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol TSDBackgroundLayoutAndRenderStateDelegate;

@interface TSDBackgroundLayoutAndRenderState : NSObject
{
    id <TSDBackgroundLayoutAndRenderStateDelegate> mDelegate;
    _Bool mNeedsLayoutAndRender;
    _Bool mNeedsLayoutForTilingLayers;
}

- (void)p_didBackgroundLayoutAndRender;
- (void)setNeedsLayoutForTilingLayers;
- (void)setNeedsLayoutAndRender;
- (void)clearDelegate;
- (id)initWithDelegate:(id)arg1;

@end
