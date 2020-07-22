//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ProactiveML/PMLDictionarySerializableProtocol-Protocol.h>
#import <ProactiveML/PMLPlistAndChunksSerializableProtocol-Protocol.h>

@class NSNumber, NSString, PMLModelLearningRates, PMLModelWeights;

@interface PMLModelDescriptor : NSObject <PMLDictionarySerializableProtocol, PMLPlistAndChunksSerializableProtocol>
{
    NSString *_name;
    NSNumber *_version;
    PMLModelWeights *_weights;
    PMLModelLearningRates *_learningRates;
}

+ (_Bool)isValidModelDescriptorInPlistMetadata:(id)arg1 withErrorDescription:(id *)arg2;
@property(retain) PMLModelLearningRates *learningRates; // @synthesize learningRates=_learningRates;
@property(retain) PMLModelWeights *weights; // @synthesize weights=_weights;
@property(retain) NSNumber *version; // @synthesize version=_version;
@property(retain) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)toDictionary;
- (id)initFromDictionary:(id)arg1;
- (id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3;
- (id)toPlistWithChunks:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

