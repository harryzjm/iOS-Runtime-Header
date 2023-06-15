//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NewsCore/FCTagProviding-Protocol.h>

@class NSArray, NSString;

@protocol FCChannelProviding <FCTagProviding>
@property(readonly, copy, nonatomic) NSString *backIssuesListID;
@property(readonly, copy, nonatomic) NSArray *recentIssueIDs;
@property(readonly, copy, nonatomic) NSArray *currentIssueIDs;
@property(readonly, nonatomic) unsigned long long channelType;
@property(readonly, nonatomic) _Bool isWhitelisted;
@property(readonly, nonatomic) _Bool supportsNotifications;
@property(readonly, copy, nonatomic) NSString *defaultSectionID;
@property(readonly, copy, nonatomic) NSArray *sectionIDs;
- (NSString *)paidFeedIDForSection:(NSString *)arg1 bin:(long long)arg2;
- (NSString *)freeFeedIDForSection:(NSString *)arg1 bin:(long long)arg2;
@end

