//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface __NSSingleObjectSetI
{
    id element;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)__new:(id)arg1:(_Bool)arg2;
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)getObjects:(id *)arg1 count:(unsigned long long)arg2;
- (void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_58648341 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)objectEnumerator;
- (id)member:(id)arg1;
- (unsigned long long)count;

@end
