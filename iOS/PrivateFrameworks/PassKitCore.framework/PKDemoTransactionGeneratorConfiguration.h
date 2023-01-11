//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface PKDemoTransactionGeneratorConfiguration : NSObject
{
    NSString *_accountIdentifier;
    NSString *_transactionSourceIdentifier;
    long long _accountType;
    NSString *_merchantName;
    NSString *_personName;
    long long _transactionCount;
}

- (void).cxx_destruct;
@property(nonatomic) long long transactionCount; // @synthesize transactionCount=_transactionCount;
@property(copy, nonatomic) NSString *personName; // @synthesize personName=_personName;
@property(copy, nonatomic) NSString *merchantName; // @synthesize merchantName=_merchantName;
@property(nonatomic) long long accountType; // @synthesize accountType=_accountType;
@property(copy, nonatomic) NSString *transactionSourceIdentifier; // @synthesize transactionSourceIdentifier=_transactionSourceIdentifier;
@property(copy, nonatomic) NSString *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;

@end
