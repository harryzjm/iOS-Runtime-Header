//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, SKIDirectInvocationPayload;

@interface SKIMessagesGatekeeperPayload : NSObject
{
    NSString *_appBundleId;
}

+ (_Bool)supports:(id)arg1;
- (void).cxx_destruct;
@property(copy) NSString *appBundleId; // @synthesize appBundleId=_appBundleId;
@property(readonly, retain) SKIDirectInvocationPayload *invocationPayload;
- (id)initWithDictionary:(id)arg1;
- (id)initWithAppBundleId:(id)arg1;

@end
