//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, SAMPPodcastCollection;

@interface SAMPSubscribeToPodcastCollection
{
}

+ (id)subscribeToPodcastCollectionWithDictionary:(id)arg1 context:(id)arg2;
+ (id)subscribeToPodcastCollection;
- (_Bool)requiresResponse;
@property(retain, nonatomic) SAMPPodcastCollection *podcastCollection;
@property(copy, nonatomic) NSString *hashedRouteUID;
@property(copy, nonatomic) NSString *assetInfo;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

