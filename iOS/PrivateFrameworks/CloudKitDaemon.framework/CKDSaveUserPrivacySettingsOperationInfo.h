//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKit/CKOperationInfo.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CKDSaveUserPrivacySettingsOperationInfo : CKOperationInfo
{
    long long _discoverable;
    NSString *_applicationBundleID;
}

@property(copy, nonatomic) NSString *applicationBundleID; // @synthesize applicationBundleID=_applicationBundleID;
@property(nonatomic) long long discoverable; // @synthesize discoverable=_discoverable;
- (void).cxx_destruct;
- (id)init;

@end
