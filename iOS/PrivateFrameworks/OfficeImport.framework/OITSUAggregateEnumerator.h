//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSEnumerator.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface OITSUAggregateEnumerator : NSEnumerator
{
    NSMutableArray *_objects;
}

+ (id)aggregateEnumeratorWithObjects:(id)arg1;
- (id)nextObject;
- (void)addObject:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithObjects:(id)arg1;
- (id)initWithFirstObject:(id)arg1 argumentList:(struct __va_list_tag [1])arg2;

@end

