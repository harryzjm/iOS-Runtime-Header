//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NetworkExtension/NEPrettyDescription-Protocol.h>

@class NSArray, NSString, NSUUID;

@interface NEPolicyResult : NSObject <NEPrettyDescription>
{
    unsigned int _skipOrder;
    unsigned int _controlUnit;
    unsigned int _serviceData;
    long long _resultType;
    long long _secondaryResultType;
    NSString *_interfaceName;
    NSUUID *_agentUUID;
    NSUUID *_serviceUUID;
    NSArray *_routeRules;
}

+ (id)triggerScopedService:(id)arg1 data:(unsigned int)arg2;
+ (id)routeRules:(id)arg1;
+ (id)netAgentUUID:(id)arg1;
+ (id)filterWithControlUnit:(unsigned int)arg1;
+ (id)tunnelIPToInterfaceName:(id)arg1 secondaryResultType:(long long)arg2;
+ (id)scopeSocketToInterfaceName:(id)arg1;
+ (id)divertSocketToControlUnit:(unsigned int)arg1;
+ (id)drop;
+ (id)skipWithOrder:(unsigned int)arg1;
+ (id)pass;
@property(copy) NSArray *routeRules; // @synthesize routeRules=_routeRules;
@property unsigned int serviceData; // @synthesize serviceData=_serviceData;
@property(copy) NSUUID *serviceUUID; // @synthesize serviceUUID=_serviceUUID;
@property(copy) NSUUID *agentUUID; // @synthesize agentUUID=_agentUUID;
@property(copy) NSString *interfaceName; // @synthesize interfaceName=_interfaceName;
@property unsigned int controlUnit; // @synthesize controlUnit=_controlUnit;
@property unsigned int skipOrder; // @synthesize skipOrder=_skipOrder;
@property long long secondaryResultType; // @synthesize secondaryResultType=_secondaryResultType;
@property long long resultType; // @synthesize resultType=_resultType;
- (void).cxx_destruct;
- (_Bool)addTLVsToMessage:(id)arg1;
- (unsigned char)secondaryResultTypeValue;
- (unsigned char)resultTypeValue;
- (id)secondaryResultTypeString;
- (id)resultTypeString;
- (_Bool)validate;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (id)initInternal;
- (id)init;

@end

