//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@protocol SBHFocusProxyable;

@interface SBHFocusProxyView : UIView
{
    UIView<SBHFocusProxyable> *_proxyableView;
    double _padding;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) double padding; // @synthesize padding=_padding;
@property(readonly, nonatomic) __weak UIView<SBHFocusProxyable> *proxyableView; // @synthesize proxyableView=_proxyableView;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (_Bool)canBecomeFocused;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithProxyableView:(id)arg1;

@end
