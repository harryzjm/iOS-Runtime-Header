//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PGInfrequentCountryFeatureExtractor
{
}

+ (id)_labelsForVersion:(long long)arg1;
+ (id)inferredUserLanguageCodesFromGraph:(id)arg1;
- (id)initWithVersion:(long long)arg1 graph:(id)arg2 error:(id *)arg3;
- (id)initWithFrequentCountryLabels:(id)arg1 version:(long long)arg2 graph:(id)arg3 error:(id *)arg4;
- (id)initWithError:(id *)arg1;

@end
