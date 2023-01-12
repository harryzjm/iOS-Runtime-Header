//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BrowserController, NSString, UIBarButtonItem, UIView;

__attribute__((visibility("hidden")))
@interface TabViewPopoverSourceInfo : NSObject
{
    long long _barItem;
    BrowserController *_browserController;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIView *popoverSourceView;
@property(readonly, nonatomic) struct CGRect popoverSourceRect;
@property(readonly, copy) NSString *description;
- (id)initWithBrowserController:(id)arg1 barItem:(long long)arg2;

// Remaining properties
@property(readonly, nonatomic) UIBarButtonItem *barButtonItem;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(nonatomic) unsigned long long permittedArrowDirections;
@property(nonatomic) long long provenance;
@property(readonly, nonatomic) _Bool shouldDismissIfSourceRemovedAfterRepositioning;
@property(nonatomic) _Bool shouldHideArrow;
@property(nonatomic) _Bool shouldPassthroughSuperview;
@property(readonly) Class superclass;

@end

