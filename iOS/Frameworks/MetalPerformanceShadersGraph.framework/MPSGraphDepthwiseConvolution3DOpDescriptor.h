//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MetalPerformanceShadersGraph/NSCopying-Protocol.h>

@class NSArray;

@interface MPSGraphDepthwiseConvolution3DOpDescriptor : NSObject <NSCopying>
{
    NSArray *_strides;
    NSArray *_dilationRates;
    NSArray *_paddingValues;
    unsigned long long _paddingStyle;
    long long _channelDimensionIndex;
}

+ (id)descriptorWithPaddingStyle:(unsigned long long)arg1;
+ (id)descriptorWithStrides:(id)arg1 dilationRates:(id)arg2 paddingValues:(id)arg3 paddingStyle:(unsigned long long)arg4;
- (void).cxx_destruct;
@property(nonatomic) long long channelDimensionIndex; // @synthesize channelDimensionIndex=_channelDimensionIndex;
@property(nonatomic) unsigned long long paddingStyle; // @synthesize paddingStyle=_paddingStyle;
@property(copy, nonatomic) NSArray *paddingValues; // @synthesize paddingValues=_paddingValues;
@property(copy, nonatomic) NSArray *dilationRates; // @synthesize dilationRates=_dilationRates;
@property(copy, nonatomic) NSArray *strides; // @synthesize strides=_strides;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
