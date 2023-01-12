//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NewsPersonalization/FCTagProviding-Protocol.h>

@class NSArray, NSString;
@protocol FCSportsTheming;

@protocol FCSportsProviding <FCTagProviding>
@property(nonatomic, readonly) NSString *topLevelSportTagIdentifier;
@property(nonatomic, readonly) NSArray *topLevelGroupsTagIdentifiers;
@property(nonatomic, readonly) NSString *sportsTypePluralizedDisplayName;
@property(nonatomic, readonly) NSString *sportsTypeDisplayName;
@property(nonatomic, readonly) unsigned long long sportsType;
@property(nonatomic, readonly) id <FCSportsTheming> sportsTheme;
@property(nonatomic, readonly) unsigned long long sportsLeagueType;
@property(nonatomic, readonly) NSString *sportsNameAbbreviation;
@property(nonatomic, readonly) NSString *sportsNickname;
@property(nonatomic, readonly) NSString *sportsFullName;
@property(nonatomic, readonly) NSString *sportsSecondaryName;
@property(nonatomic, readonly) NSString *sportsPrimaryName;
@property(nonatomic, readonly) _Bool hideLocationInMasthead;
@property(nonatomic, readonly) NSString *sportsLocation;
@property(nonatomic, readonly) NSString *sportsData;
@property(nonatomic, readonly) _Bool isSportsRecommendable;
@property(nonatomic, readonly) NSString *UMCCanonicalID;
@end

