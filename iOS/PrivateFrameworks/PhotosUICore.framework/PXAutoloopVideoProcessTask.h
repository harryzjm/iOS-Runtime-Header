//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PXAutoloopVideoRecipe;

@interface PXAutoloopVideoProcessTask
{
    _Bool _shouldExtractGateFeatures;
    PXAutoloopVideoRecipe *_outputRecipe;
}

@property(nonatomic) _Bool shouldExtractGateFeatures; // @synthesize shouldExtractGateFeatures=_shouldExtractGateFeatures;
@property(retain) PXAutoloopVideoRecipe *outputRecipe; // @synthesize outputRecipe=_outputRecipe;
- (void).cxx_destruct;
- (void)performTaskWithInput:(id)arg1;

@end

