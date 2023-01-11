//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface TSTStrokeRunArray : NSObject
{
    _Bool mHasCustomStrokes;
    double mMaxWidth;
    unsigned int mCount;
    unsigned int mAllocCount;
    unsigned int mLastLookup;
    struct TSTStrokeRun *mStrokes;
    struct _opaque_pthread_rwlock_t mRWLock;
}

@property(readonly, nonatomic) double maxWidth; // @synthesize maxWidth=mMaxWidth;
- (id)description;
- (void)dealloc;
- (id)initWithCount:(unsigned int)arg1;

@end

