//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIScrollView, UIViewController;
@protocol SUUIScrollingSegmentedControllerItemContextDelegate;

__attribute__((visibility("hidden")))
@interface SUUIScrollingSegmentedControllerItemContext : NSObject
{
    struct UIEdgeInsets _appliedContentInsetsAdjustment;
    struct UIEdgeInsets _desiredContentInsetsAdjustment;
    UIScrollView *_insetAdjustedContentScrollView;
    id <SUUIScrollingSegmentedControllerItemContextDelegate> _delegate;
    UIViewController *_viewController;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
@property(nonatomic) __weak id <SUUIScrollingSegmentedControllerItemContextDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_applyNewContentInset:(struct UIEdgeInsets)arg1 withOldContentInset:(struct UIEdgeInsets)arg2 toContentScrollView:(id)arg3;
- (void)updateAppliedContentInsetsAdjustment;
- (void)applyNewContentInset:(struct UIEdgeInsets)arg1;
- (id)initWithViewController:(id)arg1;
- (id)init;

@end

