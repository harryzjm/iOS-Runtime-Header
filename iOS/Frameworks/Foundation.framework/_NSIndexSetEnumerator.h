//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSEnumerator.h>

@class NSIndexSet;

__attribute__((visibility("hidden")))
@interface _NSIndexSetEnumerator : NSEnumerator
{
    NSIndexSet *_indexSet;
    unsigned long long _index;
}

- (id)nextObject;
- (void)dealloc;
- (id)initWithIndexSet:(id)arg1;

@end

