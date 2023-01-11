//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <OpusKit/OKWidgetGroupViewExports-Protocol.h>
#import <OpusKit/OKWidgetViewCollection-Protocol.h>

@class NSArray, NSMutableDictionary, NSString, OFUIView, OKTransition, OKWidgetView;

@interface OKWidgetGroupView <OKWidgetViewCollection, OKWidgetGroupViewExports>
{
    long long _index;
    NSArray *_items;
    NSMutableDictionary *_itemWidgetViews;
    OKWidgetView *_currentWidgetView;
    OKTransition *_transition;
    NSString *_switchActionScript;
    _Bool _autoplay;
    _Bool _loop;
    _Bool _isPlaying;
    double _itemDuration;
    _Bool _isInTransition;
    struct UIEdgeInsets _itemEdgeInsets;
    OFUIView *_itemContainerView;
}

+ (void)setupJavascriptContext:(id)arg1;
+ (id)supportedSettings;
@property(readonly, nonatomic) _Bool isPlaying; // @synthesize isPlaying=_isPlaying;
- (void)_gotoNextIndex;
- (void)_stop;
- (void)_play;
- (void)_jsTransitionToIndex:(long long)arg1 withTransition:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_jsTransitionToIndex:(long long)arg1 forward:(_Bool)arg2 andLocation:(struct CGPoint)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_jsGotoIndex:(long long)arg1;
- (void)_gotoIndex:(long long)arg1;
- (void)_transitionToIndex:(long long)arg1 withTransition:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_transitionToIndex:(long long)arg1 forward:(_Bool)arg2 andLocation:(struct CGPoint)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)collectionItemAtIndexPath:(id)arg1;
- (id)collectionItemForName:(id)arg1;
- (id)collectionItemsNames;
- (unsigned long long)collectionItemsCount;
- (void)prepareForRefresh;
- (void)prepareForReload;
- (void)_reloadWidgetViews;
- (_Bool)prepareForUnload:(_Bool)arg1;
- (_Bool)prepareForWarmup:(_Bool)arg1;
- (_Bool)prepareForDisplay:(_Bool)arg1;
- (id)_widgetViewForIndex:(long long)arg1;
- (id)_nextWidgetView;
- (id)_previousWidgetView;
- (void)_prepareAllForUnload:(_Bool)arg1 except:(id)arg2;
- (void)_updateDisplayedWidgetViews;
- (long long)rotatedIndexForIndex:(long long)arg1;
- (void)setAntialiasing:(_Bool)arg1;
- (id)valueForUndefinedKey:(id)arg1;
- (id)layoutSettingsKeys;
- (void)setSettingItemEdgeInsets:(struct UIEdgeInsets)arg1;
- (struct UIEdgeInsets)settingItemEdgeInsets;
- (void)setSettingSwitchActionScript:(id)arg1;
- (void)setSettingItemDuration:(double)arg1;
- (void)setSettingLoop:(_Bool)arg1;
- (void)setSettingAutoplay:(_Bool)arg1;
- (long long)settingIndex;
- (void)setSettingIndex:(long long)arg1;
- (void)setSettingItems:(id)arg1;
- (void)setSettingTransition:(id)arg1;
- (id)settingTransition;
- (id)settingObjectForKey:(id)arg1;
- (void)layoutSubviews;
- (struct CGRect)itemContainerRect;
- (void)dealloc;
- (id)initWithWidget:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
