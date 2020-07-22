//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface VNAlignFaceRectangleRequest
{
    NSArray *_inputFaceObservations;
}

@property(readonly, copy, nonatomic) NSArray *inputFaceObservations; // @synthesize inputFaceObservations=_inputFaceObservations;
- (void).cxx_destruct;
- (_Bool)warmUpRequestPerformer:(id)arg1 error:(id *)arg2;
- (_Bool)internalPerformInContext:(id)arg1 error:(id *)arg2;
- (void)_determineFacesToProcessFrom:(id)arg1 outputFacesThatNeedNoProcessing:(id)arg2 outputFacesThatNeedProcessing:(id)arg3;
- (id)observationsCacheKey;
- (id)newDefaultRequestInstance;
- (id)initWithName:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initWithFaceObservations:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithFaceObservations:(id)arg1;

@end

