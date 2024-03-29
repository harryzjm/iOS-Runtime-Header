//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSMapTable.h>

@interface NSMapTable (TSPersistence)
+ (id)newTspWeakObjectsMapTable;
+ (id)newTspStrongObjectsMapTable;
- (void)enumerateIdentifiersAndObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (void)tsp_removeObjectForIdentifier:(long long)arg1;
- (id)tsp_objectForIdentifier:(long long)arg1;
- (void)tsp_setObject:(id)arg1 forIdentifier:(long long)arg2;
@end

