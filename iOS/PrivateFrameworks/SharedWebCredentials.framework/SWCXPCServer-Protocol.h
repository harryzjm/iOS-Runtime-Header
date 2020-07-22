//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SharedWebCredentials/NSObject-Protocol.h>

@class NSDictionary, NSString;

@protocol SWCXPCServer <NSObject>
- (void)show:(NSString *)arg1 reply:(void (^)(NSString *))arg2;
- (void)logControl:(NSString *)arg1 reply:(void (^)(NSString *))arg2;
- (void)addAllAppsWithReply:(void (^)(int))arg1;
- (void)setService:(NSString *)arg1 app:(NSString *)arg2 domain:(NSString *)arg3 mask:(unsigned int)arg4 flags:(unsigned int)arg5 reply:(void (^)(int, unsigned int))arg6;
- (void)setService:(NSString *)arg1 app:(NSString *)arg2 domain:(NSString *)arg3 details:(NSDictionary *)arg4 reply:(void (^)(int))arg5;
- (void)removeService:(NSString *)arg1 app:(NSString *)arg2 domain:(NSString *)arg3 reply:(void (^)(int))arg4;
- (void)addService:(NSString *)arg1 app:(NSString *)arg2 domain:(NSString *)arg3 reply:(void (^)(int))arg4;
- (void)getInfoForService:(NSString *)arg1 app:(NSString *)arg2 domain:(NSString *)arg3 reply:(void (^)(int, NSArray *))arg4;
- (void)checkService:(NSString *)arg1 app:(NSString *)arg2 domain:(NSString *)arg3 reply:(void (^)(int, unsigned int, NSDictionary *))arg4;
@end

