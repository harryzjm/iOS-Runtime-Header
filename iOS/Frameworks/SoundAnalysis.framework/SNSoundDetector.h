//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SoundAnalysis/SNAnalyzing-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SNSoundDetector <SNAnalyzing>
{
}

+ (id)detectorHeadConfigurationForSoundIdentifier:(id)arg1 analysisPassStrategy:(long long)arg2;
+ (id)detectorConfigurationWithLogMelBasedFeatureExtractor:(id)arg1 detectorHead:(id)arg2 soundIdentifier:(id)arg3;
+ (id)soundPrint100kDetectorConfigurationWithSoundIdentifier:(id)arg1;
+ (id)vggishDetectorConfigurationWithSoundIdentifier:(id)arg1;
- (id)initWithVGGishBasedMLModel:(id)arg1 soundIdentifier:(id)arg2;
- (id)initWithSoundIdentifier:(id)arg1 analysisPassStrategy:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) shared_ptr_f6ac7592 graph;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) struct Box *resultsBox;
@property(readonly) Class superclass;

@end
