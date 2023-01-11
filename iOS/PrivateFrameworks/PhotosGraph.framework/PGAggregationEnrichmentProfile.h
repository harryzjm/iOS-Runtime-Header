//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosGraph/PGEnrichmentProfile-Protocol.h>

@class NSDictionary, NSString, PGDejunkerDeduperOptions, PGManager;

@interface PGAggregationEnrichmentProfile : NSObject <PGEnrichmentProfile>
{
    _Bool _collectsDebugInfo;
    PGManager *_manager;
    PGDejunkerDeduperOptions *_extendedCurationOptions;
}

@property(retain, nonatomic) PGDejunkerDeduperOptions *extendedCurationOptions; // @synthesize extendedCurationOptions=_extendedCurationOptions;
@property(nonatomic) _Bool collectsDebugInfo; // @synthesize collectsDebugInfo=_collectsDebugInfo;
@property(readonly, nonatomic) PGManager *manager; // @synthesize manager=_manager;
- (void).cxx_destruct;
- (id)curationsWithHighlightTailorContext:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (id)extendedCurationWithHighlightTailorContext:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (id)keyAssetWithHighlightTailorContext:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (unsigned long long)moodWithHighlightTailorContext:(id)arg1;
- (double)promotionScoreWithHighlightTailorContext:(id)arg1;
- (id)momentTitleByMomentUUIDWithHighlightTailorContext:(id)arg1;
@property(readonly) NSDictionary *debugInfos;
- (id)keyAssetCurationCriteriaWithHighlightTailorContext:(id)arg1;
- (id)curationOptionsForForHighlightTailorContext:(id)arg1;
- (id)titleWithHighlightTailorContext:(id)arg1 curatedAssets:(id)arg2 keyAsset:(id)arg3 createVerboseTitle:(_Bool)arg4;
- (id)highlightTailorContextForHighlight:(id)arg1;
- (_Bool)canUseLocationInformationForHighlightTailorContext:(id)arg1;
- (_Bool)canEnrichHighlight:(id)arg1 withOptions:(unsigned long long)arg2;
- (unsigned short)enrichmentStateWithHighlightTailorContext:(id)arg1;
@property(readonly, nonatomic) NSString *identifier;
- (id)initWithManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) unsigned short targetEnrichmentState;

@end
