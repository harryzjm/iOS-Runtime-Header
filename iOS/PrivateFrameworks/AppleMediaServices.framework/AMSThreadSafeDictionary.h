//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSThreadSafeObject, NSArray;

__attribute__((visibility("hidden")))
@interface AMSThreadSafeDictionary : NSObject
{
    AMSThreadSafeObject *_backingDictionary;
}

- (void).cxx_destruct;
@property(retain, nonatomic) AMSThreadSafeObject *backingDictionary; // @synthesize backingDictionary=_backingDictionary;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)removeObjectForKey:(id)arg1;
- (void)removeAllObjects;
- (void)readWrite:(CDUnknownBlockType)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)objectForKey:(id)arg1;
@property(readonly, copy) NSArray *allValues;
@property(readonly, copy) NSArray *allKeys;
- (id)init;

@end

