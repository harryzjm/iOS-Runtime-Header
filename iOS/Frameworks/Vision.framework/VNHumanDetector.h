//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface VNHumanDetector
{
    struct TemplateObjectDetectorApply *mHumanDetectorAlgorithmImpl_;
}

- (id)processWithOptions:(id)arg1 regionOfInterest:(struct CGRect)arg2 warningRecorder:(id)arg3 error:(id *)arg4;
- (void)dealloc;
- (id)initWithOptions:(id)arg1 error:(id *)arg2;

@end

