//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NanoTimeKit/NSObject-Protocol.h>

@class NTKArgonKeyDescriptor;

@protocol NTKFaceSupportServer <NSObject>
- (void)setCurrentEnvironment:(long long)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)requestCurrentEnvironment:(void (^)(long long, NSError *))arg1;
- (void)displayUserNotificationForKeyDescriptor:(NTKArgonKeyDescriptor *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)knownKeyDescriptors:(void (^)(NSArray *))arg1;
- (void)requestResetOnNextLaunch:(void (^)(_Bool))arg1;
- (void)ingestKeyDescriptor:(NTKArgonKeyDescriptor *)arg1 withMethod:(unsigned long long)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)queryForNewFaces:(void (^)(_Bool))arg1;
@end

