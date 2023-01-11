//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreML/MLClassifier-Protocol.h>
#import <CoreML/MLCompiledModelLoader-Protocol.h>
#import <CoreML/MLModelSpecificationLoader-Protocol.h>
#import <CoreML/MLNeuralNetwork-Protocol.h>
#import <CoreML/MLRegressor-Protocol.h>

@class EspressoProfilingNetworkInfo, MLModelDescription, MLModelInterface, MLModelMetadata, MLNeuralNetworkContainer, MLProbabilityDictionary, MLVersionInfo, NSArray, NSDictionary, NSMutableDictionary, NSObject, NSString;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface MLNeuralNetworkEngine <MLNeuralNetwork, MLClassifier, MLRegressor, MLModelSpecificationLoader, MLCompiledModelLoader>
{
    struct vector<std::__1::map<std::__1::basic_string<char>, espresso_buffer_t *, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, espresso_buffer_t *>>>, std::__1::allocator<std::__1::map<std::__1::basic_string<char>, espresso_buffer_t *, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, espresso_buffer_t *>>>>> _inputBuffers;
    struct vector<std::__1::map<std::__1::basic_string<char>, espresso_buffer_t *, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, espresso_buffer_t *>>>, std::__1::allocator<std::__1::map<std::__1::basic_string<char>, espresso_buffer_t *, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, espresso_buffer_t *>>>>> _outputBuffers;
    struct map<std::__1::basic_string<char>, espresso_simple_image_preprocessing_params_t, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, espresso_simple_image_preprocessing_params_t>>> _params;
    struct map<std::__1::basic_string<char>, int, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, int>>> _widths;
    struct map<std::__1::basic_string<char>, int, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, int>>> _heights;
    struct map<std::__1::basic_string<char>, int, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, int>>> _ks;
    struct map<std::__1::basic_string<char>, int, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, int>>> _batches;
    struct map<std::__1::basic_string<char>, int, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, int>>> _sequences;
    struct map<std::__1::basic_string<char>, int, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, int>>> _ranks;
    map_7c549560 _optionalInputTypes;
    struct vector<bool, std::__1::allocator<bool>> _bufferAvailable;
    struct set<std::__1::basic_string<char>, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::basic_string<char>>> _flexibleShapesConfigNamesInNet;
    basic_string_90719d97 _currentConfigurationName;
    struct map<std::__1::basic_string<char>, bool, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, bool>>> _OutputBlobIsDynamic;
    _Bool _hardwareFallbackDetected;
    _Bool _ndArrayInterpretation;
    _Bool _usingCPU;
    _Bool _isEspresoBiasPreprocessingShared;
    _Bool _hasBidirectionalLayer;
    _Bool _hasOptionalInputSequenceConcat;
    _Bool _isGPUPathForbidden;
    _Bool _isANEPathForbidden;
    int _precision;
    int _engine;
    int _qos;
    NSArray *_classLabels;
    NSString *_classScoreVectorName;
    NSArray *_inputLayers;
    NSArray *_outputLayers;
    NSDictionary *_imagePreprocessingParameters;
    NSDictionary *_espressoInputShapes;
    NSDictionary *_espressoInputStrides;
    MLVersionInfo *_modelVersionInfo;
    unsigned long long _numInputs;
    unsigned long long _numOutputs;
    void *_plan;
    void *_context;
    MLProbabilityDictionary *_probDict;
    NSString *_modelFilePath;
    NSDictionary *_defaultOptionalValues;
    NSObject<OS_dispatch_semaphore> *_bufferSemaphore;
    NSObject<OS_dispatch_queue> *_espressoQueue;
    NSObject<OS_dispatch_queue> *_predictionsQueue;
    NSObject<OS_dispatch_semaphore> *_submitSemaphore;
    NSMutableDictionary *_blobNameToLastPtrFlags;
    EspressoProfilingNetworkInfo *_espressoProfileInfo;
    MLNeuralNetworkContainer *_container;
    CDStruct_2bc666a5 _network;
}

