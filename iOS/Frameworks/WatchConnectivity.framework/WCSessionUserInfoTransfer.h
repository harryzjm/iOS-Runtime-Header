//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WatchConnectivity/NSSecureCoding-Protocol.h>

@class NSData, NSDate, NSDictionary, NSError, NSString, WCUserInfo;

@interface WCSessionUserInfoTransfer : NSObject <NSSecureCoding>
{
    _Bool _currentComplicationInfo;
    _Bool _transferring;
    WCUserInfo *_userInfoStorage;
    NSDate *_creationDate;
    NSError *_transferError;
    NSString *_transferIdentifier;
    NSString *_complicationTransferIdentifier;
}

+ (_Bool)supportsSecureCoding;
@property(copy) NSString *complicationTransferIdentifier; // @synthesize complicationTransferIdentifier=_complicationTransferIdentifier;
@property(copy) NSString *transferIdentifier; // @synthesize transferIdentifier=_transferIdentifier;
@property(retain) NSError *transferError; // @synthesize transferError=_transferError;
@property(retain, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(retain, nonatomic) WCUserInfo *userInfoStorage; // @synthesize userInfoStorage=_userInfoStorage;
@property(nonatomic, getter=isTransferring) _Bool transferring; // @synthesize transferring=_transferring;
@property(nonatomic, getter=isCurrentComplicationInfo) _Bool currentComplicationInfo; // @synthesize currentComplicationInfo=_currentComplicationInfo;
- (void).cxx_destruct;
- (id)protobufData;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (long long)compare:(id)arg1;
- (void)cancel;
- (_Bool)verifyUserInfo;
- (_Bool)updateUserInfoData:(id)arg1 error:(id *)arg2;
- (_Bool)updateUserInfo:(id)arg1 error:(id *)arg2;
@property(readonly, copy) NSData *userInfoData;
@property(readonly, copy, nonatomic) NSDictionary *userInfo;
- (id)init;
- (id)initWithProtoBufFileURL:(id)arg1;
- (id)initWithTranferIdentifier:(id)arg1 complicationTransferIdentifier:(id)arg2 currentComplication:(_Bool)arg3;
- (id)initWithComplicationTransferIdentifier:(id)arg1;

@end

