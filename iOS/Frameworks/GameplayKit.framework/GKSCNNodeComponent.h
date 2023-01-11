//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GameplayKit/GKAgentDelegate-Protocol.h>
#import <GameplayKit/GKSerializedNodeContaining-Protocol.h>

@class NSIndexPath, NSString, SCNNode;

@interface GKSCNNodeComponent <GKSerializedNodeContaining, GKAgentDelegate>
{
    NSIndexPath *_serializableNodeIndexPath;
    SCNNode *_node;
}

+ (_Bool)supportsSecureCoding;
+ (id)componentWithNode:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) SCNNode *node; // @synthesize node=_node;
@property(retain, nonatomic) NSIndexPath *serializableNodeIndexPath; // @synthesize serializableNodeIndexPath=_serializableNodeIndexPath;
- (void)agentDidUpdate:(id)arg1;
- (void)agentWillUpdate:(id)arg1;
- (void)setEntity:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNode:(id)arg1;
- (void)setNode:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