+ (id)neuralNetworkFromContainer:(id)arg1 classScoreVectorName:(id)arg2 classLabels:(id)arg3 error:(id *)arg4;
+ (id)neuralNetworkFromContainer:(id)arg1 configuration:(id)arg2 error:(id *)arg3;
+ (id)neuralNetworkFromContainer:(id)arg1 error:(id *)arg2;
+ (id)loadModelFromSpecification:(struct _MLModelSpecification *)arg1 configuration:(id)arg2 error:(id *)arg3;
+ (id)loadModelFromCompiledArchive:(struct _MLModelInputArchiver *)arg1 modelVersionInfo:(id)arg2 compilerVersionInfo:(id)arg3 configuration:(id)arg4 error:(id *)arg5;
+ (Class)containerClass;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) __weak MLNeuralNetworkContainer *container; // @synthesize container=_container;
@property(retain, nonatomic) EspressoProfilingNetworkInfo *espressoProfileInfo; // @synthesize espressoProfileInfo=_espressoProfileInfo;
@property(readonly, nonatomic) NSMutableDictionary *blobNameToLastPtrFlags; // @synthesize blobNameToLastPtrFlags=_blobNameToLastPtrFlags;
@property _Bool isANEPathForbidden; // @synthesize isANEPathForbidden=_isANEPathForbidden;
@property _Bool isGPUPathForbidden; // @synthesize isGPUPathForbidden=_isGPUPathForbidden;
@property(retain) NSObject<OS_dispatch_semaphore> *submitSemaphore; // @synthesize submitSemaphore=_submitSemaphore;
@property(retain) NSObject<OS_dispatch_queue> *predictionsQueue; // @synthesize predictionsQueue=_predictionsQueue;
@property(retain) NSObject<OS_dispatch_queue> *espressoQueue; // @synthesize espressoQueue=_espressoQueue;
@property(retain) NSObject<OS_dispatch_semaphore> *bufferSemaphore; // @synthesize bufferSemaphore=_bufferSemaphore;
@property(nonatomic) _Bool hasOptionalInputSequenceConcat; // @synthesize hasOptionalInputSequenceConcat=_hasOptionalInputSequenceConcat;
@property(nonatomic) _Bool hasBidirectionalLayer; // @synthesize hasBidirectionalLayer=_hasBidirectionalLayer;
@property(retain, nonatomic) NSDictionary *defaultOptionalValues; // @synthesize defaultOptionalValues=_defaultOptionalValues;
@property(retain, nonatomic) NSString *modelFilePath; // @synthesize modelFilePath=_modelFilePath;
@property(retain, nonatomic) MLProbabilityDictionary *probDict; // @synthesize probDict=_probDict;
@property(nonatomic) _Bool isEspresoBiasPreprocessingShared; // @synthesize isEspresoBiasPreprocessingShared=_isEspresoBiasPreprocessingShared;
@property(nonatomic) void *context; // @synthesize context=_context;
@property(nonatomic) int qos; // @synthesize qos=_qos;
@property(nonatomic) int engine; // @synthesize engine=_engine;
@property(nonatomic) int precision; // @synthesize precision=_precision;
@property(nonatomic) CDStruct_2bc666a5 network; // @synthesize network=_network;
@property(nonatomic) void *plan; // @synthesize plan=_plan;
@property(nonatomic) _Bool usingCPU; // @synthesize usingCPU=_usingCPU;
@property(readonly, nonatomic) unsigned long long numOutputs; // @synthesize numOutputs=_numOutputs;
@property(readonly, nonatomic) unsigned long long numInputs; // @synthesize numInputs=_numInputs;
@property(readonly, nonatomic) MLVersionInfo *modelVersionInfo; // @synthesize modelVersionInfo=_modelVersionInfo;
@property(nonatomic) _Bool ndArrayInterpretation; // @synthesize ndArrayInterpretation=_ndArrayInterpretation;
@property(retain, nonatomic) NSDictionary *espressoInputStrides; // @synthesize espressoInputStrides=_espressoInputStrides;
@property(retain, nonatomic) NSDictionary *espressoInputShapes; // @synthesize espressoInputShapes=_espressoInputShapes;
@property(retain, nonatomic) NSDictionary *imagePreprocessingParameters; // @synthesize imagePreprocessingParameters=_imagePreprocessingParameters;
@property(nonatomic) _Bool hardwareFallbackDetected; // @synthesize hardwareFallbackDetected=_hardwareFallbackDetected;
@property(readonly, retain, nonatomic) NSArray *outputLayers; // @synthesize outputLayers=_outputLayers;
@property(readonly, retain, nonatomic) NSArray *inputLayers; // @synthesize inputLayers=_inputLayers;
@property(retain, nonatomic) NSString *classScoreVectorName; // @synthesize classScoreVectorName=_classScoreVectorName;
@property(retain, nonatomic) NSArray *classLabels; // @synthesize classLabels=_classLabels;
- (id)executionSchedule;
- (id)parameterValueForKey:(id)arg1 error:(id *)arg2;
- (void)dumpTestVectorsToPath:(id)arg1;
- (id)predictionsFromBatch:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)evaluateBatch:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (_Bool)rebuildPlan:(id *)arg1;
- (_Bool)resetSizesNoAutoRelease:(id)arg1 error:(id *)arg2;
- (_Bool)resetSizesWithEspressoConfigurations:(id)arg1 error:(id *)arg2;
- (_Bool)resetSizes:(id)arg1 error:(id *)arg2;
- (id)sortBatchByShape:(id)arg1 withMap:(id *)arg2 error:(id *)arg3;
- (void)dealloc;
- (void)_deallocContextAndPlan;
- (struct __CVBuffer *)_pixelBufferFromEbuf:(CDStruct_cf098810 *)arg1 description:(id)arg2 error:(id *)arg3;
- (id)multiArrayFeatureValueFromEbuf:(CDStruct_cf098810 *)arg1 backingMultiArray:(id)arg2 description:(id)arg3 outputName:(id)arg4 error:(id *)arg5;
- (id)imageFeatureValueFromEbuf:(CDStruct_cf098810 *)arg1 backingCVPixelBuffer:(struct __CVBuffer *)arg2 description:(id)arg3 error:(id *)arg4;
- (_Bool)copyEbuf:(const CDStruct_cf098810 *)arg1 ofPixelType:(unsigned long long)arg2 toPixelBuffer:(struct __CVBuffer *)arg3 error:(id *)arg4;
- (id)populateOutputs:(unsigned long long)arg1 outputBackings:(id)arg2 error:(id *)arg3;
- (_Bool)bindDynamicOutputBuffers:(const map_2ca54a57 *)arg1 error:(id *)arg2;
- (_Bool)executePlan:(void *)arg1 error:(id *)arg2;
- (id)evaluateInputs:(id)arg1 bufferIndex:(unsigned long long)arg2 options:(id)arg3 error:(id *)arg4;
- (id)completeOutputBackings:(id)arg1 automaticOutputBackingMode:(id)arg2 error:(id *)arg3;
- (void)populateMultiArrayShape:(id *)arg1 strides:(id *)arg2 forEbuf:(CDStruct_cf098810 *)arg3 featureDescription:(id)arg4 ndArrayInterpretation:(_Bool)arg5;
- (_Bool)updateDynamicOutputBlobIndicatorCacheAndReturnError:(id *)arg1;
- (id)evaluateInputs:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (_Bool)unlockCVPixelBuffers:(id)arg1 error:(id *)arg2;
- (_Bool)bindOutputBuffers:(const map_2ca54a57 *)arg1 outputBackings:(id)arg2 automaticOutputBackingMode:(id)arg3 error:(id *)arg4;
- (_Bool)tryToSetOutputBacking:(id)arg1 forFeature:(id)arg2 toEbuf:(CDStruct_cf098810 *)arg3 reportPointerFlags:(int *)arg4 error:(id *)arg5;
- (_Bool)_espressoOutputShapeForFeatureName:(id)arg1 matchesShapeOfMLMultiArray:(id)arg2;
- (_Bool)_setMultiArrayOutputBacking:(id)arg1 forOutputFeatureName:(id)arg2 toEbuf:(CDStruct_cf098810 *)arg3 error:(id *)arg4;
- (_Bool)bindInputFeatures:(id)arg1 bufferIndex:(unsigned long long)arg2 allocatedImageData:(vector_fd38efa8 *)arg3 error:(id *)arg4;
- (_Bool)bindInputsAndOutputs:(id)arg1 allocatedImageData:(vector_fd38efa8 *)arg2 bufferIndex:(unsigned long long)arg3 error:(id *)arg4;
- (void)releaseBuffer:(unsigned long long)arg1;
- (unsigned long long)obtainBuffer;
- (id)verifyInputs:(id)arg1 error:(id *)arg2;
- (id)evaluate:(id)arg1 error:(id *)arg2;
- (_Bool)_setupContextAndPlanWithConfiguration:(id)arg1 usingCPU:(_Bool)arg2 error:(id *)arg3;
- (_Bool)_setupContextAndPlanWithConfiguration:(id)arg1 error:(id *)arg2;
- (_Bool)_setupContextAndPlanWithForceCPU:(_Bool)arg1 error:(id *)arg2;
- (int)_espressoDeviceForConfiguration:(id)arg1 error:(id *)arg2;
- (_Bool)fillInInitialShapeFromEspressoNet:(id *)arg1;
- (id)initWithContainer:(id)arg1 configuration:(id)arg2 error:(id *)arg3;
- (void)collectParametersFromContainer:(id)arg1 configuration:(id)arg2;
- (id)initWithContainer:(id)arg1 error:(id *)arg2;
- (_Bool)_matchEngineToOptions:(id)arg1 error:(id *)arg2;
- (id)availableOutputBlobList;
- (id)regress:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)classify:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)addClassifierInformationToOutput:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)convertPredictionToClassifierResult:(id)arg1 withOptions:(id)arg2 error:(id *)arg3;
- (int)sequenceNamed:(id)arg1;
- (_Bool)sequenceConcatConsumesOptionalInputNamed:(id)arg1;
- (_Bool)usingEspressoConfigurations;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) MLModelInterface *interface;
@property(readonly) MLModelMetadata *metadata;
@property(retain, nonatomic) MLModelDescription *modelDescription;
@property(readonly) Class superclass;

@end
