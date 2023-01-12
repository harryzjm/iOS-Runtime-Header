//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSDictionary, NSString;

@interface SOSmartcardEntry : NSObject
{
    NSString *_upn;
    NSString *_certName;
    NSString *_tokenID;
    NSDictionary *_attributes;
    struct __SecIdentity *_identity;
    NSData *_persistientRef;
}

- (void).cxx_destruct;
@property(retain) NSData *persistientRef; // @synthesize persistientRef=_persistientRef;
@property struct __SecIdentity *identity; // @synthesize identity=_identity;
@property(retain) NSDictionary *attributes; // @synthesize attributes=_attributes;
@property(retain) NSString *tokenID; // @synthesize tokenID=_tokenID;
@property(retain) NSString *certName; // @synthesize certName=_certName;
@property(retain) NSString *upn; // @synthesize upn=_upn;

@end
