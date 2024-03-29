//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class FigVideoLayerInternal;

__attribute__((visibility("hidden")))
@interface FigVideoLayer
{
    FigVideoLayerInternal *_videoLayer;
}

+ (id)defaultActionForKey:(id)arg1;
- (void)_sendVideoLayerIsBeingServicedNotification;
- (void)notificationBarrier;
- (id)layerDisplayName;
- (_Bool)isVideoLayerBeingServiced;
- (void)layerDidBecomeVisible:(_Bool)arg1;
- (id)actionForKey:(id)arg1;
- (void)dealloc;
- (id)initWithLayer:(id)arg1;
- (id)initWithoutDeferredTransaction;
- (id)initWithDeferredTransaction:(struct OpaqueFigDeferredTransaction *)arg1;
- (void)_setupTraceLevel;
- (void)_setupInternalFigVideoLayer;

@end

