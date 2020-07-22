//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface NFContainerPool : NSObject
{
    struct NSMutableDictionary *_singletons;
    struct NSMutableDictionary *_graph;
    unsigned long long _depth;
    NSMutableArray *_onDrainBlocks;
}

@property(retain, nonatomic) NSMutableArray *onDrainBlocks; // @synthesize onDrainBlocks=_onDrainBlocks;
@property(nonatomic) unsigned long long depth; // @synthesize depth=_depth;
@property(retain, nonatomic) NSMutableDictionary *graph; // @synthesize graph=_graph;
@property(retain, nonatomic) NSMutableDictionary *singletons; // @synthesize singletons=_singletons;
- (void).cxx_destruct;
- (void)onDrain:(CDUnknownBlockType)arg1;
- (id)enter:(CDUnknownBlockType)arg1;
- (id)init;

@end
