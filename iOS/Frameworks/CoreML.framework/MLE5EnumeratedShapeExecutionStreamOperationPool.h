//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MLE5ProgramLibrary, MLModelConfiguration, MLModelDescription, MLVersionInfo, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MLE5EnumeratedShapeExecutionStreamOperationPool : NSObject
{
    MLE5ProgramLibrary *_programLibrary;
    MLModelConfiguration *_configuration;
    NSString *_milFunctionName;
    MLModelDescription *_modelDescription;
    NSMutableDictionary *_functionNameToPoolMap;
    NSObject<OS_dispatch_queue> *_serialQueue;
    unsigned long long _modelSignpostId;
    MLVersionInfo *_compilerVersionInfo;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) MLVersionInfo *compilerVersionInfo; // @synthesize compilerVersionInfo=_compilerVersionInfo;
@property(readonly, nonatomic) unsigned long long modelSignpostId; // @synthesize modelSignpostId=_modelSignpostId;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(readonly, nonatomic) NSMutableDictionary *functionNameToPoolMap; // @synthesize functionNameToPoolMap=_functionNameToPoolMap;
@property(readonly, nonatomic) MLModelDescription *modelDescription; // @synthesize modelDescription=_modelDescription;
@property(readonly, nonatomic) NSString *milFunctionName; // @synthesize milFunctionName=_milFunctionName;
@property(readonly, nonatomic) MLModelConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) MLE5ProgramLibrary *programLibrary; // @synthesize programLibrary=_programLibrary;
- (id)_takeOutOperationFromAnyProgramFunction;
- (void)_putBack:(id)arg1;
- (void)putBack:(id)arg1;
- (id)_takeOutOperationForFunctionName:(id)arg1 error:(id *)arg2;
- (id)takeOutOperationForFeatures:(id)arg1 error:(id *)arg2;
- (_Bool)prepareWithInitialPoolSize:(long long)arg1 error:(id *)arg2;
- (id)initWithProgramLibrary:(id)arg1 functionName:(id)arg2 modelDescription:(id)arg3 configuration:(id)arg4 modelSignpostId:(unsigned long long)arg5 compilerVersionInfo:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

