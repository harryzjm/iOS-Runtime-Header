//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface VCPEffectsAnalyzer : NSObject
{
    _Bool _hasFaceOrPet;
}

+ (_Bool)usePHAssetScene;
- (int)analyzeAsset:(id)arg1 onDemand:(_Bool)arg2 cancel:(CDUnknownBlockType)arg3 statsFlags:(unsigned long long *)arg4 results:(id *)arg5;
- (id)initWithFlagHasFaceOrPet:(_Bool)arg1;
- (id)initWithAnalysisResults:(id)arg1;

@end
