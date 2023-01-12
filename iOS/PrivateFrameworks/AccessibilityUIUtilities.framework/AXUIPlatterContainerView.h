//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSString, UIBlurEffect;

@interface AXUIPlatterContainerView : UIView
{
    UIView *_contentView;
    UIBlurEffect *_platterBlurEffect;
    UIView *_platterView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIView *platterView; // @synthesize platterView=_platterView;
@property(readonly, nonatomic) UIBlurEffect *platterBlurEffect; // @synthesize platterBlurEffect=_platterBlurEffect;
@property(readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(readonly, nonatomic) _Bool allowsScrolling;
@property(readonly, nonatomic) _Bool shouldMimicNotificationBannerTopOffset;
@property(readonly, nonatomic) double platterWidth;
@property(readonly, nonatomic) NSString *primaryTextStyle;
- (id)initWithFrame:(struct CGRect)arg1;

@end
