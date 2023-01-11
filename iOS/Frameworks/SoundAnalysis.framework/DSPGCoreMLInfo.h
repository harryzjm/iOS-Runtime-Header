//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class DSPGMLInputProvider, MLModelDescription, NSArray;
@protocol DSPGMLModel, MLFeatureProvider;

__attribute__((visibility("hidden")))
@interface DSPGCoreMLInfo : NSObject
{
    id <DSPGMLModel> _model;
    MLModelDescription *_modelDescription;
    DSPGMLInputProvider *_inputProvider;
    id <MLFeatureProvider> _outputProvider;
    NSArray *_outputs;
    NSArray *_outputLabels;
}

@property(retain, nonatomic) NSArray *outputLabels; // @synthesize outputLabels=_outputLabels;
@property(retain, nonatomic) NSArray *outputs; // @synthesize outputs=_outputs;
@property(retain, nonatomic) id <MLFeatureProvider> outputProvider; // @synthesize outputProvider=_outputProvider;
@property(retain, nonatomic) DSPGMLInputProvider *inputProvider; // @synthesize inputProvider=_inputProvider;
@property(retain, nonatomic) MLModelDescription *modelDescription; // @synthesize modelDescription=_modelDescription;
@property(retain, nonatomic) id <DSPGMLModel> model; // @synthesize model=_model;
- (void).cxx_destruct;

@end
