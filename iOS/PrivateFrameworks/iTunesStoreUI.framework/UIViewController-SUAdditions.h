//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class SUViewControllerFactory;

@interface UIViewController (SUAdditions)
@property(readonly, nonatomic) SUViewControllerFactory *viewControllerFactory;
@property(readonly, nonatomic) _Bool shouldInvalidateForMemoryPurge;
- (void)setBadgeValue:(id)arg1 animated:(_Bool)arg2 blink:(_Bool)arg3;
- (id)section;
- (id)_sectionForViewController:(id)arg1;
- (void)restoreArchivableContext:(id)arg1;
- (void)resetRestoredContext;
- (void)parentViewControllerHierarchyDidChange;
- (void)keyboardWillShowWithInfo:(id)arg1;
- (void)keyboardWillHideWithInfo:(id)arg1;
- (void)keyboardDidShowWithInfo:(id)arg1;
- (void)keyboardDidHideWithInfo:(id)arg1;
- (_Bool)isRootViewController;
@property(readonly, nonatomic, getter=isSkLoading) _Bool skLoading;
@property(readonly, nonatomic, getter=isSkLoaded) _Bool skLoaded;
- (_Bool)isInMoreList;
- (_Bool)isDescendantOfViewController:(id)arg1;
- (void)iTunesStoreUI_dismissAction:(id)arg1;
- (void)dismissAnimated:(_Bool)arg1;
- (id)copyArchivableJetsamContext;
- (id)copyArchivableContext;
@end
