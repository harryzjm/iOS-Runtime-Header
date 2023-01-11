//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface DMPluginParameters : NSObject
{
    NSDictionary *_dispositionSupersetOfContext;
    NSString *_backupDeviceUUID;
}

+ (id)backupDeviceUUIDFromDispositionSupersetOfContext:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *backupDeviceUUID; // @synthesize backupDeviceUUID=_backupDeviceUUID;
@property(retain, nonatomic) NSDictionary *dispositionSupersetOfContext; // @synthesize dispositionSupersetOfContext=_dispositionSupersetOfContext;
- (_Bool)isEqual:(id)arg1;
- (id)initWithDispositionSupersetOfContext:(id)arg1 backupDeviceUUID:(id)arg2;

@end
