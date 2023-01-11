//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class CLKDevice, UIImageView;

@interface NTKRoundedCornerOverlayView : UIView
{
    double _cornerRadius;
    UIImageView *_upperLeftCorner;
    UIImageView *_upperRightCorner;
    UIImageView *_bottomLeftCorner;
    UIImageView *_bottomRightCorner;
    CLKDevice *_device;
}

- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 forDeviceCornerRadius:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 forDevice:(id)arg2 cornerRadius:(double)arg3;

@end
