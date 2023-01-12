//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIView, _UISearchBarSearchContainerLayout;
@protocol _UISearchBarContainerSublayoutDelegate;

__attribute__((visibility("hidden")))
@interface _UISearchBarScopeContainerLayout
{
    _Bool _collapsed;
    _Bool _hasScopeBar;
    id <_UISearchBarContainerSublayoutDelegate> _delegate;
    _UISearchBarSearchContainerLayout *_neighboringSearchLayout;
    UIView *_scopeBar;
    unsigned long long _numberOfScopeTitles;
    double _scopeBarOpacity;
    struct CGRect _scopeBarLayoutFrame;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) double scopeBarOpacity; // @synthesize scopeBarOpacity=_scopeBarOpacity;
@property(nonatomic) unsigned long long numberOfScopeTitles; // @synthesize numberOfScopeTitles=_numberOfScopeTitles;
@property(nonatomic) _Bool hasScopeBar; // @synthesize hasScopeBar=_hasScopeBar;
@property(retain, nonatomic) UIView *scopeBar; // @synthesize scopeBar=_scopeBar;
@property(retain, nonatomic) _UISearchBarSearchContainerLayout *neighboringSearchLayout; // @synthesize neighboringSearchLayout=_neighboringSearchLayout;
@property(nonatomic, getter=isCollapsed) _Bool collapsed; // @synthesize collapsed=_collapsed;
@property(nonatomic) __weak id <_UISearchBarContainerSublayoutDelegate> delegate; // @synthesize delegate=_delegate;
- (id)description;
- (void)applyLayout;
- (void)updateLayout;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (double)scopeControlHeight;
@property(readonly, nonatomic) double naturalContainerHeight;
@property(readonly, nonatomic) struct UIEdgeInsets containerSpecificInsets;
@property(readonly, nonatomic) struct CGRect scopeBarLayoutFrame; // @synthesize scopeBarLayoutFrame=_scopeBarLayoutFrame;

@end

