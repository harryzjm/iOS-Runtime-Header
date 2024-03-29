//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSManagedObject.h"

@class NSNumber, NSString, PFUbiquityPeer, PFUbiquityStoreMetadata;

__attribute__((visibility("hidden")))
@interface PFUbiquityPeerState : NSManagedObject
{
}

- (id)initWithStoreName:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

// Remaining properties
@property(retain, nonatomic) NSString *lastProcessedTransactionLogURL; // @dynamic lastProcessedTransactionLogURL;
@property(retain, nonatomic) PFUbiquityPeer *peer; // @dynamic peer;
@property(retain, nonatomic) PFUbiquityStoreMetadata *storeMetadata; // @dynamic storeMetadata;
@property(retain, nonatomic) NSString *storeName; // @dynamic storeName;
@property(retain, nonatomic) NSNumber *transactionNumber; // @dynamic transactionNumber;

@end

