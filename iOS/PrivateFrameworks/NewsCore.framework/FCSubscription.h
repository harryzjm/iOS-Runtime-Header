//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSString, NSURL;

@interface FCSubscription : NSObject
{
    _Bool _notificationsEnabled;
    _Bool _canRetry;
    NSString *_subscriptionID;
    unsigned long long _subscriptionType;
    NSDate *_dateAdded;
    unsigned long long _zone;
    unsigned long long _subscriptionOrigin;
    NSString *_tagID;
    NSString *_groupID;
    NSURL *_url;
    NSString *_title;
    NSURL *_pollingURL;
    NSString *_errorMessage;
}

+ (id)pendingSubscriptionWithSubscriptionID:(id)arg1 url:(id)arg2 title:(id)arg3 pollingURL:(id)arg4 dateAdded:(id)arg5;
+ (id)subscriptionWithSubscriptionID:(id)arg1 tagID:(id)arg2 type:(unsigned long long)arg3 origin:(unsigned long long)arg4 groupID:(id)arg5 dateAdded:(id)arg6 notificationsEnabled:(_Bool)arg7 zone:(unsigned long long)arg8;
+ (id)subscriptionWithSubscriptionID:(id)arg1 dictionaryRepresentation:(id)arg2;
@property(readonly, nonatomic) _Bool canRetry; // @synthesize canRetry=_canRetry;
@property(readonly, nonatomic) NSString *errorMessage; // @synthesize errorMessage=_errorMessage;
@property(readonly, nonatomic) NSURL *pollingURL; // @synthesize pollingURL=_pollingURL;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *groupID; // @synthesize groupID=_groupID;
@property(retain, nonatomic) NSString *tagID; // @synthesize tagID=_tagID;
@property(readonly, nonatomic) unsigned long long subscriptionOrigin; // @synthesize subscriptionOrigin=_subscriptionOrigin;
@property(readonly, nonatomic) unsigned long long zone; // @synthesize zone=_zone;
@property(readonly, nonatomic) _Bool notificationsEnabled; // @synthesize notificationsEnabled=_notificationsEnabled;
@property(readonly, copy, nonatomic) NSDate *dateAdded; // @synthesize dateAdded=_dateAdded;
@property(readonly, nonatomic) unsigned long long subscriptionType; // @synthesize subscriptionType=_subscriptionType;
@property(readonly, copy, nonatomic) NSString *subscriptionID; // @synthesize subscriptionID=_subscriptionID;
- (void).cxx_destruct;
- (id)description;
- (id)asCKRecord;
- (long long)comparePriority:(id)arg1;
- (unsigned long long)priority;
- (_Bool)isDeprecated;
- (_Bool)isTypeIgnoredTag;
- (_Bool)isTypeGroupableTag;
- (_Bool)isTypeAutoFavoriteTag;
- (_Bool)isTypeMutedTag;
- (_Bool)isTypeTag;
- (_Bool)isTypePending;
- (id)initWithSubscriptionID:(id)arg1 url:(id)arg2 title:(id)arg3 pollingURL:(id)arg4 dateAdded:(id)arg5;
- (id)initWithSubscriptionID:(id)arg1 tagID:(id)arg2 groupID:(id)arg3 dateAdded:(id)arg4 subscriptionType:(unsigned long long)arg5 origin:(unsigned long long)arg6 notificationsEnabled:(_Bool)arg7 zone:(unsigned long long)arg8;
- (id)dictionaryRepresentation;

@end

