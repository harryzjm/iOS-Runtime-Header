//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMDClient, AMDDODMLAttachmentProcessor, NSArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface AMDDODMLDataProcessor : NSObject
{
    NSArray *_actionArray;
    NSMutableDictionary *_coreDictionary;
    NSMutableDictionary *_inputDictionary;
    NSMutableDictionary *_elementsInSample;
    NSMutableDictionary *_numberInputsBound;
    AMDDODMLAttachmentProcessor *_attachmentsProcessor;
    AMDClient *_myAMDClient;
}

- (void).cxx_destruct;
- (id)windowFunction:(id)arg1 error:(id *)arg2 errorDomain:(id)arg3;
- (id)twoArrayMathFunction:(id)arg1 error:(id *)arg2 errorDomain:(id)arg3;
- (id)strideCopyAndSplitArray:(id)arg1 error:(id *)arg2 errorDomain:(id)arg3;
- (id)strideCopyArray:(id)arg1 error:(id *)arg2 errorDomain:(id)arg3;
- (id)spliceArray:(id)arg1 error:(id *)arg2 errorDomain:(id)arg3;
- (id)sortArray:(id)arg1 error:(id *)arg2 errorDomain:(id)arg3;
- (id)sampleFromDistribution:(id)arg1 error:(id *)arg2 errorDomain:(id)arg3;
- (id)requestData:(id)arg1 withUseStubs:(long long)arg2 error:(id *)arg3 errorDomain:(id)arg4;
- (id)replicateArray:(id)arg1 error:(id *)arg2 errorDomain:(id)arg3;
- (id)randomizeArray:(id)arg1 error:(id *)arg2 errorDomain:(id)arg3;
- (id)padArray:(id)arg1 error:(id *)arg2 errorDomain:(id)arg3;
- (id)insertArray:(id)arg1 error:(id *)arg2 errorDomain:(id)arg3;
- (id)generateHashFromInputs:(id)arg1 error:(id *)arg2 errorDomain:(id)arg3;
- (id)hashAdamIdsToIndices:(id)arg1 error:(id *)arg2 errorDomain:(id)arg3;
- (id)hashFromCoreDictionary:(id)arg1 error:(id *)arg2 errorDomain:(id)arg3;
- (id)filterArrayOnNumber:(id)arg1 error:(id *)arg2 errorDomain:(id)arg3;
- (id)constantValueMathFunction:(id)arg1 error:(id *)arg2 errorDomain:(id)arg3;
- (id)downSampleData:(id)arg1 error:(id *)arg2 errorDomain:(id)arg3;
- (id)destroyArray:(id)arg1 error:(id *)arg2 errorDomain:(id)arg3;
- (id)combineArray:(id)arg1 error:(id *)arg2 errorDomain:(id)arg3;
- (id)checkIfArrayEmptyAndThrowError:(id)arg1 error:(id *)arg2 errorDomain:(id)arg3;
- (id)bindToBuffer:(id)arg1 error:(id *)arg2 errorDomain:(id)arg3;
- (id)parseAndCall:(id)arg1 withInputs:(id)arg2 error:(id *)arg3 errorDomain:(id)arg4;
- (id)processRecipe:(id *)arg1 errorDomain:(id)arg2;
- (id)getElementsInSampleDictionary;
- (long long)getInputSize;
- (id)getInputDictionary;
- (id)getElementInNumberInputsBounds:(id)arg1;
- (id)getElementInInputDictionary:(id)arg1;
- (id)getElementInCoreDictionary:(id)arg1;
- (id)getCoreDictionary;
- (void)setElementInCoreDictionary:(id)arg1 withKey:(id)arg2;
- (id)initWithActionArray:(id)arg1 withAttachmentProcessor:(id)arg2;

@end
