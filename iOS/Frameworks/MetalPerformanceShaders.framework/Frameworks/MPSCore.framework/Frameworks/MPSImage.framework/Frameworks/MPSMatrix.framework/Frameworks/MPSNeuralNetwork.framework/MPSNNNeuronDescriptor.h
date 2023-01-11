//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MPSNeuralNetwork/NSCopying-Protocol.h>

@class NSData;

@interface MPSNNNeuronDescriptor : NSObject <NSCopying>
{
    int _neuronType;
    float _a;
    float _b;
    float _c;
    NSData *_data;
    _Bool _noCopy;
    unsigned long long _count;
}

+ (id)cnnNeuronPReLUDescriptorWithData:(id)arg1 noCopy:(_Bool)arg2;
+ (id)cnnNeuronDescriptorWithType:(int)arg1;
+ (id)cnnNeuronDescriptorWithType:(int)arg1 a:(float)arg2;
+ (id)cnnNeuronDescriptorWithType:(int)arg1 a:(float)arg2 b:(float)arg3;
+ (id)cnnNeuronDescriptorWithType:(int)arg1 a:(float)arg2 b:(float)arg3 c:(float)arg4;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(nonatomic) float c; // @synthesize c=_c;
@property(nonatomic) float b; // @synthesize b=_b;
@property(nonatomic) float a; // @synthesize a=_a;
@property(nonatomic) int neuronType; // @synthesize neuronType=_neuronType;
- (struct NeuronInfo)neuronInfo;
- (id)debugDescription;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

