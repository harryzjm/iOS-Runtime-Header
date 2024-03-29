//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSHashTable, NSString;

@interface MontrealNNModelTensor
{
    NSString *_name;
    NSArray *_dimension;
    NSHashTable *_asInput;
    NSHashTable *_asOutput;
}

+ (id)createOutputs:(CDStruct_96916c69 *)arg1 outputChunks:(id)arg2 nodeName:(id)arg3;
+ (id)createInputs:(CDStruct_96916c69 *)arg1 inputChunks:(id)arg2 nodeName:(id)arg3;
- (void).cxx_destruct;
@property(readonly) NSHashTable *asOutput; // @synthesize asOutput=_asOutput;
@property(readonly) NSHashTable *asInput; // @synthesize asInput=_asInput;
@property(readonly) NSArray *dimension; // @synthesize dimension=_dimension;
@property(readonly) NSString *name; // @synthesize name=_name;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)jsonDescription;
- (void)description:(id)arg1 indent:(id)arg2;
- (id)initWithDictionary:(id)arg1;
- (unsigned long long)tensorSize;
- (id)initWithName:(id)arg1 dimension:(id)arg2;
- (id)checkForValidity;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

