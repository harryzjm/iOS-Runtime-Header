//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ASSettingsTaskAccountEmailAddresses, NSString;

@interface ASSettingsTaskAccountInformation
{
    ASSettingsTaskAccountEmailAddresses *_emailAddressList;
    NSString *_accountId;
}

+ (id)asParseRules;
+ (_Bool)notifyOfUnknownTokens;
+ (_Bool)frontingBasicTypes;
+ (_Bool)parsingWithSubItems;
+ (_Bool)parsingLeafNode;
+ (_Bool)acceptsTopLevelLeaves;
@property(retain, nonatomic) NSString *accountId; // @synthesize accountId=_accountId;
@property(retain, nonatomic) ASSettingsTaskAccountEmailAddresses *emailAddressList; // @synthesize emailAddressList=_emailAddressList;
- (void).cxx_destruct;
- (void)parseASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 account:(id)arg6;
- (id)description;

@end

