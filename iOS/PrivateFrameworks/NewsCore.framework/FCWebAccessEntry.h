//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface FCWebAccessEntry : NSObject
{
    NSString *_email;
    NSString *_purchaseID;
    NSString *_purchaseReceipt;
    NSDate *_lastRetryAttemptTime;
    NSString *_identifier;
    NSString *_tagID;
}

@property(copy, nonatomic) NSString *tagID; // @synthesize tagID=_tagID;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSDate *lastRetryAttemptTime; // @synthesize lastRetryAttemptTime=_lastRetryAttemptTime;
@property(copy, nonatomic) NSString *purchaseReceipt; // @synthesize purchaseReceipt=_purchaseReceipt;
@property(copy, nonatomic) NSString *purchaseID; // @synthesize purchaseID=_purchaseID;
@property(copy, nonatomic) NSString *email; // @synthesize email=_email;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithEntryID:(id)arg1 dictionaryRepresentation:(id)arg2;
- (id)initWithEntryID:(id)arg1 tagID:(id)arg2 purchaseID:(id)arg3 lastRetryAttemptTime:(id)arg4 email:(id)arg5 purchaseReceipt:(id)arg6;

@end

