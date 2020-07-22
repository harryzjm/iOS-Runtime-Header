//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber, NSString;

@interface ASSettingsTaskOofMessage
{
    NSNumber *_audience;
    NSNumber *_enabled;
    NSString *_replyMessage;
    NSString *_bodyType;
}

+ (id)asParseRules;
+ (_Bool)notifyOfUnknownTokens;
+ (_Bool)frontingBasicTypes;
+ (_Bool)parsingWithSubItems;
+ (_Bool)parsingLeafNode;
+ (_Bool)acceptsTopLevelLeaves;
@property(retain, nonatomic) NSString *bodyType; // @synthesize bodyType=_bodyType;
@property(retain, nonatomic) NSString *replyMessage; // @synthesize replyMessage=_replyMessage;
@property(retain, nonatomic) NSNumber *enabled; // @synthesize enabled=_enabled;
@property(retain, nonatomic) NSNumber *audience; // @synthesize audience=_audience;
- (void).cxx_destruct;
- (void)parseASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 account:(id)arg6;
- (id)description;
- (void)appliesToExternalUnknown:(id)arg1;
- (void)appliesToExternalKnown:(id)arg1;
- (void)appliesToInternal:(id)arg1;

@end

