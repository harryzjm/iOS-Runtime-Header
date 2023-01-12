//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface VCPFlowFeatureExtractor
{
    int _numLevels;
    NSString *_inputBlobName;
    NSArray *_featureBlobNames;
    NSArray *_featureChannels;
}

- (void).cxx_destruct;
- (int)setFeatureShape:(CDStruct_d09ae902 *)arg1 height:(int)arg2 width:(int)arg3 level:(int)arg4;
- (int)extractFeatureFromImage:(struct __CVBuffer *)arg1 toFeature:(CDStruct_80570e6e *)arg2 callback:(CDUnknownBlockType)arg3;
- (int)bindWithBuffers:(struct __CVBuffer *)arg1 imgFeature:(CDStruct_80570e6e *)arg2;
- (id)initModule:(int)arg1 config:(id)arg2 cancel:(CDUnknownBlockType)arg3;

@end

