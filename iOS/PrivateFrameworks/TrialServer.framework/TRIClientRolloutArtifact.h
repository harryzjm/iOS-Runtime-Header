//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TrialServer/NSCopying-Protocol.h>
#import <TrialServer/NSSecureCoding-Protocol.h>

@class NSArray, NSDate, TRIClientRollout, TRIRolloutDeployment;

@interface TRIClientRolloutArtifact : NSObject <NSCopying, NSSecureCoding>
{
    TRIClientRollout *_rollout;
    NSArray *_populations;
    NSDate *_deploymentDate;
    unsigned long long _downloadSize;
}

+ (_Bool)supportsSecureCoding;
+ (id)artifactWithRollout:(id)arg1 populations:(id)arg2 deploymentDate:(id)arg3 downloadSize:(unsigned long long)arg4;
+ (void)load;
+ (_Bool)_isStructurallyValidWithRollout:(id)arg1 deployment:(id)arg2 namespaceNames:(id)arg3 populations:(id)arg4 deploymentDate:(id)arg5;
+ (_Bool)_signature:(id)arg1 onData:(id)arg2 isValidUsingPublicCertificate:(id)arg3;
+ (id)artifactFromCKRecord:(id)arg1 namespaceDescriptorProvider:(id)arg2 error:(id *)arg3;
+ (id)artifactWithTransientData:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long downloadSize; // @synthesize downloadSize=_downloadSize;
@property(readonly, nonatomic) NSDate *deploymentDate; // @synthesize deploymentDate=_deploymentDate;
@property(readonly, nonatomic) NSArray *populations; // @synthesize populations=_populations;
@property(readonly, nonatomic) TRIClientRollout *rollout; // @synthesize rollout=_rollout;
- (id)init;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToArtifact:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copyWithReplacementDownloadSize:(unsigned long long)arg1;
- (id)copyWithReplacementDeploymentDate:(id)arg1;
- (id)copyWithReplacementPopulations:(id)arg1;
- (id)copyWithReplacementRollout:(id)arg1;
- (id)initWithRollout:(id)arg1 populations:(id)arg2 deploymentDate:(id)arg3 downloadSize:(unsigned long long)arg4;
- (void)_swizzledEncodeWithCoder:(id)arg1;
- (id)data;
@property(readonly, nonatomic) NSArray *namespaceNames;
@property(readonly, nonatomic) TRIRolloutDeployment *deployment;

@end
