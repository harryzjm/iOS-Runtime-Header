//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface IBBinaryArchiverObjectIDTable : NSObject
{
    struct IBObjectIDHashEntry_tag *_table;
    long long _capacity;
    long long _count;
}

- (void)addObject:(id)arg1 withObjectID:(long long)arg2;
- (long long)objectIDForObject:(id)arg1;
- (void)rehash;
- (void)dealloc;
- (id)initWithCapacity:(long long)arg1;

@end
