//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ASAccount, ASItem, ASParseContext, NSDictionary;

@protocol ASParsing
+ (_Bool)notifyOfUnknownTokens;
+ (_Bool)frontingBasicTypes;
+ (_Bool)parsingWithSubItems;
+ (_Bool)parsingLeafNode;
+ (_Bool)acceptsTopLevelLeaves;
+ (_Bool)expectsContent;
- (int)parsingState;
- (void)parseASParseContext:(ASParseContext *)arg1 root:(ASItem *)arg2 parent:(ASItem *)arg3 callbackDict:(NSDictionary *)arg4 streamCallbackDict:(NSDictionary *)arg5 account:(ASAccount *)arg6;
@end
