//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, NSString;

@interface TRIProjectOwner
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) unsigned int adirGroupId; // @dynamic adirGroupId;
@property(copy, nonatomic) NSString *driEmail; // @dynamic driEmail;
@property(nonatomic) _Bool hasAdirGroupId; // @dynamic hasAdirGroupId;
@property(nonatomic) _Bool hasDriEmail; // @dynamic hasDriEmail;
@property(nonatomic) _Bool hasPrivacyApprovalRequired; // @dynamic hasPrivacyApprovalRequired;
@property(nonatomic) _Bool hasProjectId; // @dynamic hasProjectId;
@property(nonatomic) _Bool hasQaContact; // @dynamic hasQaContact;
@property(nonatomic) _Bool hasRadarComponent; // @dynamic hasRadarComponent;
@property(nonatomic) _Bool hasReleaseManagerEmail; // @dynamic hasReleaseManagerEmail;
@property(nonatomic) _Bool hasSecurityApprovalRequired; // @dynamic hasSecurityApprovalRequired;
@property(retain, nonatomic) NSMutableArray *privacyApprovalArray; // @dynamic privacyApprovalArray;
@property(readonly, nonatomic) unsigned long long privacyApprovalArray_Count; // @dynamic privacyApprovalArray_Count;
@property(nonatomic) _Bool privacyApprovalRequired; // @dynamic privacyApprovalRequired;
@property(nonatomic) int projectId; // @dynamic projectId;
@property(copy, nonatomic) NSString *qaContact; // @dynamic qaContact;
@property(copy, nonatomic) NSString *radarComponent; // @dynamic radarComponent;
@property(copy, nonatomic) NSString *releaseManagerEmail; // @dynamic releaseManagerEmail;
@property(retain, nonatomic) NSMutableArray *securityApprovalArray; // @dynamic securityApprovalArray;
@property(readonly, nonatomic) unsigned long long securityApprovalArray_Count; // @dynamic securityApprovalArray_Count;
@property(nonatomic) _Bool securityApprovalRequired; // @dynamic securityApprovalRequired;

@end
