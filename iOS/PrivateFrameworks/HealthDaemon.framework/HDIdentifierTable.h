//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable;

@interface HDIdentifierTable : NSObject
{
    NSMapTable *_map;
    unsigned long long _nextIdentifier;
}

@property(nonatomic) unsigned long long nextIdentifier; // @synthesize nextIdentifier=_nextIdentifier;
@property(retain, nonatomic) NSMapTable *map; // @synthesize map=_map;
- (void).cxx_destruct;
- (id)allObjects;
- (void)removeAllObjects;
- (void)removeObjectWithIdentifier:(unsigned long long)arg1;
- (id)objectWithIdentifier:(unsigned long long)arg1;
- (unsigned long long)addObject:(id)arg1;
- (unsigned long long)count;

@end

