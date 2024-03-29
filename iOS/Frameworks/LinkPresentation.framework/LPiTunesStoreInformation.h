//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable, NSString, SKCloudServiceController;

__attribute__((visibility("hidden")))
@interface LPiTunesStoreInformation : NSObject
{
    SKCloudServiceController *_cloudServiceController;
    NSMapTable *_changeHandlers;
    unsigned long long _capabilities;
    _Bool _hasUpdatedCapabilities;
    NSString *_storefrontIdentifier;
}

+ (id)_convertNewStorefrontIdentifier:(id)arg1;
+ (unsigned long long)_convertCapabilities:(unsigned long long)arg1;
+ (id)shared;
- (void).cxx_destruct;
- (void)unregisterForStoreAvailablityChangesWithToken:(id)arg1;
- (void)registerForStoreAvailablityChangesWithToken:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_notifyChangeHandlers;
- (void)_storefrontDidChangeNotification;
- (void)_capabilitiesDidChangeNotification;
- (void)_setStorefrontIdentifier:(id)arg1;
@property(readonly, copy) NSString *storefrontIdentifier;
- (void)_setCapabilities:(unsigned long long)arg1;
@property(readonly) unsigned long long capabilities;
- (unsigned long long)userStateForMediaStorefrontIdentifier:(id)arg1;
- (void)_setupCloudServiceController;
- (id)init;

@end

