//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDictionary, NSString;

@protocol AudioComponentPreferenceProtocol
- (void)getInterAppIcon:(NSString *)arg1 reply:(void (^)(NSData *))arg2;
- (void)getExtensionIcon:(NSString *)arg1 reply:(void (^)(NSData *))arg2;
- (void)setComponentUserTags:(NSDictionary *)arg1 tags:(NSArray *)arg2;
- (void)getComponentUserTags:(NSDictionary *)arg1 reply:(void (^)(NSArray *))arg2;
- (void)getExtensionComponentList:(NSString *)arg1 linkedSDKVersion:(int)arg2 reply:(void (^)(NSArray *))arg3;
- (void)setExtensionComponentList:(NSString *)arg1 linkedSDKVersion:(int)arg2 components:(NSArray *)arg3 reply:(void (^)(int))arg4;
@end

