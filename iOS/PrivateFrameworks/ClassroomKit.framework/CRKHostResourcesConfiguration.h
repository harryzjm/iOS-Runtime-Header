//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ClassroomKit/NSCopying-Protocol.h>

@class NSArray;
@protocol CRKIPAddressProviding, CRKIdentity;

@interface CRKHostResourcesConfiguration : NSObject <NSCopying>
{
    unsigned short _port;
    NSArray *_resourceURLs;
    id <CRKIdentity> _serverIdentity;
    NSArray *_trustedCertificates;
    unsigned long long _maximumAllowedDownloads;
    NSObject<CRKIPAddressProviding> *_IPAddressProvider;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<CRKIPAddressProviding> *IPAddressProvider; // @synthesize IPAddressProvider=_IPAddressProvider;
@property(nonatomic) unsigned short port; // @synthesize port=_port;
@property(nonatomic) unsigned long long maximumAllowedDownloads; // @synthesize maximumAllowedDownloads=_maximumAllowedDownloads;
@property(readonly, copy, nonatomic) NSArray *trustedCertificates; // @synthesize trustedCertificates=_trustedCertificates;
@property(readonly, nonatomic) id <CRKIdentity> serverIdentity; // @synthesize serverIdentity=_serverIdentity;
@property(readonly, copy, nonatomic) NSArray *resourceURLs; // @synthesize resourceURLs=_resourceURLs;
- (id)initWithResourceURLs:(id)arg1 serverIdentity:(id)arg2 trustedAnchorCertificates:(id)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithResourceURLs:(id)arg1 serverIdentity:(id)arg2 trustedCertificates:(id)arg3;

@end
