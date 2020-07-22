//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AFExperimentConfiguration, AFExperimentGroup, NSArray, NSString;

@interface AFExperimentConfigurationBuilder : NSObject
{
    AFExperimentConfiguration *_baseObject;
    long long _type;
    NSString *_identifier;
    NSString *_version;
    AFExperimentGroup *_controlGroup;
    NSArray *_experimentGroups;
    NSString *_salt;
    struct _builderFlags {
        unsigned int isDirty:1;
        unsigned int hasType:1;
        unsigned int hasIdentifier:1;
        unsigned int hasVersion:1;
        unsigned int hasControlGroup:1;
        unsigned int hasExperimentGroups:1;
        unsigned int hasSalt:1;
    } _builderFlags;
}

- (void).cxx_destruct;
- (id)build;
- (id)setSalt:(id)arg1;
- (id)setExperimentGroups:(id)arg1;
- (id)setControlGroup:(id)arg1;
- (id)setVersion:(id)arg1;
- (id)setIdentifier:(id)arg1;
- (id)setType:(long long)arg1;
- (id)initWithBaseObject:(id)arg1;
- (id)init;

@end
