//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSMutableArray, NSNumber;

@interface ASResolveRecipientsResponse
{
    NSNumber *_easStatus;
    NSMutableArray *_mResponses;
    NSArray *_responses;
}

+ (id)asParseRules;
+ (_Bool)notifyOfUnknownTokens;
+ (_Bool)frontingBasicTypes;
+ (_Bool)parsingWithSubItems;
+ (_Bool)parsingLeafNode;
+ (_Bool)acceptsTopLevelLeaves;
@property(retain, nonatomic) NSArray *responses; // @synthesize responses=_responses;
@property(retain, nonatomic) NSMutableArray *mResponses; // @synthesize mResponses=_mResponses;
@property(retain, nonatomic, setter=setEASStatus:) NSNumber *easStatus; // @synthesize easStatus=_easStatus;
- (void).cxx_destruct;
- (id)description;
- (void)addResponse:(id)arg1;

@end

