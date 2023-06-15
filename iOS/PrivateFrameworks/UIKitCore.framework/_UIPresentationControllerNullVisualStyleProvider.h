//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, _UISheetPresentationMetrics;

__attribute__((visibility("hidden")))
@interface _UIPresentationControllerNullVisualStyleProvider : NSObject
{
}

@property(readonly, nonatomic) _UISheetPresentationMetrics *defaultSheetMetrics;
- (Class)presentationControllerClassForModalPresentationStyle:(long long)arg1 inIdiom:(long long)arg2;
- (id)presentationControllerForPresentedViewController:(id)arg1;
- (long long)defaultConcreteTransitionStyleForViewController:(id)arg1;
- (long long)defaultConcretePresentationStyleForViewController:(id)arg1;
- (id)styleForSearchPresentationController:(id)arg1;
- (id)styleForPopoverPresentationController:(id)arg1;
- (id)styleForSheetPresentationController:(id)arg1;
- (id)styleForAlertPresentationController:(id)arg1;
- (id)styleForRootPresentationController:(id)arg1;
- (id)defaultStyleForPresentationController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

