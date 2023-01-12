//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "GCPhysicalInputElementCollection.h"

@class _GCDevicePhysicalInputBase;

__attribute__((visibility("hidden")))
@interface _GCDevicePhysicalInputElementsCollection : GCPhysicalInputElementCollection
{
    _GCDevicePhysicalInputBase *_implementation;
}

- (id)elementForAlias:(id)arg1;
- (id)elementAtIndex:(unsigned long long)arg1;
- (unsigned long long)count;
- (_Bool)allowsWeakReference;
- (unsigned long long)retainCount;
- (oneway void)release;
- (id)retain;

@end

