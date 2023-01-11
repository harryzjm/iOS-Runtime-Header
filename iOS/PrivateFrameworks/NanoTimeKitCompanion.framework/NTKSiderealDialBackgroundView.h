//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class CLKUIQuadView, NTKAltitudeColorCurveView, NTKSiderealBackgroundQuad;

@interface NTKSiderealDialBackgroundView : UIView
{
    NTKSiderealBackgroundQuad *_backgroundQuad;
    _Bool _renderOnProgressUpdate;
    CLKUIQuadView *_quadView;
    NTKSiderealBackgroundQuad *_quad;
    NTKAltitudeColorCurveView *_backgroundDialView;
}

@property(retain, nonatomic) NTKAltitudeColorCurveView *backgroundDialView; // @synthesize backgroundDialView=_backgroundDialView;
@property(nonatomic) _Bool renderOnProgressUpdate; // @synthesize renderOnProgressUpdate=_renderOnProgressUpdate;
@property(readonly, nonatomic) NTKSiderealBackgroundQuad *quad; // @synthesize quad=_quad;
@property(retain, nonatomic) CLKUIQuadView *quadView; // @synthesize quadView=_quadView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setSectors:(id)arg1;
- (void)setSolarDayProgress:(double)arg1;
- (void)renderSynchronouslyWithImageQueueDiscard:(_Bool)arg1 inGroup:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 dialImage:(struct CGImage *)arg2 waypointImage:(struct CGImage *)arg3 dataSource:(id)arg4;

@end
