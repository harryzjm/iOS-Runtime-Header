//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class KTTreeHead, NSData;

__attribute__((visibility("hidden")))
@interface KTSTHFailure : NSManagedObject
{
}

+ (id)fetchRequest;

// Remaining properties
@property(nonatomic) long long errorCode; // @dynamic errorCode;
@property(retain, nonatomic) NSData *proofOfFailure; // @dynamic proofOfFailure;
@property(retain, nonatomic) KTTreeHead *sth; // @dynamic sth;

@end
