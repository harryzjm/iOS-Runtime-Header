//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSIndexSet, SFUnifiedBarItem;

@interface SFUnifiedTabBarItemArrangement : NSObject
{
    _Bool _activeItemIsExpanded;
    NSArray *_items;
    SFUnifiedBarItem *_activeItem;
    unsigned long long _activeItemIndex;
    SFUnifiedBarItem *_standaloneActiveItem;
    long long _activeItemSquishState;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long activeItemSquishState; // @synthesize activeItemSquishState=_activeItemSquishState;
@property(readonly, nonatomic) SFUnifiedBarItem *standaloneActiveItem; // @synthesize standaloneActiveItem=_standaloneActiveItem;
@property(readonly, nonatomic) _Bool activeItemIsExpanded; // @synthesize activeItemIsExpanded=_activeItemIsExpanded;
@property(readonly, nonatomic) unsigned long long activeItemIndex; // @synthesize activeItemIndex=_activeItemIndex;
@property(readonly, nonatomic) SFUnifiedBarItem *activeItem; // @synthesize activeItem=_activeItem;
@property(readonly, copy, nonatomic) NSArray *items; // @synthesize items=_items;
- (void)determineActiveItemSquishStateIfNeeded:(_Bool)arg1;
@property(readonly, copy, nonatomic) NSIndexSet *allItemIndexes;
@property(readonly, nonatomic) _Bool revealsSquishedActiveItem;
- (id)arrangementWithActiveItemSquishState:(long long)arg1;
- (id)arrangementWithActiveItemIsExpanded:(_Bool)arg1;
- (id)arrangementWithActiveItem:(id)arg1;
- (_Bool)isEqualToArrangement:(id)arg1;
- (id)_initWithItems:(id)arg1 activeItem:(id)arg2 activeItemIsExpanded:(_Bool)arg3 standaloneActiveItem:(id)arg4;
- (id)initWithItems:(id)arg1 standaloneActiveItem:(id)arg2;
- (id)initWithItems:(id)arg1 activeItem:(id)arg2 activeItemIsExpanded:(_Bool)arg3;
- (id)initWithItem:(id)arg1 activeItemIsExpanded:(_Bool)arg2;
- (id)initWithItems:(id)arg1 activeItem:(id)arg2;
- (id)init;

@end
