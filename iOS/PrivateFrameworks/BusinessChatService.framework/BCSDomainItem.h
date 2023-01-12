//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BusinessChatService/BCSDomainItemProtocol-Protocol.h>

@class BCSDomainBundleIdPatterns, NSDate, NSString;

__attribute__((visibility("hidden")))
@interface BCSDomainItem : NSObject <BCSDomainItemProtocol>
{
    NSDate *_expirationDate;
    NSString *_base64EncodedShardString;
    BCSDomainBundleIdPatterns *_domainBundleIDPatterns;
}

- (void).cxx_destruct;
@property(retain, nonatomic) BCSDomainBundleIdPatterns *domainBundleIDPatterns; // @synthesize domainBundleIDPatterns=_domainBundleIDPatterns;
@property(copy, nonatomic) NSString *base64EncodedShardString; // @synthesize base64EncodedShardString=_base64EncodedShardString;
@property(copy, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(readonly, nonatomic) NSString *domain;
@property(readonly, nonatomic) long long type;
@property(readonly, nonatomic, getter=isExpired) _Bool expired;
- (id)initWithBase64EncodedShardString:(id)arg1 expirationDate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
