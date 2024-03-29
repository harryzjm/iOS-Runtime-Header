//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary, NSMutableDictionary, NSNumber, NSString, PFUbiquityKnowledgeVector;

__attribute__((visibility("hidden")))
@interface PFUbiquityPeerSnapshot : NSObject
{
    NSDictionary *_logSnapshot;
    NSMutableDictionary *_diffFromPrevious;
    PFUbiquityKnowledgeVector *_kv;
    NSNumber *_transactionNumber;
    NSDate *_transactionDate;
    NSString *_exportingPeerID;
}

- (long long)compare:(id)arg1;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithExportingPeerID:(id)arg1 logSnapshot:(id)arg2 transactionNumber:(id)arg3 transactionDate:(id)arg4 andKnowledgeVector:(id)arg5;
- (id)initWithTranasctionEntry:(id)arg1 andLogSnapshot:(id)arg2;

@end

