//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface MIDINetworkHost : NSObject
{
    void *_imp;
}

+ (id)fromAddressAsText:(id)arg1 withName:(id)arg2;
+ (id)hostWithName:(id)arg1 netService:(id)arg2;
+ (id)hostWithName:(id)arg1 netServiceName:(id)arg2 netServiceDomain:(id)arg3;
+ (id)hostWithName:(id)arg1 address:(id)arg2 port:(unsigned long long)arg3;
- (id)displayName;
- (id)addressAsText;
- (_Bool)hasSameAddressAs:(id)arg1;
- (void)setName:(id)arg1;
@property(readonly, nonatomic) NSString *netServiceDomain;
@property(readonly, nonatomic) NSString *netServiceName;
- (id)host;
@property(readonly, nonatomic) unsigned long long port;
@property(readonly, nonatomic) NSString *address;
@property(readonly, nonatomic) NSString *name;
- (id)description;
- (void)dealloc;
- (id)init;

@end
