//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class UIScrollView, VUILabel;

__attribute__((visibility("hidden")))
@interface VUILibraryAlertView : UIView
{
    UIScrollView *_scrollView;
    UIView *_containerView;
    VUILabel *_titleLabel;
    VUILabel *_subtitleLabel;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) VUILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(readonly, nonatomic) VUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

