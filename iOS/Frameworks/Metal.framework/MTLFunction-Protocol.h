//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Metal/NSObject-Protocol.h>

@class NSArray, NSDictionary, NSString;
@protocol MTLArgumentEncoder, MTLDevice;

@protocol MTLFunction <NSObject>
@property(readonly) NSDictionary *functionConstantsDictionary;
@property(readonly) NSString *name;
@property(readonly) NSArray *stageInputAttributes;
@property(readonly) NSArray *vertexAttributes;
@property(readonly) long long patchControlPointCount;
@property(readonly) unsigned long long patchType;
@property(readonly) unsigned long long functionType;
@property(readonly) id <MTLDevice> device;
@property(copy) NSString *label;
- (id <MTLArgumentEncoder>)newArgumentEncoderWithBufferIndex:(unsigned long long)arg1 reflection:(id *)arg2;
- (id <MTLArgumentEncoder>)newArgumentEncoderWithBufferIndex:(unsigned long long)arg1;
@end

