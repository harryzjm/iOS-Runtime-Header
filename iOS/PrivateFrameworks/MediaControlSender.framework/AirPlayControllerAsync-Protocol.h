//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@protocol AirPlayControllerAsync
- (void)setProperty:(NSString *)arg1 qualifier:(id)arg2 value:(id)arg3 completion:(void (^)(int))arg4;
- (void)getProperty:(NSString *)arg1 qualifier:(id)arg2 completion:(void (^)(int, id))arg3;
- (void)postEvent:(NSString *)arg1 qualifier:(id)arg2 params:(id)arg3 completion:(void (^)(void))arg4;
- (void)performCommand:(NSString *)arg1 qualifier:(id)arg2 params:(id)arg3 completion:(void (^)(int, NSDictionary *))arg4;
@end
