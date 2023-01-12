//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Portrait/PTSerialization-Protocol.h>

@class NSArray, NSDictionary, NSNumber, NSSet, NSString, PTCinematographyDetection, PTCinematographyFocusBlend;

@interface PTCinematographyFrame : NSObject <PTSerialization>
{
    _Bool _userFocusStrong;
    _Bool _userFocusGroup;
    _Bool _userFocusEnd;
    float _aperture;
    float _focusDistance;
    float _rawFocusDistance;
    float _transitionCoefficient;
    float _transitionElapsedTime;
    float _transitionDuration;
    NSNumber *_frameNumber;
    id _snapshot;
    unsigned long long _snapshotPolicy;
    NSNumber *_detectorDidRun;
    PTCinematographyDetection *_focusDetection;
    NSArray *_allDetections;
    NSNumber *_focusTrackNumber;
    NSNumber *_baseFocusTrackNumber;
    NSNumber *_userFocusTrackNumber;
    NSDictionary *_cachedDetectionsByFocusIdentifier;
    NSDictionary *_cachedDetectionsByTrackIdentifier;
    PTCinematographyFocusBlend *_focusBlend;
    CDStruct_1b6d18a9 _time;
}

+ (void)initialize;
+ (void)_debugLogFrame:(id)arg1 label:(id)arg2;
+ (void)_debugLogFrames:(id)arg1 label:(id)arg2;
+ (id)_framesWithCinematographyDictionaries:(id)arg1;
+ (id)_frameHeaderFromAtomStream:(id)arg1;
+ (id)_frameFromInnerAtomStream:(id)arg1;
+ (id)objectFromAtomStream:(id)arg1;
+ (void)registerForSerialization;
- (void).cxx_destruct;
@property(retain, nonatomic) PTCinematographyFocusBlend *focusBlend; // @synthesize focusBlend=_focusBlend;
@property(readonly, nonatomic) NSDictionary *cachedDetectionsByTrackIdentifier; // @synthesize cachedDetectionsByTrackIdentifier=_cachedDetectionsByTrackIdentifier;
@property(readonly, nonatomic) NSDictionary *cachedDetectionsByFocusIdentifier; // @synthesize cachedDetectionsByFocusIdentifier=_cachedDetectionsByFocusIdentifier;
@property(nonatomic) float transitionDuration; // @synthesize transitionDuration=_transitionDuration;
@property(nonatomic) float transitionElapsedTime; // @synthesize transitionElapsedTime=_transitionElapsedTime;
@property(nonatomic) float transitionCoefficient; // @synthesize transitionCoefficient=_transitionCoefficient;
@property(nonatomic, getter=isUserFocusEnd) _Bool userFocusEnd; // @synthesize userFocusEnd=_userFocusEnd;
@property(nonatomic, getter=isUserFocusGroup) _Bool userFocusGroup; // @synthesize userFocusGroup=_userFocusGroup;
@property(nonatomic, getter=isUserFocusStrong) _Bool userFocusStrong; // @synthesize userFocusStrong=_userFocusStrong;
@property(retain, nonatomic) NSNumber *userFocusTrackNumber; // @synthesize userFocusTrackNumber=_userFocusTrackNumber;
@property(retain, nonatomic) NSNumber *baseFocusTrackNumber; // @synthesize baseFocusTrackNumber=_baseFocusTrackNumber;
@property(retain, nonatomic) NSNumber *focusTrackNumber; // @synthesize focusTrackNumber=_focusTrackNumber;
@property(nonatomic) float rawFocusDistance; // @synthesize rawFocusDistance=_rawFocusDistance;
@property(retain, nonatomic) NSArray *allDetections; // @synthesize allDetections=_allDetections;
@property(retain, nonatomic) PTCinematographyDetection *focusDetection; // @synthesize focusDetection=_focusDetection;
@property(nonatomic) float focusDistance; // @synthesize focusDistance=_focusDistance;
@property(nonatomic) float aperture; // @synthesize aperture=_aperture;
@property(nonatomic) CDStruct_1b6d18a9 time; // @synthesize time=_time;
@property(retain, nonatomic, setter=_setDetectorDidRun:) NSNumber *_detectorDidRun; // @synthesize _detectorDidRun;
@property(nonatomic, setter=_setSnapshotPolicy:) unsigned long long _snapshotPolicy; // @synthesize _snapshotPolicy;
@property(retain, nonatomic, setter=_setSnapshot:) id _snapshot; // @synthesize _snapshot;
@property(retain, nonatomic, setter=_setFrameNumber:) NSNumber *_frameNumber; // @synthesize _frameNumber;
- (id)_detectionsByFocusIdentifier;
- (id)_detectionsByTrackIdentifier;
- (id)detectionAtPoint:(struct CGPoint)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (id)detectionForTrack:(id)arg1;
- (id)primaryFocusDetection;
- (id)detectionForFocusIdentifier:(id)arg1;
- (void)setDetections:(id)arg1;
- (id)detections;
@property(readonly, nonatomic) _Bool isInTransition;
- (id)bestDetectionForGroupIdentifier:(long long)arg1;
- (id)detectionForTrackIdentifier:(long long)arg1;
@property(readonly, nonatomic) long long focusGroupIdentifier;
@property(readonly, nonatomic) long long focusTrackIdentifier;
- (void)_updateDetectionTimes;
@property(readonly, nonatomic) NSSet *_detectionTrackNumberSet;
@property(readonly, nonatomic, getter=isFocusStrong) _Bool focusStrong;
- (id)asCinematographyDictionary;
- (void)_focusFromDetection:(id)arg1 toDetection:(id)arg2 rawFocusDistance:(float)arg3 focusDistance:(float)arg4 transitionCoefficient:(float)arg5 elapsedTime:(float)arg6 duration:(float)arg7;
- (void)focusOnDetection:(id)arg1 focusPuller:(id)arg2;
- (void)focusOnDetection:(id)arg1;
- (void)focusOnNothing;
- (void)_restoreOriginal;
- (id)_asCinematographyDictionary;
- (id)_initWithCinematographyDictionary:(id)arg1 time:(CDStruct_1b6d18a9)arg2;
- (id)_initWithCinematographyDictionary:(id)arg1;
- (id)_focusDetectionFromCoefficientsDictionary:(id)arg1 coefficient:(float *)arg2;
- (void)_flushCachedDetectionsDictionaries;
- (void)_removeDetectionWithTrackIdentifier:(long long)arg1;
- (void)_removeDetection:(id)arg1;
- (void)_addDetection:(id)arg1;
- (id)detectionForTrackNumber:(id)arg1;
- (_Bool)_writeHeaderToAtomWriter:(id)arg1 options:(id)arg2;
- (_Bool)writeToAtomWriter:(id)arg1 options:(id)arg2;
- (unsigned long long)sizeOfSerializedObjectWithOptions:(id)arg1;
- (_Bool)supportsVersion:(unsigned long long)arg1;
- (_Bool)_copyToFrameHeaderData_0:(struct FrameHeaderData_0 *)arg1;
- (id)_initWithFrameHeaderData_0:(struct FrameHeaderData_0 *)arg1;

// Remaining properties
@property(readonly) Class superclass;

@end
