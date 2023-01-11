//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface NTKPeopleComplicationContactsCache : NSObject
{
    NSDictionary *_favoritesMapping;
    int _deviceLockStateChangeNotifyToken;
    _Bool _hasSetupNotifications;
}

+ (id)sharedCache;
- (void).cxx_destruct;
- (void)_didReceiveDeviceLockStateDidChangeNotification;
- (void)_didReceiveFavoritesChangeRelatedNotification;
- (void)_didReceiveContactStoreChangedNotification;
- (void)_tearDownNotifications;
- (void)_setupNotifications;
- (void)_queue_loadFavoriteContacts;
- (id)_loadFavoriteContacts;
- (id)abbreviatedNameForContact:(id)arg1;
- (id)fullNameForContact:(id)arg1;
- (id)shortNameForContact:(id)arg1;
- (id)favoriteContacts;
- (void)setupNotificationsIfNecessary;
- (void)dealloc;

@end
