//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class VNCoreMLModel;

@interface VNCoreMLRequest
{
    VNCoreMLModel *_model;
    unsigned long long _imageCropAndScaleOption;
}

@property(nonatomic) unsigned long long imageCropAndScaleOption; // @synthesize imageCropAndScaleOption=_imageCropAndScaleOption;
@property(readonly, nonatomic) VNCoreMLModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (_Bool)internalPerformInContext:(id)arg1 error:(id *)arg2;
- (void)applyConfigurationOfRequest:(id)arg1;
- (id)newDefaultRequestInstance;
- (id)initWithModel:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithModel:(id)arg1;
- (id)initWithName:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)sequencedRequestPreviousObservationsKey;
- (id)observationsCacheKey;

@end
