//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface TSAllanDeviationAnalysis
{
    double *_adev;
}

+ (id)plotSize;
+ (id)plotTitle;
+ (id)plotYLabel;
+ (id)variableName;
- (void)dealloc;
- (_Bool)exportTimeErrorsToDirectoryURL:(id)arg1;
- (_Bool)exportAnalysisToDirectoryURL:(id)arg1 withFilename:(id)arg2 fromStartWindowSize:(long long)arg3 toEndWindowSize:(long long)arg4 stepSize:(long long)arg5;
- (_Bool)exportAnalysisToDirectoryURL:(id)arg1;
- (id)adevFromStartWindowSize:(long long)arg1 toEndWindowSize:(long long)arg2 stepSize:(long long)arg3;
@property(readonly, copy, nonatomic) NSArray *adev; // @dynamic adev;
- (void)_performAnalysisFromWindowSize:(long long)arg1 toWindowSize:(long long)arg2 stepSize:(long long)arg3;
- (long long)analysisLimit;
- (id)initWithTimeErrorValues:(id)arg1;

@end

