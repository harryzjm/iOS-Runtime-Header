//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, VCPImageHandsAnalyzer;

@interface VCPHandPoseVideoRequest
{
    int _handID;
    int _preferredWidth;
    int _preferredHeight;
    unsigned int _preferredFormat;
    VCPImageHandsAnalyzer *_analyzer;
    NSArray *_existingHands;
}

- (void).cxx_destruct;
- (_Bool)cleanupWithOptions:(id)arg1 error:(id *)arg2;
- (unsigned int)preferredPixelFormat;
- (struct CGSize)preferredInputSizeWithOptions:(id)arg1 error:(id *)arg2;
- (int)associateHands:(id)arg1 withExisingHands:(id)arg2;
- (id)processSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 withOptions:(id)arg2 error:(id *)arg3;
- (float)handDistance:(id)arg1 withhandB:(id)arg2;
- (id)initWithOptions:(id)arg1;
- (id)init;

@end
