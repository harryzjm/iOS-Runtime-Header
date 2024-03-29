//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface VCPVideoFaceDetector
{
    int _angle;
    CDStruct_1b6d18a9 _timeLastDetection;
    NSMutableDictionary *_activeFaces;
    NSDictionary *_results;
}

+ (id)faceDetectorWithTransform:(struct CGAffineTransform)arg1 vipModelFilepath:(id)arg2 withExistingFaceprints:(id)arg3 frameStats:(id)arg4 tracking:(_Bool)arg5 faceDominated:(_Bool)arg6 cancel:(CDUnknownBlockType)arg7;
- (void).cxx_destruct;
- (id)faceRanges;
- (id)results;

@end

