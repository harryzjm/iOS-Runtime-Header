//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class CAShapeLayer;

@interface CAMSlashMaskView : UIView
{
    struct CGRect _slashBounds;
}

+ (Class)layerClass;
@property(nonatomic) struct CGRect slashBounds; // @synthesize slashBounds=_slashBounds;
- (void)_updateShapeLayerAnimated:(_Bool)arg1;
- (void)updateMaskAnimated;
- (void)setSlashBounds:(struct CGRect)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
@property(readonly, nonatomic) CAShapeLayer *_shapeLayer;

@end
