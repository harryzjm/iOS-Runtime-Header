//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/HMRemoteLoginMessageProtocol-Protocol.h>

@class NSDictionary, NSString;

@interface HMProvisionAnisetteDataRequest <HMRemoteLoginMessageProtocol>
{
}

+ (id)xpcMessageName;
+ (id)messageName;
+ (_Bool)supportsSecureCoding;
+ (id)objWithMessage:(id)arg1;
+ (id)objWithDict:(id)arg1;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSDictionary *messagePayload;
- (id)xpcMessageName;
- (id)messageName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

