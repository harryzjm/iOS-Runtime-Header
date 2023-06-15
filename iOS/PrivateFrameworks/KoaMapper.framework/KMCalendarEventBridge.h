//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class EKEventStore, KVItemMapper, NSString;

__attribute__((visibility("hidden")))
@interface KMCalendarEventBridge : NSObject
{
    KVItemMapper *_itemMapper;
    EKEventStore *_eventStore;
}

- (void).cxx_destruct;
@property(retain, nonatomic) EKEventStore *eventStore; // @synthesize eventStore=_eventStore;
- (_Bool)enumerateItemsWithError:(id *)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)originAppId;
- (long long)itemType;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

