//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSMutableArray, NSNumber;

@interface ASEnhancedSearchResponse
{
    int _expectedResultType;
    NSNumber *_status;
    NSMutableArray *_mResults;
}

+ (id)asParseRules;
+ (_Bool)notifyOfUnknownTokens;
+ (_Bool)frontingBasicTypes;
+ (_Bool)parsingWithSubItems;
+ (_Bool)parsingLeafNode;
+ (_Bool)acceptsTopLevelLeaves;
@property(retain, nonatomic) NSMutableArray *mResults; // @synthesize mResults=_mResults;
@property(nonatomic) int expectedResultType; // @synthesize expectedResultType=_expectedResultType;
@property(copy, nonatomic) NSNumber *status; // @synthesize status=_status;
- (void).cxx_destruct;
- (void)addStoreResponse:(id)arg1;
- (id)description;
@property(readonly, nonatomic) NSArray *stores;

@end
