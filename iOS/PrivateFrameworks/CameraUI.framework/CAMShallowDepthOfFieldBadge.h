//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class CAMBadgeTextView;

@interface CAMShallowDepthOfFieldBadge : UIView
{
    long long _shallowDepthOfFieldStatus;
    CAMBadgeTextView *__enabledTextView;
    CAMBadgeTextView *__disabledTextView;
}

@property(readonly, nonatomic) CAMBadgeTextView *_disabledTextView; // @synthesize _disabledTextView=__disabledTextView;
@property(readonly, nonatomic) CAMBadgeTextView *_enabledTextView; // @synthesize _enabledTextView=__enabledTextView;
@property(nonatomic) long long shallowDepthOfFieldStatus; // @synthesize shallowDepthOfFieldStatus=_shallowDepthOfFieldStatus;
- (void).cxx_destruct;
- (void)updateToContentSize:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)_updateForShallowDepthOfFieldStatusAnimated:(_Bool)arg1;
- (void)setShallowDepthOfFieldStatus:(long long)arg1 animated:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

