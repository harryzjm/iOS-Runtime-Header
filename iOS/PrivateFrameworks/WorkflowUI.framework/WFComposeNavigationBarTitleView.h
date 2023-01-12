//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/_UINavigationBarTitleView.h>

@class UIViewController, WFComposeNavigationBarTitleContentView, WFWorkflow;

@interface WFComposeNavigationBarTitleView : _UINavigationBarTitleView
{
    WFWorkflow *_workflow;
    UIViewController *_parentViewController;
    WFComposeNavigationBarTitleContentView *_contentView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) WFComposeNavigationBarTitleContentView *contentView; // @synthesize contentView=_contentView;
@property(readonly, nonatomic) __weak UIViewController *parentViewController; // @synthesize parentViewController=_parentViewController;
@property(readonly, nonatomic) WFWorkflow *workflow; // @synthesize workflow=_workflow;
- (struct UIEdgeInsets)contentInsetsWithExclusionRects:(id)arg1;
- (_Bool)finishRenamingIfNecessary;
- (void)updatePlaceholderIfNecessary;
- (id)placeholderName;
- (void)layoutSubviews;
- (void)navigationBarTraitCollectionDidChangeTo:(id)arg1 from:(id)arg2;
- (id)initWithWorkflow:(id)arg1 parentViewController:(id)arg2;

@end
