//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIBarButtonItem.h"

@protocol UISplitViewControllerImpl;

__attribute__((visibility("hidden")))
@interface UISplitViewControllerDisplayModeBarButtonItem : UIBarButtonItem
{
    _Bool _hasBeenUsed;
    id <UISplitViewControllerImpl> _impl;
}

- (void).cxx_destruct;
@property(readonly, nonatomic, getter=_hasBeenUsed) _Bool hasBeenUsed; // @synthesize hasBeenUsed=_hasBeenUsed;
@property(nonatomic, getter=_impl, setter=_setImpl:) __weak id <UISplitViewControllerImpl> impl; // @synthesize impl=_impl;
- (void)_wasUsed;
- (SEL)action;
- (id)target;
- (void)_setOwningNavigationItem:(id)arg1;

@end

