//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSMutableArray;

@interface ASMeetingResponseResponse
{
    NSMutableArray *_mSingularResponses;
}

+ (id)asParseRules;
+ (_Bool)notifyOfUnknownTokens;
+ (_Bool)frontingBasicTypes;
+ (_Bool)parsingWithSubItems;
+ (_Bool)parsingLeafNode;
+ (_Bool)acceptsTopLevelLeaves;
@property(retain, nonatomic) NSMutableArray *mSingularResponses; // @synthesize mSingularResponses=_mSingularResponses;
- (void).cxx_destruct;
- (id)description;
- (void)_addSingularResponse:(id)arg1;
@property(readonly, nonatomic) NSArray *singularResponses;
- (id)init;

@end

