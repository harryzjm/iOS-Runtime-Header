//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PXUIButton, UIImageView, UILabel, UIView;

@interface _PXUIAssetBadgeTopLeftGroup : NSObject
{
    UIView *_backgroundView;
    UIImageView *_imageView;
    UILabel *_label;
    PXUIButton *_button;
    struct PXAssetBadgeInfo _badgeInfo;
    struct CGRect _frame;
    struct CGRect _imageFrame;
    struct CGRect _labelFrame;
    struct CGRect _buttonFrame;
}

@property(nonatomic) struct CGRect buttonFrame; // @synthesize buttonFrame=_buttonFrame;
@property(nonatomic) struct CGRect labelFrame; // @synthesize labelFrame=_labelFrame;
@property(nonatomic) struct CGRect imageFrame; // @synthesize imageFrame=_imageFrame;
@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property(nonatomic) struct PXAssetBadgeInfo badgeInfo; // @synthesize badgeInfo=_badgeInfo;
@property(retain, nonatomic) PXUIButton *button; // @synthesize button=_button;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
- (void).cxx_destruct;

@end

