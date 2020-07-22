//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;

@interface FRPublisherTopicFeature
{
    NSString *_publisherTagID;
    NSString *_topicTagID;
}

@property(retain, nonatomic) NSString *topicTagID; // @synthesize topicTagID=_topicTagID;
@property(retain, nonatomic) NSString *publisherTagID; // @synthesize publisherTagID=_publisherTagID;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *features;
- (id)fr_description;
- (id)initWithPublisherTagID:(id)arg1 topicTagID:(id)arg2;
- (id)initWithPersonalizationIdentifier:(id)arg1;
- (id)init;

@end

