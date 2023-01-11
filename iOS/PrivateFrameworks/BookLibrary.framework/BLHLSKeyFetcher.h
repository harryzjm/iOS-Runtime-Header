//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface BLHLSKeyFetcher : NSObject
{
    _Bool _ignoreCache;
}

+ (id)sharedInstance;
@property(nonatomic) _Bool ignoreCache; // @synthesize ignoreCache=_ignoreCache;
- (id)fetchOfflineKeyForMediaItem:(id)arg1 identity:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)fetchOnlineKeyForMediaItem:(id)arg1 loadingRequest:(id)arg2;
- (id)init;

@end
