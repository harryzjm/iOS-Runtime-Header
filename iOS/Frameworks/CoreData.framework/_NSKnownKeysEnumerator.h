//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSEnumerator.h>

__attribute__((visibility("hidden")))
@interface _NSKnownKeysEnumerator : NSEnumerator
{
    id _target;
    const id *_list;
    const id *_referenceItems;
    struct _NSRange _range;
    unsigned long long _index;
    unsigned long long _flags;
}

- (id)nextObject;
- (void)dealloc;

@end

