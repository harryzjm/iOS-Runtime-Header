//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface VCPVideoGyroStabilizer
{
    NSMutableDictionary *_analysisDict;
    NSArray *_metadata;
    struct CGSize _cropSize;
}

- (void).cxx_destruct;
- (void)storeAnalytics:(struct CGAffineTransform)arg1 isLivePhoto:(_Bool)arg2;
- (int)convertAnalysisResult;
- (id)initWithMetadata:(id)arg1 sourceSize:(struct CGSize)arg2 cropRect:(struct CGRect)arg3;

@end
