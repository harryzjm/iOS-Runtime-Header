//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NeutrinoCore/AVVideoCompositionInstruction-Protocol.h>
#import <NeutrinoCore/NSCopying-Protocol.h>

@class NSArray, NSMutableDictionary, NSString, NUColorSpace, NUComposition, NURenderContext, NURenderJob;

@interface NUVideoCompositionInstruction : NSObject <AVVideoCompositionInstruction, NSCopying>
{
    NSMutableDictionary *_sourceIdentifiersByTrackID;
    NSArray *_requiredSourceTrackIDs;
    NURenderJob *_renderJob;
    NURenderContext *_renderContext;
    NUComposition *_adjustmentComposition;
    NSArray *_pipelineFilters;
    NUColorSpace *_colorSpace;
    long long _sampleMode;
    CDStruct_1e2b2e48 _renderScale;
    CDStruct_e83c9415 _timeRange;
}

+ (id)instructionFromBase:(id)arg1;
@property(nonatomic) long long sampleMode; // @synthesize sampleMode=_sampleMode;
@property(retain, nonatomic) NUColorSpace *colorSpace; // @synthesize colorSpace=_colorSpace;
@property(nonatomic) CDStruct_912cb5d2 renderScale; // @synthesize renderScale=_renderScale;
@property(retain, nonatomic) NSArray *pipelineFilters; // @synthesize pipelineFilters=_pipelineFilters;
@property(retain, nonatomic) NUComposition *adjustmentComposition; // @synthesize adjustmentComposition=_adjustmentComposition;
@property(retain) NURenderContext *renderContext; // @synthesize renderContext=_renderContext;
@property(nonatomic) __weak NURenderJob *renderJob; // @synthesize renderJob=_renderJob;
@property(retain, nonatomic) NSArray *requiredSourceTrackIDs; // @synthesize requiredSourceTrackIDs=_requiredSourceTrackIDs;
@property(nonatomic) CDStruct_e83c9415 timeRange; // @synthesize timeRange=_timeRange;
- (void).cxx_destruct;
- (_Bool)isEqualToInstruction:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)sourceIdentifierForTrackID:(id)arg1;
- (void)setSourceIdentifier:(id)arg1 forTrackID:(id)arg2;
@property(readonly, nonatomic) int passthroughTrackID;
@property(readonly, nonatomic) _Bool containsTweening;
@property(readonly, nonatomic) _Bool enablePostProcessing;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

