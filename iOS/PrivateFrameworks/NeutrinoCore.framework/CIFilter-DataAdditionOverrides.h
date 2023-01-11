//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreImage/CIFilter.h>

@interface CIFilter (DataAdditionOverrides)
+ (id)faceBalanceExtractDataToDictionary:(id)arg1 dataExtractor:(id)arg2 options:(id)arg3 context:(id)arg4 colorSpace:(struct CGColorSpace *)arg5 error:(id *)arg6;
+ (id)autoRedEyeExtractDataToDictionary:(id)arg1 dataExtractor:(id)arg2 options:(id)arg3 context:(id)arg4 colorSpace:(struct CGColorSpace *)arg5 error:(id *)arg6;
+ (id)smartColorExtractDataToDictionary:(id)arg1 dataExtractor:(id)arg2 options:(id)arg3 context:(id)arg4 colorSpace:(struct CGColorSpace *)arg5 error:(id *)arg6;
+ (id)localLightExtractDataToDictionary:(id)arg1 dataExtractor:(id)arg2 options:(id)arg3 context:(id)arg4 colorSpace:(struct CGColorSpace *)arg5 error:(id *)arg6;
+ (id)smartToneExtractDataToDictionary:(id)arg1 dataExtractor:(id)arg2 options:(id)arg3 context:(id)arg4 colorSpace:(struct CGColorSpace *)arg5 error:(id *)arg6;
+ (id)straightenExtractDataToDictionary:(id)arg1 dataExtractor:(id)arg2 options:(id)arg3 context:(id)arg4 colorSpace:(struct CGColorSpace *)arg5 error:(id *)arg6;
+ (id)perspectiveExtractDataToDictionary:(id)arg1 dataExtractor:(id)arg2 options:(id)arg3 context:(id)arg4 colorSpace:(struct CGColorSpace *)arg5 error:(id *)arg6;
+ (id)reductionFilterExtractDataToDictionary:(id)arg1 dataExtractor:(id)arg2 options:(id)arg3 context:(id)arg4 colorSpace:(struct CGColorSpace *)arg5 error:(id *)arg6;
+ (id)extractDataToDictionary:(id)arg1 dataExtractor:(id)arg2 options:(id)arg3 context:(id)arg4 colorSpace:(struct CGColorSpace *)arg5 error:(id *)arg6;
+ (id)_dataExtractionOverrrides;
- (id)extractDataToDictionary:(id)arg1 options:(id)arg2 context:(id)arg3 colorSpace:(struct CGColorSpace *)arg4 error:(id *)arg5;
@end
