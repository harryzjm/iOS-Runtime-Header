//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSMutableDictionary.h>

@interface NSMutableDictionary (DVTFoundationClassAdditions)
- (void)dvt_intersectKeys:(id)arg1;
- (void)dvt_setObject:(id)arg1 forKeyIfNonNil:(id)arg2;
- (void)dvt_setObjectIfNonNil:(id)arg1 forKey:(id)arg2;
- (id)dvt_objectForKey:(id)arg1 creatingIfNecessaryWithBlock:(CDUnknownBlockType)arg2;
- (id)dvt_objectForKey:(id)arg1 creatingIfNecessaryFromClass:(Class)arg2;
- (id)dvt_extractObjectForKey:(id)arg1;
- (void)dvt_recursivelyRemoveAllObjects;
- (void)dvt_setRect:(struct CGRect)arg1 forKey:(id)arg2;
- (void)dvt_setSize:(struct CGSize)arg1 forKey:(id)arg2;
- (void)dvt_setPoint:(struct CGPoint)arg1 forKey:(id)arg2;
- (void)dvt_setDouble:(double)arg1 forKey:(id)arg2;
- (void)dvt_setFloat:(float)arg1 forKey:(id)arg2;
- (void)dvt_setBool:(_Bool)arg1 forKey:(id)arg2;
- (void)dvt_setInteger:(long long)arg1 forKey:(id)arg2;
- (void)dvt_addObject:(id)arg1 toSetForKey:(id)arg2;
- (void)dvt_addObject:(id)arg1 toArrayForKey:(id)arg2;
- (void)dvt_setObject:(id)arg1 forKey:(id)arg2 inDictionaryForKey:(id)arg3;
@end

