//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CEMAnyPayload, NSNumber, NSString;

@interface CEMCommandBase
{
    NSString *_commandType;
    NSString *_commandIdentifier;
    NSString *_commandDescription;
    NSNumber *_commandRequiresNetworkTether;
    CEMAnyPayload *_commandPayload;
}

+ (id)commandForData:(id)arg1 error:(id *)arg2;
+ (id)commandForPayload:(id)arg1 error:(id *)arg2;
- (void).cxx_destruct;
@property(copy, nonatomic) CEMAnyPayload *commandPayload; // @synthesize commandPayload=_commandPayload;
@property(copy, nonatomic) NSNumber *commandRequiresNetworkTether; // @synthesize commandRequiresNetworkTether=_commandRequiresNetworkTether;
@property(copy, nonatomic) NSString *commandDescription; // @synthesize commandDescription=_commandDescription;
@property(copy, nonatomic) NSString *commandIdentifier; // @synthesize commandIdentifier=_commandIdentifier;
@property(copy, nonatomic) NSString *commandType; // @synthesize commandType=_commandType;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializeAsDataWithError:(id *)arg1;
- (id)serialize;
- (_Bool)loadCommandFromDictionary:(id)arg1 error:(id *)arg2;
- (int)executionLevel;
- (_Bool)mustBeSupervised;

@end
