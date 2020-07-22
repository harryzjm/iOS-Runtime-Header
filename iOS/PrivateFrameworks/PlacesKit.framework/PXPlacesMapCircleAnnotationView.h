//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapKit/MKAnnotationView.h>

@class CATextLayer;

@interface PXPlacesMapCircleAnnotationView : MKAnnotationView
{
    double _circleAnnotationSize;
    CATextLayer *_textLayer;
}

+ (struct CGColor *)colorForCircle;
@property(retain, nonatomic) CATextLayer *textLayer; // @synthesize textLayer=_textLayer;
@property(nonatomic) double circleAnnotationSize; // @synthesize circleAnnotationSize=_circleAnnotationSize;
- (void).cxx_destruct;
- (id)renderTextLayerWithSize:(struct CGSize)arg1 usingFontName:(id)arg2 fontSize:(long long)arg3 text:(id)arg4;
- (id)renderCircleWithRadius:(double)arg1;
- (void)setCircleText:(id)arg1;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;

@end
