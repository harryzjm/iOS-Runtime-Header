//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class NSString, UIActivityIndicatorView;

__attribute__((visibility("hidden")))
@interface MULoadingView : UIView
{
    UIActivityIndicatorView *_loadingIndicator;
}

- (void).cxx_destruct;
- (void)endAnimatingActivityIndicatorWithError:(id)arg1;
- (void)beginAnimatingActivityIndicator;
- (void)_layout;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

