//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface PVPersonDeduperSocialGroupOverlaps
{
}

- (void)dedupePersons:(id)arg1 withOtherPersons:(id)arg2 updateBlock:(CDUnknownBlockType)arg3 resultBlock:(CDUnknownBlockType)arg4;
- (void)mergePersons:(id)arg1 otherPersonLocalIdentifiers:(id)arg2 personsFetchResult:(id)arg3 mergeSocialGroupPersonIdentifiers:(id)arg4;
- (_Bool)isPersonSimilar:(id)arg1 withOtherPerson:(id)arg2 withDistance:(float)arg3;
- (id)metricsKey;
- (id)name;

@end

