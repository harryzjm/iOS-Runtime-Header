//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface OITSULinkedPointerSetEntry : NSObject
{
    id mObject;
    OITSULinkedPointerSetEntry *mPrevious;
    OITSULinkedPointerSetEntry *mNext;
}

- (void)dealloc;
- (id)initWithObject:(id)arg1 previousEntry:(id)arg2;

@end
