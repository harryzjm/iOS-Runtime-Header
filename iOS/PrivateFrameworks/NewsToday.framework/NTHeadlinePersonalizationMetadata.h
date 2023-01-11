//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NewsToday/NTHeadlinePersonalizationMetadata-Protocol.h>

@class NSDictionary, NSString;

@interface NTHeadlinePersonalizationMetadata : NSObject <NTHeadlinePersonalizationMetadata>
{
    NSString *_articleID;
    NSString *_publisherID;
    NSDictionary *_scoredTopicIDs;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSDictionary *scoredTopicIDs; // @synthesize scoredTopicIDs=_scoredTopicIDs;
@property(readonly, copy, nonatomic) NSString *publisherID; // @synthesize publisherID=_publisherID;
@property(readonly, copy, nonatomic) NSString *articleID; // @synthesize articleID=_articleID;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithArticleID:(id)arg1 publisherID:(id)arg2 scoredTopicIDs:(id)arg3;
- (id)init;

@end
