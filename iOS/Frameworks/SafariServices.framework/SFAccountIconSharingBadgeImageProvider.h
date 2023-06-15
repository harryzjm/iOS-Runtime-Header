//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface SFAccountIconSharingBadgeImageProvider : NSObject
{
    NSHashTable *_subscribers;
    NSMutableDictionary *_badgeDiameterToImageCache;
}

+ (id)sharedProvider;
- (void).cxx_destruct;
- (void)_resetAndInformSubscribers;
- (void)addCoordinatorAsSubscriber:(id)arg1;
- (id)_createBadgeImageWithDiameter:(unsigned long long)arg1;
- (id)badgeImageForDiameter:(unsigned long long)arg1;
- (id)init;

@end

