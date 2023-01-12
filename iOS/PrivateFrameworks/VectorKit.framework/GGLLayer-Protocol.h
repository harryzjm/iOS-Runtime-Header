//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol GGLLayerDelegate;

@protocol GGLLayer
@property(readonly) int backingFormat;
@property(readonly, nonatomic) struct CGSize backingSize;
@property __weak id <GGLLayerDelegate> renderDelegate;
- (void)didEnterBackground;
- (void)onTimerFired:(double)arg1;
@end

