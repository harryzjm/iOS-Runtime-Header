//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuartzCore/CALayer.h>

__attribute__((visibility("hidden")))
@interface WKVideoLayerRemote : CALayer
{
    struct WeakPtr<WebKit::MediaPlayerPrivateRemote, WTF::EmptyCounter> _mediaPlayerPrivateRemote;
    struct RetainPtr<CAContext> _context;
    struct unique_ptr<WebCore::Timer, std::__1::default_delete<WebCore::Timer>> _resolveBoundsTimer;
    _Bool _shouldRestartWhenTimerFires;
    struct Seconds _delay;
    struct CGRect _videoLayerFrame;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) struct CGRect videoLayerFrame; // @synthesize videoLayerFrame=_videoLayerFrame;
- (void)resolveBounds;
- (void)layoutSublayers;
@property(nonatomic) struct MediaPlayerPrivateRemote *mediaPlayerPrivateRemote;
- (id)init;

@end
