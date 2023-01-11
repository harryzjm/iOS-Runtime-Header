//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSOrderedSet;
@protocol SBRecentDisplayItemsPersistenceDelegate;

@interface SBRecentDisplayItemsDataStore : NSObject
{
    NSArray *_recentLayouts;
    id <SBRecentDisplayItemsPersistenceDelegate> _persistenceDelegate;
    _Bool _shouldFallbackToRecentAppLayouts;
}

@property(nonatomic) __weak id <SBRecentDisplayItemsPersistenceDelegate> persistenceDelegate; // @synthesize persistenceDelegate=_persistenceDelegate;
- (void).cxx_destruct;
- (id)_displayItemsFromRecentAppLayouts:(id)arg1;
@property(copy, nonatomic) NSOrderedSet *displayItems;
- (id)initWithRecentLayouts:(id)arg1 fallbackToRecentAppLayouts:(_Bool)arg2;
- (id)init;

@end
