//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString;

@interface RMPCommandsRequest_RemoveCommandsItem : CEMPayloadBase
{
    NSString *_identifier;
}

+ (id)buildRequiredOnlyWithIdentifier:(id)arg1;
+ (id)buildWithIdentifier:(id)arg1;
+ (id)allowedKeys;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializePayload;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;

@end

