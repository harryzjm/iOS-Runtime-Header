//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface CIKernel : NSObject
{
    void *_priv;
}

+ (id)colorMatrixBiasKernel;
+ (id)kernelWithFunctionName:(id)arg1 fromMetalLibraryData:(id)arg2 outputPixelFormat:(int)arg3 error:(id *)arg4;
+ (id)kernelWithFunctionName:(id)arg1 fromMetalLibraryData:(id)arg2 error:(id *)arg3;
+ (id)kernelWithString:(id)arg1;
+ (id)kernelsWithString:(id)arg1;
+ (id)kernelsWithString:(id)arg1 messageLog:(id)arg2;
+ (id)modifiedKernelStringForFosl:(id)arg1;
+ (id)betterString:(id)arg1;
+ (id)hashForString:(id)arg1;
- (id)parameters;
- (SEL)ROISelector;
- (void)setROISelector:(SEL)arg1;
- (id)applyWithExtent:(struct CGRect)arg1 roiCallback:(CDUnknownBlockType)arg2 arguments:(id)arg3;
- (id)applyWithExtent:(struct CGRect)arg1 roiCallback:(CDUnknownBlockType)arg2 arguments:(id)arg3 options:(id)arg4;
- (int)_outputFormatUsingDictionary:(id)arg1 andKernel:(struct Kernel *)arg2;
- (_Bool)_isValidOutputPixelFormat:(int)arg1;
@property(readonly) NSString *name;
@property(nonatomic) _Bool canReduceOutputChannels;
@property(nonatomic) _Bool preservesRange;
@property(nonatomic) _Bool perservesAlpha;
- (id)_initWithDict:(id)arg1;
- (id)initWithString:(id)arg1;
- (int)_outputPixelFormatFromExplicitAttributes:(id)arg1;
- (id)_initWithFirstKernelFromString:(id)arg1 withCruftCompatibility:(_Bool)arg2;
- (void *)_internalRepresentation;
- (id)_initWithInternalRepresentation:(void *)arg1;
- (void)finalize;
- (void)dealloc;
- (id)description;
- (id)init;

@end

