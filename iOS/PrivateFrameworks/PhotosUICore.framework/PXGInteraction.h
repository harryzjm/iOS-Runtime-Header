//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PXGLayout, PXScrollViewController, UIView;
@protocol PXGHitTestEnvironment;

@interface PXGInteraction : NSObject
{
    PXGLayout *_layout;
    UIView<PXGHitTestEnvironment> *_view;
    PXScrollViewController *_scrollViewController;
}

- (void).cxx_destruct;
@property(nonatomic) __weak PXScrollViewController *scrollViewController; // @synthesize scrollViewController=_scrollViewController;
@property(nonatomic) __weak UIView<PXGHitTestEnvironment> *view; // @synthesize view=_view;
@property(nonatomic) __weak PXGLayout *layout; // @synthesize layout=_layout;
- (void)scrollViewControllerDidChange;
- (void)viewDidChange;
- (void)layoutDidChange;

@end
