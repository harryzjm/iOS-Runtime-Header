//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/NSCopying-Protocol.h>
#import <SpringBoard/NSObject-Protocol.h>

@class NSString;

@protocol SBFSensorActivityAttribution <NSObject, NSCopying>
@property(readonly, copy, nonatomic) NSString *executableDisplayName;
@property(readonly, copy, nonatomic) NSString *activeEntityBundleIdentifier;
@property(readonly, nonatomic) _Bool usedRecently;
@property(readonly, nonatomic) _Bool isSystemService;
@property(readonly, copy, nonatomic) NSString *website;
@property(readonly, copy, nonatomic) NSString *attributionGroup;
@property(readonly, nonatomic) long long sensor;
@property(readonly, copy, nonatomic) NSString *bundleIdentifier;
@property(readonly, copy, nonatomic) NSString *displayName;
@end

