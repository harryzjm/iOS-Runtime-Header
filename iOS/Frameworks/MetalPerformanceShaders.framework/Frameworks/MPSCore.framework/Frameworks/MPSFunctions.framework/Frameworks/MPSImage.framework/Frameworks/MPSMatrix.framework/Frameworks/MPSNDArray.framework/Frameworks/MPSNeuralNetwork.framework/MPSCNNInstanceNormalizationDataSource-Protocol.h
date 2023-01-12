//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MPSNeuralNetwork/NSCopying-Protocol.h>
#import <MPSNeuralNetwork/NSObject-Protocol.h>

@class MPSCNNNormalizationGammaAndBetaState, NSArray, NSCoder, NSString;
@protocol MTLCommandBuffer, MTLDevice;

@protocol MPSCNNInstanceNormalizationDataSource <NSObject, NSCopying>
@property(readonly, nonatomic) unsigned long long numberOfFeatureChannels;
- (NSString *)label;
- (float *)beta;
- (float *)gamma;

@optional
+ (_Bool)supportsSecureCoding;
- (void)purge;
- (_Bool)load;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id <MTLDevice>)arg2;
- (id)initWithCoder:(NSCoder *)arg1;
- (void)encodeWithCoder:(NSCoder *)arg1;
- (float)epsilon;
- (_Bool)updateGammaAndBetaWithInstanceNormalizationStateBatch:(NSArray *)arg1;
- (MPSCNNNormalizationGammaAndBetaState *)updateGammaAndBetaWithCommandBuffer:(id <MTLCommandBuffer>)arg1 instanceNormalizationStateBatch:(NSArray *)arg2;
@end
