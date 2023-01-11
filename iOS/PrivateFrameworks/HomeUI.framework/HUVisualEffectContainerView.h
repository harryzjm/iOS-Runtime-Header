//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIVisualEffectView.h>

@class UIView;

@interface HUVisualEffectContainerView : UIVisualEffectView
{
    UIView *_innerContentView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *innerContentView; // @synthesize innerContentView=_innerContentView;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (id)initWithInnerContentView:(id)arg1;

@end
