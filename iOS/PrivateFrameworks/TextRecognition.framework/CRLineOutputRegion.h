//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CRLineOutputRegion
{
}

+ (id)_lineWithChildren:(id)arg1 confidence:(int)arg2 quad:(id)arg3 baselineAngle:(double)arg4;
+ (id)lineWithCharacters:(id)arg1 confidence:(int)arg2 quad:(id)arg3 baselineAngle:(double)arg4;
+ (id)lineWithWords:(id)arg1 confidence:(int)arg2 quad:(id)arg3 baselineAngle:(double)arg4;
+ (id)lineWithText:(id)arg1 confidence:(int)arg2 quad:(id)arg3 baselineAngle:(double)arg4;
+ (id)lineWithTextFeature:(id)arg1 candidateIdx:(long long)arg2 subfeatureType:(unsigned long long)arg3 imageSize:(struct CGSize)arg4 confidenceThresholdProvider:(id)arg5 injectSpaceCharacter:(_Bool)arg6;
+ (id)lineWithTextFeature:(id)arg1 subfeatureType:(unsigned long long)arg2 imageSize:(struct CGSize)arg3 confidenceThresholdProvider:(id)arg4;
+ (id)lineWithTextFeature:(id)arg1 subfeatureType:(unsigned long long)arg2 imageSize:(struct CGSize)arg3 confidenceThresholdProvider:(id)arg4 injectSpaceCharacter:(_Bool)arg5;
- (id)joiningDelimeter;
- (unsigned long long)type;
- (long long)wordCount;
- (id)contentBaselines;

@end
