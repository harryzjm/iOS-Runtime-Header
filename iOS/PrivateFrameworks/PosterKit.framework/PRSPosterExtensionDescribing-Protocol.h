//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PosterKit/BSInvalidatable-Protocol.h>

@class LSPropertyList, NSBundle, NSData, NSString, NSUUID, RBSProcessIdentity, _EXExtensionIdentity, _EXHostConfiguration;

@protocol PRSPosterExtensionDescribing <BSInvalidatable>
@property(readonly, nonatomic) NSUUID *prs_instanceIdentifier;
@property(readonly, nonatomic) NSBundle *prs_posterExtensionBundle;
@property(readonly, nonatomic) NSData *prs_persistentIdentifier;
@property(readonly, nonatomic) LSPropertyList *prs_posterExtensionEntitlementsPlist;
@property(readonly, nonatomic) LSPropertyList *prs_posterExtensionInfoPlist;
@property(readonly, nonatomic) NSString *prs_posterExtensionContainerBundleIdentifier;
@property(readonly, nonatomic) NSString *prs_localizedName;
@property(readonly, nonatomic) NSString *prs_posterExtensionBundleIdentifier;
@property(readonly, nonatomic) RBSProcessIdentity *prs_processIdentity;
@property(readonly, nonatomic) _EXHostConfiguration *prs_hostConfiguration;
@property(readonly, nonatomic) _EXExtensionIdentity *prs_identity;
@end

