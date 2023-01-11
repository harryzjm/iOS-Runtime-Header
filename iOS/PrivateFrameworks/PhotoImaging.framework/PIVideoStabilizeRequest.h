//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NeutrinoCore/NURenderRequest.h>

@interface PIVideoStabilizeRequest : NURenderRequest
{
    double _allowedCropFraction;
    CDUnknownBlockType _progressHandler;
    unsigned long long _allowedAnalysisTypes;
}

+ (_Bool)canPerformGyroBasedStabilizationForAsset:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long allowedAnalysisTypes; // @synthesize allowedAnalysisTypes=_allowedAnalysisTypes;
@property(copy, nonatomic) CDUnknownBlockType progressHandler; // @synthesize progressHandler=_progressHandler;
@property(nonatomic) double allowedCropFraction; // @synthesize allowedCropFraction=_allowedCropFraction;
- (void)submit:(CDUnknownBlockType)arg1;
- (long long)mediaComponentType;
- (id)newRenderJob;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithComposition:(id)arg1;

@end
