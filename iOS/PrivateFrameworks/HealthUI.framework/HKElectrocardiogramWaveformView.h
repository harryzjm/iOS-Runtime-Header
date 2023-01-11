//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSArray, UIColor;

@interface HKElectrocardiogramWaveformView : UIView
{
    double _lineWidth;
    UIColor *_lineColor;
    NSArray *_shapeLayers;
    struct CGRect _pathBounds;
    struct CGRect _lastPathBounds;
}

@property(nonatomic) struct CGRect lastPathBounds; // @synthesize lastPathBounds=_lastPathBounds;
@property(nonatomic) struct CGRect pathBounds; // @synthesize pathBounds=_pathBounds;
@property(retain, nonatomic) NSArray *shapeLayers; // @synthesize shapeLayers=_shapeLayers;
@property(retain, nonatomic) UIColor *lineColor; // @synthesize lineColor=_lineColor;
@property(nonatomic) double lineWidth; // @synthesize lineWidth=_lineWidth;
- (void).cxx_destruct;
- (void)tintColorDidChange;
- (struct CGSize)intrinsicContentSize;
- (void)setPaths:(id)arg1;
- (id)createShapeLayerWithPath:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
