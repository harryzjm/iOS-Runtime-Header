//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, SUUIMenuViewController, UIPopoverController;
@protocol SUUIMenuPopoverDelegate;

__attribute__((visibility("hidden")))
@interface SUUIMenuPopoverController : NSObject
{
    id <SUUIMenuPopoverDelegate> _delegate;
    SUUIMenuViewController *_menuViewController;
    UIPopoverController *_popoverController;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <SUUIMenuPopoverDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_destroyPopoverController;
- (void)popoverController:(id)arg1 willRepositionPopoverToRect:(inout struct CGRect *)arg2 inView:(inout id *)arg3;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)menuViewController:(id)arg1 didSelectItemAtIndex:(long long)arg2;
- (void)presentFromRect:(struct CGRect)arg1 inView:(id)arg2 permittedArrowDirections:(unsigned long long)arg3 animated:(_Bool)arg4;
@property(readonly, nonatomic) NSArray *menuTitles;
- (void)dismissAnimated:(_Bool)arg1;
- (void)dealloc;
- (id)initWithMenuTitles:(id)arg1 selectedIndex:(long long)arg2;
- (id)initWithMenuTitles:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

