//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeAI/NSSecureCoding-Protocol.h>

@class HMICameraVideoFrame, NSArray, NSDictionary, NSSet;

@interface HMICameraVideoFrameResult : NSObject <NSSecureCoding>
{
    HMICameraVideoFrame *_frame;
    NSDictionary *_annotationScores;
    long long _events;
    NSArray *_detections;
    NSSet *_faceClassifications;
    NSSet *_analyzerEvents;
    struct CGRect _regionOfInterest;
}

+ (id)_detectionsFromAnalyzerEvents:(id)arg1;
+ (id)_annotationScoresFromAnalyzerEvents:(id)arg1;
+ (long long)_eventsFromAnalyzerEvents:(id)arg1;
+ (id)_faceClassificationsFromAnalyzerEvents:(id)arg1;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly) NSSet *analyzerEvents; // @synthesize analyzerEvents=_analyzerEvents;
@property(readonly) NSSet *faceClassifications; // @synthesize faceClassifications=_faceClassifications;
@property(readonly) struct CGRect regionOfInterest; // @synthesize regionOfInterest=_regionOfInterest;
@property(readonly) NSArray *detections; // @synthesize detections=_detections;
@property(readonly) long long events; // @synthesize events=_events;
@property(readonly) NSDictionary *annotationScores; // @synthesize annotationScores=_annotationScores;
@property(readonly) HMICameraVideoFrame *frame; // @synthesize frame=_frame;
- (id)maxConfidenceEventForEventClass:(Class)arg1;
- (long long)confidenceThatEventOccurred:(long long)arg1;
- (id)initWithFrame:(id)arg1 regionOfInterest:(struct CGRect)arg2 analyzerEvents:(id)arg3;
- (id)initWithFrame:(id)arg1 events:(long long)arg2 annotationScores:(id)arg3 detections:(id)arg4 regionOfInterest:(struct CGRect)arg5 faceClassifications:(id)arg6;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
