//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, NSURL, NSUUID;

@protocol AudioInjectionXPCProtocol
- (void)primaryInputDeviceUUIDWithCompletion:(void (^)(_Bool, NSError *, NSUUID *))arg1;
- (void)disconnectDeviceWithUUID:(NSUUID *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)connectDeviceWithUUID:(NSUUID *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)injectAudio:(NSURL *)arg1 toDeviceWithUUID:(NSUUID *)arg2 withScaleFactor:(float)arg3 withNumChannels:(int)arg4 completion:(void (^)(_Bool, NSError *, unsigned long long, unsigned long long))arg5;
- (void)injectAudio:(NSURL *)arg1 toDeviceWithUUID:(NSUUID *)arg2 withScaleFactor:(float)arg3 completion:(void (^)(_Bool, NSError *, unsigned long long, unsigned long long))arg4;
- (void)createAudioInjectionDeviceWithType:(long long)arg1 deviceName:(NSString *)arg2 deviceID:(NSString *)arg3 productID:(NSString *)arg4 completion:(void (^)(_Bool, NSError *, NSUUID *))arg5;
- (void)pingpong:(NSString *)arg1 completion:(void (^)(NSString *))arg2;
@end

