//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDictionary.h>

@interface NSDictionary (GKCollectionUtils)
+ (id)_gkDictionaryWithFormEncodedString:(id)arg1;
+ (id)_gkClientImageDictionaryForServerImageURLs:(id)arg1;
+ (id)_gkImageCacheKeyPathsByKey;
- (id)_gkValuesForKeys:(id)arg1;
- (id)_gkSubDictionaryWithKeys:(id)arg1 mappedToNewKeys:(id)arg2;
- (id)_gkSubDictionaryWithKeys:(id)arg1;
- (id)_gkDictionaryByRemovingObjectForKey:(id)arg1;
- (id)_gkDictionaryByRemovingObjectsForKeys:(id)arg1;
- (id)_gkDescriptionWithChildren:(long long)arg1;
- (id)_gkImageURLForSize:(long long)arg1 scale:(double)arg2;
- (id)_gkImageURLForSize:(long long)arg1 scale:(double)arg2 foundSize:(out unsigned long long *)arg3;
@end

