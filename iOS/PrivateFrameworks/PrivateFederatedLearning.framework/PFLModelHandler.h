//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MLModel, MLUpdateContext, NSURL;

@interface PFLModelHandler : NSObject
{
    NSURL *_modelURL;
    MLModel *_model;
    MLUpdateContext *_context;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MLUpdateContext *context; // @synthesize context=_context;
@property(readonly, nonatomic) MLModel *model; // @synthesize model=_model;
@property(readonly, nonatomic) NSURL *modelURL; // @synthesize modelURL=_modelURL;
- (void)updateOrderedLayerNames:(id)arg1 withDataProvider:(id)arg2 withPatchModelShapes:(id)arg3 withPatchModelData:(id)arg4 withModelConfiguration:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)evaluateWithDataProvider:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithModelURL:(id)arg1 error:(id *)arg2;

@end
