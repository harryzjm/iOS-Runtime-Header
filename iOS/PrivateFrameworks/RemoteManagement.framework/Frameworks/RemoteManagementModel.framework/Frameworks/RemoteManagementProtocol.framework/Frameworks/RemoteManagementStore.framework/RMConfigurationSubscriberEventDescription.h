//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class RMStoreConfigurationSubscriberDescription;

@interface RMConfigurationSubscriberEventDescription : NSObject
{
    RMStoreConfigurationSubscriberDescription *_configurationSubscriberDescription;
}

+ (id)eventDescriptionWithEventsDictionary:(id)arg1;
+ (id)eventDescriptionWithExtensionDictionary:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) RMStoreConfigurationSubscriberDescription *configurationSubscriberDescription; // @synthesize configurationSubscriberDescription=_configurationSubscriberDescription;
- (id)initWithConfigurationSubscriberDescription:(id)arg1;

@end
