//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NewsCore/FCFeedGroupInsertionDescriptor-Protocol.h>

@class NSSet, NSString;

@interface FCConfigurableFeedGroupInsertionDescriptor : NSObject <FCFeedGroupInsertionDescriptor>
{
    NSString *_sourceIdentifier;
    NSSet *_precedingSourceIdentifiers;
    unsigned long long _firstGroupMinPrecedingTopicGroups;
    unsigned long long _minPrecedingTopicGroups;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long minPrecedingTopicGroups; // @synthesize minPrecedingTopicGroups=_minPrecedingTopicGroups;
@property(readonly, nonatomic) unsigned long long firstGroupMinPrecedingTopicGroups; // @synthesize firstGroupMinPrecedingTopicGroups=_firstGroupMinPrecedingTopicGroups;
@property(readonly, copy, nonatomic) NSSet *precedingSourceIdentifiers; // @synthesize precedingSourceIdentifiers=_precedingSourceIdentifiers;
@property(readonly, copy, nonatomic) NSString *sourceIdentifier; // @synthesize sourceIdentifier=_sourceIdentifier;
- (_Bool)wantsToInsertGroupInContext:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSourceIdentifier:(id)arg1 precedingSourceIdentifiers:(id)arg2 firstGroupMinPrecedingTopicGroups:(unsigned long long)arg3 minPrecedingTopicGroups:(unsigned long long)arg4;
- (id)init;

@end
