//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMDAccessoryNetworkCredential, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDHomeReprovisioningPendingInformation : NSObject
{
    NSUUID *_messageIdentifier;
    HMDAccessoryNetworkCredential *_networkCredential;
}

- (void).cxx_destruct;
@property(readonly) HMDAccessoryNetworkCredential *networkCredential; // @synthesize networkCredential=_networkCredential;
@property(readonly) NSUUID *messageIdentifier; // @synthesize messageIdentifier=_messageIdentifier;
- (id)initWithMessageUUID:(id)arg1 networkCredential:(id)arg2;

@end

