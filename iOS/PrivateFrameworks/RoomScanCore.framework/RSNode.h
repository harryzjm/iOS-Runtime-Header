//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface RSNode : NSObject
{
}

@property(readonly, copy, nonatomic) NSArray *outputs;
@property(readonly, copy, nonatomic) NSArray *inputs;
@property(readonly, nonatomic, getter=isSinkNode) _Bool sinkNode;
@property(readonly, nonatomic, getter=isSourceNode) _Bool sourceNode;
- (id)init;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 fromInput:(id)arg2;
- (void)removeOutput:(id)arg1;
- (void)addOutput:(id)arg1;
- (void)removeInput:(id)arg1;
- (void)addInput:(id)arg1;
- (void)_handleMessage:(id)arg1 fromInput:(id)arg2;

@end

