//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface VNImageBlurScoreRequest
{
}

+ (void)recordDefaultOptionsInDictionary:(id)arg1;
+ (Class)configurationClass;
- (_Bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id *)arg3;
- (void)applyConfigurationOfRequest:(id)arg1;
- (_Bool)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1;
@property(nonatomic) unsigned long long maximumIntermediateSideLength;
@property(nonatomic) unsigned long long blurDeterminationMethod;

@end
