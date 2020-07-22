//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSMapTable.h>

@interface NSMapTable (DVTNSMapTableAdditions)
+ (id)dvt_strongObjectToStrongObjectTable;
+ (id)dvt_strongObjectPointerToStrongObjectTable;
- (id)dvt_objectForKey:(id)arg1 creatingIfNecessaryWithBlock:(CDUnknownBlockType)arg2;
- (id)dvt_objectForKey:(id)arg1 creatingIfNecessaryFromClass:(Class)arg2;
- (void)dvt_addObject:(id)arg1 toArrayForKey:(id)arg2;
- (id)dvt_collectionOfClass:(Class)arg1 forKey:(id)arg2;
- (id)dvt_removeObjectForKey:(id)arg1;
- (void)dvt_enumerateKeysAndObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (_Bool)dvt_isNonEmpty;
- (id)dvt_allValues;
- (id)dvt_allKeys;
@end

