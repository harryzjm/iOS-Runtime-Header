//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IMCore/IMTimingCollection.h>

@interface IMTimingCollection (CKUtilities)
+ (void)invalidateGlobalTimingCollections;
+ (void)invalidateGlobalTimingCollectionForKey:(id)arg1;
+ (void)logTimingCollectionForKey:(id)arg1;
+ (id)activeGlobalTimingCollections;
+ (id)globalTimingCollectionForKey:(id)arg1;
@end
