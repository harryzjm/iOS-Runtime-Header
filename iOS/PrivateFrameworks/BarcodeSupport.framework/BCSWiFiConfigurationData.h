//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BarcodeSupport/BCSParsedDataPrivate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface BCSWiFiConfigurationData : NSObject <BCSParsedDataPrivate>
{
    _Bool _WEP;
    NSString *_ssid;
    NSString *_password;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSString *password; // @synthesize password=_password;
@property(readonly, nonatomic, getter=isWEP) _Bool WEP; // @synthesize WEP=_WEP;
@property(readonly, copy, nonatomic) NSString *ssid; // @synthesize ssid=_ssid;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, copy, nonatomic) NSString *extraPreviewText;
@property(readonly, nonatomic) long long type;
- (id)initWithSSID:(id)arg1 isWEP:(_Bool)arg2 password:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
