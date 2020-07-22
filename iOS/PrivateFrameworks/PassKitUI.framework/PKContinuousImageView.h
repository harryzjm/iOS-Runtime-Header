//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIImageView.h>

@class CAShapeLayer;

@interface PKContinuousImageView : UIImageView
{
    CAShapeLayer *_maskLayer;
    struct CGRect _continuousCornerMaskingBounds;
    struct CGRect _lastLayoutContinuousCornerMaskingBounds;
    double _lastLayoutContinuousCornerRadius;
    double _continuousCornerRadius;
}

@property(nonatomic) double continuousCornerRadius; // @synthesize continuousCornerRadius=_continuousCornerRadius;
- (void).cxx_destruct;
- (void)layoutSubviews;
@property(nonatomic) struct CGRect continuousCornerMaskingBounds;

@end
