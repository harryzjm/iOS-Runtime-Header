//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSArray, NSDictionary, NSString, TMLContext;

@interface UIView (TouchML)
+ (id)tmlLoadViewFromPath:(id)arg1;
+ (void)tmlLoadCategory;
- (void)tmlAccessibilityDecrement;
- (void)tmlAccessibilityIncrement;
- (_Bool)tmlAccessibilityActivate;
- (void)tmlLoadReusableView:(id)arg1;
- (void)tmlLoadViewFromPath:(id)arg1;
- (void)tmlLoadView:(id)arg1;
- (void)tmlLoadView;
- (void)_tmlUnloadContext;
- (void)_tmlEnsureContext:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) TMLContext *tmlContext;
@property(copy, nonatomic) NSDictionary *tmlObjects;
@property(readonly, nonatomic) NSString *tmlViewPath;
@property(copy, nonatomic) NSArray *gestureRecognizers;
@property(copy, nonatomic) NSArray *layoutGuides;
@property(copy, nonatomic) NSArray *constraints;
@property(copy, nonatomic) NSArray *subviews;
- (void)tmlTraitCollectionDidChange:(id)arg1;
- (void)tmlDidMoveToWindow;
@end

