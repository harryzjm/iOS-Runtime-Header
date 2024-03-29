//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class UIColor, UIImage, UIImageView, _MPDownloadProgressRingView;

__attribute__((visibility("hidden")))
@interface MPDownloadProgressView : UIView
{
    UIImageView *_centerImageView;
    UIView *_outerRingView;
    _MPDownloadProgressRingView *_progressView;
    double _downloadProgress;
    UIImage *_centerImage;
    UIColor *_outerRingColor;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *outerRingColor; // @synthesize outerRingColor=_outerRingColor;
@property(retain, nonatomic) UIImage *centerImage; // @synthesize centerImage=_centerImage;
@property(nonatomic) double downloadProgress; // @synthesize downloadProgress=_downloadProgress;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

