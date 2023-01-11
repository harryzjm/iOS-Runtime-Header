//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeAI/HMFLogging-Protocol.h>

@class HMICameraVideoFrame, HMICameraVideoResourceAttributes, NSMutableArray, NSString;
@protocol HMICameraVideoFrameSamplerDelegate;

@interface HMICameraVideoFrameSampler : HMFObject <HMFLogging>
{
    _Bool _markedAsFinished;
    id <HMICameraVideoFrameSamplerDelegate> _delegate;
    HMICameraVideoResourceAttributes *_attributes;
    NSMutableArray *_unmatchedSampleFrames;
    HMICameraVideoFrame *_frame;
    CDStruct_1b6d18a9 _targetInterval;
    CDStruct_1b6d18a9 _sampleInterval;
}

+ (id)logCategory;
- (void).cxx_destruct;
@property(getter=isMarkedAsFinished) _Bool markedAsFinished; // @synthesize markedAsFinished=_markedAsFinished;
@property(retain) HMICameraVideoFrame *frame; // @synthesize frame=_frame;
@property(readonly) NSMutableArray *unmatchedSampleFrames; // @synthesize unmatchedSampleFrames=_unmatchedSampleFrames;
@property(readonly) CDStruct_1b6d18a9 sampleInterval; // @synthesize sampleInterval=_sampleInterval;
@property(readonly) HMICameraVideoResourceAttributes *attributes; // @synthesize attributes=_attributes;
@property(readonly) CDStruct_1b6d18a9 targetInterval; // @synthesize targetInterval=_targetInterval;
@property __weak id <HMICameraVideoFrameSamplerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)finish;
- (_Bool)appendFrame:(id)arg1 error:(id *)arg2;
- (_Bool)isFinishedEarly;
- (_Bool)_appendFrame:(id)arg1 error:(id *)arg2;
- (id)initWithResourceAttributes:(id)arg1 sampleRate:(CDStruct_1b6d18a9)arg2 targetInterval:(CDStruct_1b6d18a9)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
