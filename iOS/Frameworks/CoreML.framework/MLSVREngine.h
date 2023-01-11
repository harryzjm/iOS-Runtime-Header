//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreML/MLModelSpecificationLoader-Protocol.h>

@class NSString;

@interface MLSVREngine : NSObject <MLModelSpecificationLoader>
{
    _Bool _isInputSizeLowerBoundOnly;
    _Bool _freeModelOnDealloc;
    unsigned long long _inputSize;
    struct svm_model *_model;
}

+ (id)loadModelFromSpecification:(struct _MLModelSpecification *)arg1 configuration:(id)arg2 error:(id *)arg3;
@property _Bool freeModelOnDealloc; // @synthesize freeModelOnDealloc=_freeModelOnDealloc;
@property struct svm_model *model; // @synthesize model=_model;
@property(readonly) unsigned long long inputSize; // @synthesize inputSize=_inputSize;
@property(readonly) _Bool isInputSizeLowerBoundOnly; // @synthesize isInputSizeLowerBoundOnly=_isInputSizeLowerBoundOnly;
- (id)predict:(id)arg1;
- (void)deallocSVMNodeVector:(struct svm_node *)arg1;
- (void)fillSVMNodeVector:(struct svm_node *)arg1 values:(double *)arg2 count:(unsigned long long)arg3;
- (struct svm_node *)allocSVMNodeVector:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithSVMModel:(struct svm_model *)arg1 freeOnDealloc:(_Bool)arg2 isInputSizeLowerBoundOnly:(_Bool)arg3 inputSize:(unsigned long long)arg4;
- (id)initWithLibSVMFile:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
