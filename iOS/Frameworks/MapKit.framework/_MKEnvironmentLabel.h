//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class CAShapeLayer, NSString, UILabel;

__attribute__((visibility("hidden")))
@interface _MKEnvironmentLabel : UIView
{
    UILabel *_label;
    CAShapeLayer *_roundedCorner;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *text;
- (void)layoutSubviews;
- (void)sizeToFit;
- (id)initWithFrame:(struct CGRect)arg1;

@end

