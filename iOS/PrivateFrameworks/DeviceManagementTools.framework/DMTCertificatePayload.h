//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "DMTConfigurationPayloadBase.h"

@class NSData, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface DMTCertificatePayload : DMTConfigurationPayloadBase
{
    NSString *_certificateFileName;
    NSData *_content;
    NSString *_password;
}

+ (id)supportedPayloadTypes;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *password; // @synthesize password=_password;
@property(readonly, nonatomic) NSData *content; // @synthesize content=_content;
@property(readonly, nonatomic) NSString *certificateFileName; // @synthesize certificateFileName=_certificateFileName;
- (id)initWithDictionary:(id)arg1 error:(id *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSString *displayName;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *identifier;
@property(readonly, nonatomic) NSDictionary *rawDictionary;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSString *type;
@property(readonly, nonatomic) NSString *uuid;

@end

