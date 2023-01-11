//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;

@interface CEMDeviceInformationCommand_StatusErrorResponsesItem
{
    NSString *_statusCode;
    NSArray *_statusErrorChain;
}

+ (id)buildRequiredOnlyWithCode:(id)arg1;
+ (id)buildWithCode:(id)arg1 withErrorChain:(id)arg2;
+ (id)allowedStatusKeys;
@property(copy, nonatomic) NSArray *statusErrorChain; // @synthesize statusErrorChain=_statusErrorChain;
@property(copy, nonatomic) NSString *statusCode; // @synthesize statusCode=_statusCode;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializePayload;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;

@end
