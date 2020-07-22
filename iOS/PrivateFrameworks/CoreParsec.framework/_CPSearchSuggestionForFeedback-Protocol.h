//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreParsec/NSObject-Protocol.h>

@class NSData, NSDictionary, NSString;

@protocol _CPSearchSuggestionForFeedback <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) _Bool hasFbr;
@property(copy, nonatomic) NSString *fbr;
@property(readonly, nonatomic) _Bool hasType;
@property(nonatomic) int type;
@property(readonly, nonatomic) _Bool hasScore;
@property(nonatomic) double score;
@property(readonly, nonatomic) _Bool hasQuery;
@property(copy, nonatomic) NSString *query;
@property(readonly, nonatomic) _Bool hasSuggestion;
@property(copy, nonatomic) NSString *suggestion;
@property(readonly, nonatomic) _Bool hasIdentifier;
@property(copy, nonatomic) NSString *identifier;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
@end

