//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSEnumerator.h>

@class ML3DatabaseConnection;

__attribute__((visibility("hidden")))
@interface _ML3SortMapFaultingNameOrderDictionaryEnumerator : NSEnumerator
{
    NSEnumerator *_dirtyInsertsEnumerator;
    ML3DatabaseConnection *_connection;
    unsigned long long _offset;
}

- (void).cxx_destruct;
- (id)nextObject;
- (id)initWithDirtyInsertsEnumerator:(id)arg1 connection:(id)arg2;

@end

