//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <RemoteManagementModel/RMModelPayloadBase.h>

@class NSArray;

@interface RMProtocolDeclarationItemsResponse_Declarations : RMModelPayloadBase
{
    NSArray *_responseActivations;
    NSArray *_responseConfigurations;
    NSArray *_responseAssets;
}

+ (id)buildRequiredOnlyWithActivations:(id)arg1 configurations:(id)arg2 assets:(id)arg3;
+ (id)buildWithActivations:(id)arg1 configurations:(id)arg2 assets:(id)arg3;
+ (id)allowedResponseKeys;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *responseAssets; // @synthesize responseAssets=_responseAssets;
@property(copy, nonatomic) NSArray *responseConfigurations; // @synthesize responseConfigurations=_responseConfigurations;
@property(copy, nonatomic) NSArray *responseActivations; // @synthesize responseActivations=_responseActivations;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializeWithType:(short)arg1;
- (_Bool)loadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id *)arg3;

@end
