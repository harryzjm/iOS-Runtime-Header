//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/_UINavigationBarTitleView.h>

@class LPLinkView, NSLayoutConstraint;

@interface _UIActivityContentTitleView : _UINavigationBarTitleView
{
    LPLinkView *_linkView;
    NSLayoutConstraint *_linkTrailingAnchor;
}

@property(retain, nonatomic) NSLayoutConstraint *linkTrailingAnchor; // @synthesize linkTrailingAnchor=_linkTrailingAnchor;
@property(retain, nonatomic) LPLinkView *linkView; // @synthesize linkView=_linkView;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)contentDidChange;

@end
