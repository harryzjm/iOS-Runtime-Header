//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DeviceManagement/CATTaskRequest.h>

@class NSArray, NSString, NSURL;

@interface CRKOpenURLRequest : CATTaskRequest
{
    _Bool _lockInApp;
    NSURL *_URL;
    NSString *_URLDisplayName;
    NSArray *_handlingBundleIdentifiers;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *handlingBundleIdentifiers; // @synthesize handlingBundleIdentifiers=_handlingBundleIdentifiers;
@property(nonatomic) _Bool lockInApp; // @synthesize lockInApp=_lockInApp;
@property(copy, nonatomic) NSString *URLDisplayName; // @synthesize URLDisplayName=_URLDisplayName;
@property(copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
