//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMFMessageDestination, HMFMessageTransport, NSDictionary, NSString, NSUUID;

@interface HMFMutableMessage
{
}

- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(nonatomic) __weak HMFMessageTransport *transport; // @dynamic transport;
- (void)setHeaderValue:(id)arg1 forKey:(id)arg2;
@property(copy, nonatomic) NSDictionary *headers; // @dynamic headers;
- (void)setUserInfoValue:(id)arg1 forKey:(id)arg2;
@property(copy, nonatomic) NSDictionary *userInfo; // @dynamic userInfo;
@property(nonatomic) long long qualityOfService; // @dynamic qualityOfService;
@property(copy, nonatomic) NSString *name; // @dynamic name;

// Remaining properties
@property(retain, nonatomic) HMFMessageDestination *destination; // @dynamic destination;
@property(copy, nonatomic) NSUUID *identifier; // @dynamic identifier;
@property(copy, nonatomic) NSDictionary *messagePayload; // @dynamic messagePayload;
@property(copy, nonatomic) CDUnknownBlockType responseHandler; // @dynamic responseHandler;

@end
