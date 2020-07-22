//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface MLNeuralNetworkSpecification : NSObject
{
    _Bool _isBiasPreprocessingShared;
    int _precision;
    int _engine;
    int _qos;
    NSString *_modelFilePath;
    NSArray *_inputLayerNames;
    NSArray *_outputLayerNames;
    NSString *_name;
    NSDictionary *_inputDescription;
    NSDictionary *_outputDescription;
    map_cb83868e _orderedBgr;
    map_cb83868e _isGrayScale;
    map_11ac7060 _blueBias;
    map_11ac7060 _greenBias;
    map_11ac7060 _redBias;
    map_11ac7060 _grayBias;
    map_11ac7060 _scale;
}

+ (id)specFromFeatureDescriptions:(id)arg1 inputDesc:(id)arg2 outputDesc:(id)arg3 outputLayerNames:(id)arg4 parameters:(id)arg5;
+ (id)specFromFilePath:(id)arg1 inputLayerNames:(id)arg2 outputLayerNames:(id)arg3 parameters:(id)arg4;
@property(nonatomic) _Bool isBiasPreprocessingShared; // @synthesize isBiasPreprocessingShared=_isBiasPreprocessingShared;
@property(nonatomic) map_11ac7060 scale; // @synthesize scale=_scale;
@property(nonatomic) map_11ac7060 grayBias; // @synthesize grayBias=_grayBias;
@property(nonatomic) map_11ac7060 redBias; // @synthesize redBias=_redBias;
@property(nonatomic) map_11ac7060 greenBias; // @synthesize greenBias=_greenBias;
@property(nonatomic) map_11ac7060 blueBias; // @synthesize blueBias=_blueBias;
@property(nonatomic) map_cb83868e isGrayScale; // @synthesize isGrayScale=_isGrayScale;
@property(nonatomic, getter=isOrderedBgr) map_cb83868e orderedBgr; // @synthesize orderedBgr=_orderedBgr;
@property(nonatomic) int qos; // @synthesize qos=_qos;
@property(nonatomic) int engine; // @synthesize engine=_engine;
@property(nonatomic) int precision; // @synthesize precision=_precision;
@property(retain, nonatomic) NSDictionary *outputDescription; // @synthesize outputDescription=_outputDescription;
@property(retain, nonatomic) NSDictionary *inputDescription; // @synthesize inputDescription=_inputDescription;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSArray *outputLayerNames; // @synthesize outputLayerNames=_outputLayerNames;
@property(readonly, nonatomic) NSArray *inputLayerNames; // @synthesize inputLayerNames=_inputLayerNames;
@property(retain, nonatomic) NSString *modelFilePath; // @synthesize modelFilePath=_modelFilePath;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithFeatureDescriptions:(id)arg1 inputDesc:(id)arg2 outputDesc:(id)arg3 outputLayerNames:(id)arg4 parameters:(id)arg5;
- (id)initWithFilePath:(id)arg1 inputLayerNames:(id)arg2 outputLayerNames:(id)arg3 parameters:(id)arg4;

@end

