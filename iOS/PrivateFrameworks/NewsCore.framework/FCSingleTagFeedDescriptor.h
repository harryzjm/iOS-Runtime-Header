//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol FCTagProviding;

@interface FCSingleTagFeedDescriptor
{
    id <FCTagProviding> _tag;
    long long _feedType;
    id <FCTagProviding> _masterTag;
}

@property(readonly, copy, nonatomic) id <FCTagProviding> masterTag; // @synthesize masterTag=_masterTag;
- (void)setFeedType:(long long)arg1;
- (long long)feedType;
@property(copy, nonatomic) id <FCTagProviding> tag; // @synthesize tag=_tag;
- (void).cxx_destruct;
- (long long)feedFilterOptions;
- (long long)feedSortMethod;
- (id)feedGroupEmitters;
- (id)iAdSectionID;
- (id)iAdFeedID;
- (id)iAdPrimaryAudience;
- (long long)iAdContentProvider;
- (id)iAdKeywords;
- (id)iAdCategories;
- (id)backingTopicID;
- (id)backingSectionID;
- (id)backingChannelID;
- (id)backingTag;
- (_Bool)enableNotificationsWithSubscriptionController:(id)arg1 error:(id *)arg2;
- (_Bool)hasNotificationsEnabledWithSubscriptionController:(id)arg1;
- (_Bool)isMutedWithSubscriptionController:(id)arg1;
- (_Bool)isSubscribedToWithSubscriptionController:(id)arg1;
- (void)unsubscribeToWithSubscriptionController:(id)arg1 eventInitiationLevel:(long long)arg2;
- (_Bool)subscribeToWithSubscriptionController:(id)arg1 eventInitiationLevel:(long long)arg2 error:(id *)arg3;
- (_Bool)isSubscribable;
- (id)theme;
- (_Bool)hideAccessoryText;
- (id)name;
- (_Bool)isEqual:(id)arg1;
- (id)initWithContext:(id)arg1 identifier:(id)arg2 tag:(id)arg3;

@end

