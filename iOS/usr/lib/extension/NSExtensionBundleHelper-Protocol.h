//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSUUID;

@protocol NSExtensionBundleHelper
- (void)__queryPhotoServiceAuthorizationStatusForPlugInUUID:(NSUUID *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)__localizedInfoDictionaryObjectForKeys:(NSArray *)arg1 withPlugInUUID:(NSUUID *)arg2 completion:(void (^)(NSDictionary *, NSError *))arg3;
@end

