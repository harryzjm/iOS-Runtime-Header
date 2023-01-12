//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ClockKitUI/CLKUIQuad.h>

@class NUNIRenderer, NUNIResources, NUNIScene;

@interface NUNIMetalQuad : CLKUIQuad
{
    double _baseTime;
    NUNIRenderer *_renderer;
    NUNIResources *_resources;
    struct CGSize _viewport;
    unsigned int _isPrepared:1;
    NUNIScene *_scene;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NUNIScene *scene; // @synthesize scene=_scene;
- (_Bool)prepareForTime:(double)arg1;
- (void)renderForDisplayWithEncoder:(id)arg1;
- (void)performOffscreenPassesWithCommandBuffer:(id)arg1;
- (void)setupForQuadView:(id)arg1;
- (id)initWithResources:(id)arg1;

@end
