//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class TSUPointerKeyDictionary;

__attribute__((visibility("hidden")))
@interface TSCH3DGLPointerCountedSet : NSObject
{
    TSUPointerKeyDictionary *mSet;
    unsigned long long mCount;
    unsigned long long mByteCount;
}

@property(readonly, nonatomic) unsigned long long count; // @synthesize count=mCount;
- (void)addObject:(id)arg1;
- (id)description;
- (id)descriptionWithFrames:(unsigned long long)arg1;
- (void)dealloc;
- (id)init;

@end

