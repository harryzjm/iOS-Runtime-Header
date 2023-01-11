//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CAPresentationModifierGroup : NSObject
{
    void *_shmem;
    unsigned long long _capacity;
    unsigned long long _count;
}

+ (id)groupWithCapacity:(unsigned long long)arg1;
- (void)flush;
@property(readonly) unsigned long long count;
@property(readonly) unsigned long long capacity;
- (struct Shmem *)shmem;
- (void)markWritten:(unsigned long long)arg1;
- (void)resetBitMask;
- (unsigned long long)nextSlot;
- (void)dealloc;
- (id)initWithCapacity:(unsigned long long)arg1;

@end
