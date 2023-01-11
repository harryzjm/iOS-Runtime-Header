//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, NSMutableDictionary;

@interface VCPVideoMetaFaceAnalyzer
{
    NSMutableDictionary *_activeFaces;
    struct CGAffineTransform _transform;
    NSMutableArray *_faceResults;
}

- (void).cxx_destruct;
- (id)publicResults;
- (int)finalizeAnalysis;
- (int)processMetadataGroup:(id)arg1 flags:(unsigned long long *)arg2;
- (struct CGAffineTransform)flipTransform:(struct CGAffineTransform)arg1;
- (id)initWithTransform:(struct CGAffineTransform)arg1;

@end
