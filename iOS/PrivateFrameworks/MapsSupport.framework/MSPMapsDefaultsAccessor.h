//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MapsSupport/GEOKeyBagProtectedDataDidBecomeAvailableObserver-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface MSPMapsDefaultsAccessor : NSObject <GEOKeyBagProtectedDataDidBecomeAvailableObserver>
{
    _Bool _protectedDataAvailable;
}

+ (void)synchronize;
+ (void)set:(id)arg1 value:(id)arg2;
+ (id)get:(id)arg1;
+ (id)sharedInstance;
- (void)_synchronize;
- (void)_set:(id)arg1 value:(id)arg2;
- (id)_get:(id)arg1;
- (void)protectedDataDidBecomeAvailable:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
