//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDictionary.h>

@class _PFResultArray;

__attribute__((visibility("hidden")))
@interface _PFResultObject : NSDictionary
{
    _PFResultArray *_parent_buffer;
    int _cd_rc;
    unsigned int _count;
    unsigned long long _sql_entity_id;
    unsigned long long _primary_key;
}

+ (Class)classForKeyedUnarchiver;
- (id)keyEnumerator;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)dealloc;
- (unsigned long long)retainCount;
- (oneway void)release;
- (id)retain;
- (void)_setParentBuffer:(id)arg1;
- (unsigned long long)count;
- (id)objectForKey:(id)arg1;
- (id)valueAtIndex:(unsigned long long)arg1;
- (Class)classForCoder;
- (id)initWithObjects:(const id *)arg1 forKeys:(const id *)arg2 count:(unsigned long long)arg3;

@end

