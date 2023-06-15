//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SystemStatusUI/NSObject-Protocol.h>

@class STUIStatusBarAction, UIView;
@protocol UILayoutItem;

@protocol STUIStatusBarActionable <NSObject>
@property(readonly, nonatomic) id <UILayoutItem> layoutItem;
@property(nonatomic) struct UIEdgeInsets actionInsets;
@property(nonatomic) struct NSDirectionalEdgeInsets extendedHoverInsets;
@property(readonly, nonatomic) _Bool hoverHighlightsAsRegion;
@property(readonly, nonatomic) struct CGRect absoluteHoverFrame;
@property(readonly, nonatomic) UIView *hoverView;
@property(retain, nonatomic) STUIStatusBarAction *hoverAction;
@property(retain, nonatomic) STUIStatusBarAction *action;
- (void)enableWithToken:(unsigned long long)arg1;
- (void)disableWithToken:(unsigned long long)arg1;
@end

