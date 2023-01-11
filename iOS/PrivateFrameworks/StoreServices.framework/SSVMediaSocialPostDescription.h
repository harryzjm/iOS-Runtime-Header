//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <StoreServices/NSCopying-Protocol.h>
#import <StoreServices/SSXPCCoding-Protocol.h>

@class NSArray, NSNumber, NSString;

@interface SSVMediaSocialPostDescription : NSObject <NSCopying, SSXPCCoding>
{
    NSNumber *_accountIdentifier;
    NSArray *_attachments;
    _Bool _attributed;
    NSString *_authorIdentifier;
    NSString *_authorType;
    NSArray *_contentItems;
    NSArray *_externalServiceDestinations;
    NSString *_sourceApplicationIdentifier;
    NSString *_text;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(copy, nonatomic) NSString *sourceApplicationIdentifier; // @synthesize sourceApplicationIdentifier=_sourceApplicationIdentifier;
@property(copy, nonatomic) NSArray *externalServiceDestinations; // @synthesize externalServiceDestinations=_externalServiceDestinations;
@property(copy, nonatomic) NSArray *contentItems; // @synthesize contentItems=_contentItems;
@property(copy, nonatomic) NSString *authorType; // @synthesize authorType=_authorType;
@property(copy, nonatomic) NSString *authorIdentifier; // @synthesize authorIdentifier=_authorIdentifier;
@property(nonatomic, getter=isAttributed) _Bool attributed; // @synthesize attributed=_attributed;
@property(copy, nonatomic) NSArray *attachments; // @synthesize attachments=_attachments;
@property(copy, nonatomic) NSNumber *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
