//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MPSNeuralNetwork/NodeWrapper-Protocol.h>

@class NSString;

@interface ResourceWrapper : NSObject <NodeWrapper>
{
    struct ResourceGraphNode *_node;
}

+ (_Bool)supportsSecureCoding;
+ (id)wrapperWithResource:(struct ResourceGraphNode *)arg1;
- (void *)node;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithResource:(struct ResourceGraphNode *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

