//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SilexVideo/NSCopying-Protocol.h>

@class NSArray, NSMutableDictionary;

@interface SVWeakObjectCache : NSObject <NSCopying>
{
    NSMutableDictionary *_cache;
}

@property(readonly, nonatomic) NSMutableDictionary *cache; // @synthesize cache=_cache;
- (void).cxx_destruct;
- (void)removeObjectForIdentifier:(id)arg1;
@property(readonly, nonatomic) NSArray *allObjects;
- (void)removeObjectForKey:(id)arg1;
- (id)objectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

