//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class KNSlideNode, NSUUID, TSUWeakReference;

__attribute__((visibility("hidden")))
@interface KNRecordingNavigationEvent
{
    TSUWeakReference *mTargetSlideNodeContextReference;
    NSUUID *mTargetSlideNodeUUID;
    unsigned long long mTargetEventIndex;
    long long mAnimationPhase;
}

@property(readonly, nonatomic) long long animationPhase; // @synthesize animationPhase=mAnimationPhase;
@property(readonly, nonatomic) unsigned long long targetEventIndex; // @synthesize targetEventIndex=mTargetEventIndex;
- (_Bool)canPrecedeDiscontinuity;
- (_Bool)isIgnoredWhenSeeking;
@property(readonly, nonatomic) KNSlideNode *targetSlideNode;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithStartTime:(double)arg1;
- (id)initWithStartTime:(double)arg1 targetSlideNode:(id)arg2 targetEventIndex:(unsigned long long)arg3 animationPhase:(long long)arg4;
- (void)saveToArchive:(struct RecordingEventArchive *)arg1 archiver:(id)arg2;
- (id)initWithParentEventTrack:(id)arg1 archive:(const struct RecordingEventArchive *)arg2 unarchiver:(id)arg3;

@end
