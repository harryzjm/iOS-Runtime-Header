//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class NSString, UITraitCollection;
@protocol EKUIViewHierarchy;

@interface UIViewController (EventKitUI)
+ (id)eventDetailViewControllerWithEvent:(id)arg1 delegate:(id)arg2 context:(id)arg3 allowInlinePreview:(_Bool)arg4 previewInline:(_Bool)arg5 minimalMode:(_Bool)arg6;
+ (id)eventDetailViewControllerWithEvent:(id)arg1 delegate:(id)arg2 context:(id)arg3;
@property(readonly, nonatomic) id <EKUIViewHierarchy> EKUI_viewHierarchy;
@property(readonly, nonatomic) _Bool isPresentedInsidePopover;
@property(readonly, nonatomic) void *ekui_futureTraitCollectionCategoryPropertyKey;
@property(retain, nonatomic) UITraitCollection *ekui_futureTraitCollection;
- (id)EKUI_oopContentBackgroundColor;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) UITraitCollection *traitCollection;
@end

