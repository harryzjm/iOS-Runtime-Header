//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface VNCreateSceneprintRequest
{
    _Bool _returnAllResults;
}

+ (void)recordDefaultOptionsInDictionary:(id)arg1;
@property(nonatomic) _Bool returnAllResults; // @synthesize returnAllResults=_returnAllResults;
- (_Bool)internalPerformInContext:(id)arg1 error:(id *)arg2;
- (void)applyConfigurationOfRequest:(id)arg1;
- (id)sequencedRequestPreviousObservationsKey;
- (id)observationsCacheKey;
- (id)initWithName:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)warmUpRequestPerformer:(id)arg1 error:(id *)arg2;

@end
