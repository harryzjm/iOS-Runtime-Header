//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "AMSUICommonView.h"

@class UIView;

__attribute__((visibility("hidden")))
@interface AMSUIWebViewImageWrapper : AMSUICommonView
{
    UIView *_view;
    double _inset;
}

- (void).cxx_destruct;
@property(nonatomic) double inset; // @synthesize inset=_inset;
@property(retain, nonatomic) UIView *view; // @synthesize view=_view;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (id)initWithView:(id)arg1 topInset:(double)arg2;

@end

