//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PlugInKit/NSObject-Protocol.h>

@class NSDictionary, NSString, NSURL;

@protocol PKBundleProxy <NSObject>
@property(readonly, nonatomic) NSString *bundleVersion;
@property(readonly, nonatomic) NSURL *dataContainerURL;
@property(readonly, nonatomic) NSDictionary *entitlements;
@property(readonly, nonatomic) NSURL *relativeAppStoreReceiptURL;
@property(readonly, copy, nonatomic) NSString *localizedName;
@property(readonly, nonatomic) NSString *bundleIdentifier;
@property(readonly, nonatomic) NSURL *bundleURL;
@end

