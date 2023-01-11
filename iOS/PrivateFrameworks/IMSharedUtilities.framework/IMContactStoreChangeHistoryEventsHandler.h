//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <IMSharedUtilities/CNChangeHistoryEventVisitor-Protocol.h>

@class NSString;

@interface IMContactStoreChangeHistoryEventsHandler : NSObject <CNChangeHistoryEventVisitor>
{
}

- (void)postNotificationForCNContact:(id)arg1 eventType:(unsigned long long)arg2 handleIDsToProcess:(id)arg3;
- (void)processChangeEventForContact:(id)arg1 contactFromCache:(id)arg2 eventType:(unsigned long long)arg3 handleID:(id)arg4;
- (void)processContactChangeEventForContact:(id)arg1 ofEventType:(unsigned long long)arg2;
- (void)visitUpdateContactEvent:(id)arg1;
- (void)visitDeleteContactEvent:(id)arg1;
- (void)visitAddContactEvent:(id)arg1;
- (void)visitDropEverythingEvent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
