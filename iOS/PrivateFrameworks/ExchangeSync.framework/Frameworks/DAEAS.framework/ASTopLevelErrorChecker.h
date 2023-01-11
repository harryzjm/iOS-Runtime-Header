//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DAEAS/ASParsingNotifyOfUnknownTokens-Protocol.h>

@class NSDictionary, NSNumber;

@interface ASTopLevelErrorChecker <ASParsingNotifyOfUnknownTokens>
{
    NSNumber *_foundStatus;
    NSDictionary *_parseRules;
}

+ (_Bool)notifyOfUnknownTokens;
+ (_Bool)frontingBasicTypes;
+ (_Bool)parsingWithSubItems;
+ (_Bool)parsingLeafNode;
+ (_Bool)acceptsTopLevelLeaves;
@property(retain, nonatomic) NSDictionary *parseRules; // @synthesize parseRules=_parseRules;
@property(retain, nonatomic) NSNumber *foundStatus; // @synthesize foundStatus=_foundStatus;
- (void).cxx_destruct;
- (void)unknownToken:(int)arg1 receivedForCodePage:(int)arg2;
- (id)asParseRules;
- (id)initWithCodePage:(int)arg1 statusToken:(int)arg2;

@end
