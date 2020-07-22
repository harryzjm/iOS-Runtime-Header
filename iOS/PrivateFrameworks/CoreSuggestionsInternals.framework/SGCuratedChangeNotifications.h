//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface SGCuratedChangeNotifications : NSObject
{
}

+ (void)addCalendarObserver:(CDUnknownBlockType)arg1 forObjectLifetime:(id)arg2;
+ (void)addAddressBookObserver:(CDUnknownBlockType)arg1 forObjectLifetime:(id)arg2;
+ (void)_addObserver:(CDUnknownBlockType)arg1 forObjectLifetime:(id)arg2 listenerClass:(Class)arg3;
+ (id)_getListener:(Class)arg1;
+ (id)_getListenerByClassMap;
+ (void)simulateCalendarChange;
+ (void)simulateAddressBookChange;

@end

