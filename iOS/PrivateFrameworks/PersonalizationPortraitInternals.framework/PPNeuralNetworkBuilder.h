//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableData;

@interface PPNeuralNetworkBuilder : NSObject
{
    unsigned long long _prevSize;
    unsigned long long _nlayers;
    NSMutableData *_descriptors;
    NSMutableArray *_weightsAndBiases;
    _Bool _haveOutputLayer;
    _Bool _done;
}

- (void).cxx_destruct;
- (id)serialize;
- (void)addOutputLayer:(unsigned long long)arg1 weights:(const float *)arg2 bias:(const float *)arg3 activation:(unsigned char)arg4 softmax:(_Bool)arg5;
- (void)addHiddenLayer:(unsigned long long)arg1 weights:(const float *)arg2 bias:(const float *)arg3 activation:(unsigned char)arg4 skip:(_Bool)arg5;
- (id)init;
- (id)initWithInputSize:(unsigned long long)arg1;

@end
