//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface HMDNetworkRouterIPAddress : NSObject
{
    NSData *_v4;
    NSData *_v6;
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;
+ (id)ipAddressFromRuleAddress:(id)arg1 allowWildcard:(_Bool)arg2;
+ (id)ipAddressFromNetAddress:(id)arg1 error:(id *)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSData *v6; // @synthesize v6=_v6;
@property(retain, nonatomic) NSData *v4; // @synthesize v4=_v4;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializeWithError:(id *)arg1;
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;
- (id)initWithV4:(id)arg1 v6:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

