//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface CKOrderedDictionary : NSObject
{
    NSMutableArray *tuples;
}

+ (id)orderedDictionaryWithCapacity:(unsigned long long)arg1;
+ (id)orderedDictionary;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long count;
- (void)enumerateKeysAndObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (id)dictionaryRepresentationRecursive:(_Bool)arg1;
- (void)addObject:(id)arg1 forKey:(id)arg2;
- (id)description;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)init;

@end
