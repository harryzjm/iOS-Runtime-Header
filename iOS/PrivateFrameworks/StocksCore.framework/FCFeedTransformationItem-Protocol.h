//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StocksCore/FCFeedPersonalizingItem-Protocol.h>
#import <StocksCore/NSObject-Protocol.h>

@class NSString;
@protocol FCChannelProviding;

@protocol FCFeedTransformationItem <NSObject, FCFeedPersonalizingItem>
@property(nonatomic, readonly) _Bool canBePurchased;
@property(nonatomic, readonly) long long publisherArticleVersion;
@property(nonatomic, readonly) long long minimumNewsVersion;
- (_Bool)isExplicitContent;
- (_Bool)isFromBlockedStorefront;
@property(nonatomic, readonly) double globalUserFeedback;
@property(nonatomic, readonly) unsigned long long feedHalfLifeMilliseconds;
@property(nonatomic, readonly) unsigned long long publishDateMilliseconds;
@property(nonatomic, readonly) NSString *sourceChannelID;
@property(nonatomic, readonly) unsigned long long order;
@property(nonatomic, readonly) unsigned long long contentType;
@property(nonatomic, readonly) NSString *clusterID;
@property(nonatomic, readonly) NSString *articleID;
@property(nonatomic, readonly) NSString *feedID;

@optional
@property(nonatomic, readonly) unsigned long long role;
@property(nonatomic, readonly) id <FCChannelProviding> sourceChannel;

// Remaining properties
@property(nonatomic, readonly) _Bool explicitContent;
@property(nonatomic, readonly) _Bool fromBlockedStorefront;
@end

