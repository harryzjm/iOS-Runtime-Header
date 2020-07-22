//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface MRExternalDeviceTransport : NSObject
{
    _Bool _requiresCustomPairing;
}

@property(readonly, nonatomic) _Bool requiresCustomPairing; // @synthesize requiresCustomPairing=_requiresCustomPairing;
- (_Bool)getInputStream:(id *)arg1 outputStream:(id *)arg2;
@property(readonly, nonatomic) long long port;
@property(readonly, nonatomic) NSString *hostname;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) void *deviceInfo;

@end

