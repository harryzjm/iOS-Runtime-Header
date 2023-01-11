//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CryptoTokenKit/TKProtocolSmartCardSlotNotification-Protocol.h>

@class NSHashTable, TKSmartCardSlot;

__attribute__((visibility("hidden")))
@interface TKSmartCardSlotProxy : NSObject <TKProtocolSmartCardSlotNotification>
{
    TKSmartCardSlot *_slot;
    NSHashTable *_cards;
}

@property(readonly) NSHashTable *cards; // @synthesize cards=_cards;
- (void).cxx_destruct;
- (id)initWithSlot:(id)arg1;
- (void)cardSessionRequested;
- (void)notifyWithParameters:(id)arg1;

@end

