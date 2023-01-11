//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber, NSString;

@interface CEMSystemMigrationDeclaration_CustomBehaviorItemPathsItem
{
    NSString *_payloadSourcePath;
    NSNumber *_payloadSourcePathInUserHome;
    NSString *_payloadTargetPath;
    NSNumber *_payloadTargetPathInUserHome;
}

+ (id)buildRequiredOnlyWithSourcePath:(id)arg1 withSourcePathInUserHome:(id)arg2 withTargetPath:(id)arg3 withTargetPathInUserHome:(id)arg4;
+ (id)buildWithSourcePath:(id)arg1 withSourcePathInUserHome:(id)arg2 withTargetPath:(id)arg3 withTargetPathInUserHome:(id)arg4;
+ (id)allowedPayloadKeys;
- (void).cxx_destruct;
@property(copy, nonatomic) NSNumber *payloadTargetPathInUserHome; // @synthesize payloadTargetPathInUserHome=_payloadTargetPathInUserHome;
@property(copy, nonatomic) NSString *payloadTargetPath; // @synthesize payloadTargetPath=_payloadTargetPath;
@property(copy, nonatomic) NSNumber *payloadSourcePathInUserHome; // @synthesize payloadSourcePathInUserHome=_payloadSourcePathInUserHome;
@property(copy, nonatomic) NSString *payloadSourcePath; // @synthesize payloadSourcePath=_payloadSourcePath;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;

@end
