//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSEnumerator.h>

__attribute__((visibility("hidden")))
@interface _PFResultObjectKeyEnumerator : NSEnumerator
{
    id _target;
    const id *_keys;
    unsigned long long *_referenceItems;
    struct _NSRange _range;
    unsigned long long _index;
}

- (id)nextObject;
- (void)dealloc;
- (id)initWithArray:(const id *)arg1 forTarget:(id)arg2 withReferenceValues:(unsigned long long *)arg3 andRange:(struct _NSRange)arg4;

@end

