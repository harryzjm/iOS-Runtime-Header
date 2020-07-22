//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CDPDevice, NSDictionary, NSString;

@interface CDPDRemoteSecretValidationResult : NSObject
{
    _Bool _userDidCancel;
    _Bool _userDidReset;
    unsigned long long _secretType;
    CDPDevice *_device;
    NSString *_validSecret;
    NSDictionary *_recoveredInfo;
}

@property(copy, nonatomic) NSDictionary *recoveredInfo; // @synthesize recoveredInfo=_recoveredInfo;
@property(copy, nonatomic) NSString *validSecret; // @synthesize validSecret=_validSecret;
@property(copy, nonatomic) CDPDevice *device; // @synthesize device=_device;
@property(nonatomic) _Bool userDidReset; // @synthesize userDidReset=_userDidReset;
@property(nonatomic) _Bool userDidCancel; // @synthesize userDidCancel=_userDidCancel;
@property(nonatomic) unsigned long long secretType; // @synthesize secretType=_secretType;
- (void).cxx_destruct;

@end

