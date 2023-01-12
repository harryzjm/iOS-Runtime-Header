//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LocationSupport/CLIntersiloService.h>

@class NSString;

@interface CLNotifierServiceAdapter : CLIntersiloService
{
    struct map<unsigned long, int, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, int>>> _clients;
    struct CLNotifierBase *_notifier;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct CLNotifierBase *notifier; // @synthesize notifier=_notifier;
@property(readonly, copy) NSString *debugDescription;
- (int)notifierClientNumForCoparty:(id)arg1;
- (void)forget:(byref id)arg1;
- (void)unregister:(byref id)arg1 forNotification:(int)arg2;
- (void)register:(byref id)arg1 forNotification:(int)arg2 registrationInfo:(id)arg3;
- (void)invalidate;
- (void)setAdaptedNotifier:(struct CLNotifierBase *)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

