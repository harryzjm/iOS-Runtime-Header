//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SCRCPhotoEvaluatorResult;

@interface SCRCPhotoEvaluatorResults : NSObject
{
    SCRCPhotoEvaluatorResult *_blurResult;
    SCRCPhotoEvaluatorResult *_colorResult;
    SCRCPhotoEvaluatorResult *_luminanceResult;
}

@property(readonly, nonatomic) SCRCPhotoEvaluatorResult *luminanceResult; // @synthesize luminanceResult=_luminanceResult;
@property(readonly, nonatomic) SCRCPhotoEvaluatorResult *colorResult; // @synthesize colorResult=_colorResult;
@property(readonly, nonatomic) SCRCPhotoEvaluatorResult *blurResult; // @synthesize blurResult=_blurResult;
- (void).cxx_destruct;
- (id)initWithBlurResult:(id)arg1 colorResult:(id)arg2 luminanceResult:(id)arg3;

@end

