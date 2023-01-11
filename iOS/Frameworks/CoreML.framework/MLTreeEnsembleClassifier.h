//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreML/MLCompiledModelLoader-Protocol.h>
#import <CoreML/MLModelSpecificationLoader-Protocol.h>
#import <CoreML/MLSpecificationCompiler-Protocol.h>

@class NSArray, NSString;

@interface MLTreeEnsembleClassifier <MLModelSpecificationLoader, MLCompiledModelLoader, MLSpecificationCompiler>
{
    struct shared_ptr<Archiver::MMappedFile> _mmapped_model;
    struct vector<unsigned char, std::__1::allocator<unsigned char>> _cached_model;
    unsigned long long num_dimensions;
    vector_ebb6ef3e _classes_by_string;
    struct vector<long long, std::__1::allocator<long long>> _classes_by_int64_t;
    long long _class_type;
    NSArray *_class_values;
    NSString *_single_array_key;
}

+ (id)loadModelFromCompiledArchive:(struct _MLModelInputArchiver *)arg1 modelVersionInfo:(id)arg2 compilerVersionInfo:(id)arg3 configuration:(id)arg4 error:(id *)arg5;
+ (id)compiledVersionForSpecification:(struct _MLModelSpecification *)arg1 options:(id)arg2 error:(id *)arg3;
+ (id)compileSpecification:(struct _MLModelSpecification *)arg1 toArchive:(struct _MLModelOutputArchiver *)arg2 options:(id)arg3 error:(id *)arg4;
+ (id)loadModelFromSpecification:(struct _MLModelSpecification *)arg1 configuration:(id)arg2 error:(id *)arg3;
+ (id)loadModelFromSpecificationWithCompilationOptions:(struct _MLModelSpecification *)arg1 options:(id)arg2 error:(id *)arg3;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)classify:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)_buildClassificationClasses:(double *)arg1 topk:(unsigned long long)arg2 error:(id *)arg3;
- (void)_setSingleArrayLookupField;
- (const char *)_model_data;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

