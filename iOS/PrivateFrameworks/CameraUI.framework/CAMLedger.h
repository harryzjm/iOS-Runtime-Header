//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CAMLedger : NSObject
{
    struct ledger_entry_info *_ledgerEntries;
    long long _ledgerCount;
    int _footprintLedgerIndex;
}

+ (id)sharedInstance;
- (long long)footprint;
- (void)dealloc;
- (id)init;

@end
