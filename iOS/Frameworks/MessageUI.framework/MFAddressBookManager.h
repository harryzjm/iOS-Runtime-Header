//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface MFAddressBookManager : NSObject
{
    void *_addressBook;
    struct os_unfair_lock_s _lock;
    struct __CFDictionary *_clients;
}

+ (_Bool)isAuthorizedToUseAddressBook;
+ (id)sharedManager;
- (void)removeClient:(id)arg1;
- (void)addClient:(id)arg1;
- (void)_handleAddressBookPrefsChangeNotification;
- (void)_handleAddressBookChangeNotification;
- (id)_clientWeakReferences;
- (void *)addressBook;
- (void)dealloc;
- (id)init;

@end

