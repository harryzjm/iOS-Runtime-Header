//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;

@interface SAVCSAddResultsToContentShelf
{
}

+ (id)addResultsToContentShelfWithDictionary:(id)arg1 context:(id)arg2;
+ (id)addResultsToContentShelf;
- (_Bool)requiresResponse;
@property(copy, nonatomic) NSArray *results;
@property(nonatomic) long long pageNumber;
@property(copy, nonatomic) NSArray *fetchMoreResultsCommands;
@property(copy, nonatomic) NSString *contentShelfViewId;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

