//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@interface VMConfiguration : NSObject
{
}

+ (id)metadataDictionaryForSpeechAssetWithLanguage:(id)arg1;
+ (id)confidenceThresholdFromAssetForKey:(id)arg1;
+ (id)confidenceSegmentThresholdFromAsset;
+ (id)confidenceLowQualityThresholdFromAsset;
+ (id)confidenceThresholdFromAsset;
+ (id)confidenceThresholdFromDefaultsForKey:(id)arg1;
+ (float)confidenceSegmentThreshold;
+ (float)confidenceLowQualityThreshold;
+ (float)confidenceThreshold;
+ (id)localeForTranscriptionLanguage;

@end
