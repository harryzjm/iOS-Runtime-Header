//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSEnumerator.h>

@class _GCDevicePhysicalInputTransaction;

__attribute__((visibility("hidden")))
@interface _GCDevicePhysicalInputChangedElementsEnumerator : NSEnumerator
{
    _GCDevicePhysicalInputTransaction *_implementation;
    unsigned long long _currentIndex;
}

- (id)nextObject;
- (oneway void)release;
- (id)retain;

@end

