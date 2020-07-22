//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AFExperiment, NSDictionary, NSString;

@interface AFExperimentBuilder : NSObject
{
    AFExperiment *_baseObject;
    NSString *_configurationIdentifier;
    NSString *_configurationVersion;
    NSString *_deploymentGroupIdentifier;
    NSDictionary *_deploymentGroupProperties;
    long long _deploymentReason;
    struct _builderFlags {
        unsigned int isDirty:1;
        unsigned int hasConfigurationIdentifier:1;
        unsigned int hasConfigurationVersion:1;
        unsigned int hasDeploymentGroupIdentifier:1;
        unsigned int hasDeploymentGroupProperties:1;
        unsigned int hasDeploymentReason:1;
    } _builderFlags;
}

- (void).cxx_destruct;
- (id)build;
- (id)setDeploymentReason:(long long)arg1;
- (id)setDeploymentGroupProperties:(id)arg1;
- (id)setDeploymentGroupIdentifier:(id)arg1;
- (id)setConfigurationVersion:(id)arg1;
- (id)setConfigurationIdentifier:(id)arg1;
- (id)initWithBaseObject:(id)arg1;
- (id)init;

@end

