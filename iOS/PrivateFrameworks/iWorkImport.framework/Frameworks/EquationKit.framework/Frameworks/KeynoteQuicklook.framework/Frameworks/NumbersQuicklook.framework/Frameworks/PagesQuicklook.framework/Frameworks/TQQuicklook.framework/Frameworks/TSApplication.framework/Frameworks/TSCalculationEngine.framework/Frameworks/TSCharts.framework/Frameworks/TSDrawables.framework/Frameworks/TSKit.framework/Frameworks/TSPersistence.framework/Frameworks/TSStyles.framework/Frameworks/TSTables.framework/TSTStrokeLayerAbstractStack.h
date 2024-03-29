//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface TSTStrokeLayerAbstractStack : NSObject
{
    struct _opaque_pthread_rwlock_t mRWLock;
}

- (void)unlock;
- (void)lockForWrite;
- (void)lockForRead;
- (id)mutableStrokeLayerWithContext:(id)arg1 subtractingDefaultsFrom:(id)arg2 forRange:(struct TSTSimpleRange)arg3;
- (id)portalledStrokeLayer;
- (void)enumerateStrokesAndCapsInRange:(struct TSTSimpleRange)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateStrokesAndCapsFrom:(unsigned int)arg1 to:(unsigned int)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)enumerateWidthsInRange:(struct TSTSimpleRange)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateStrokesInRange:(struct TSTSimpleRange)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateStrokesFrom:(unsigned int)arg1 to:(unsigned int)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (id)lookupStrokeAtIndex:(long long)arg1;
- (unsigned long long)count;
- (vector_7cb30fb3)p_strokeLayerVector;
- (void)dealloc;
- (id)init;

@end

