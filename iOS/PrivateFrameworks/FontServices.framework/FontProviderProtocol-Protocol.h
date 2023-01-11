//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@protocol FontProviderProtocol
- (void)registeredFontsInfo:(_Bool)arg1 completionHandler:(void (^)(NSArray *))arg2;
- (void)unregisterFonts:(NSArray *)arg1 completionHandler:(void (^)(NSArray *, NSDictionary *))arg2;
- (void)registerFonts:(NSArray *)arg1 enabled:(_Bool)arg2 completionHandler:(void (^)(NSArray *, NSDictionary *))arg3;
@end
