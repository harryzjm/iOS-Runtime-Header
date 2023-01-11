//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFObject-Protocol.h>

@class NSArray, NSString;

@interface HMDAccessorySettingGroupMetadata : HMFObject <HMFObject>
{
    NSString *_name;
    NSArray *_groups;
    NSArray *_settings;
}

+ (id)groupWithDictonaryRepresentation:(id)arg1;
+ (id)groupsWithArrayRepresenation:(id)arg1;
@property(readonly, copy) NSArray *settings; // @synthesize settings=_settings;
@property(readonly, copy) NSArray *groups; // @synthesize groups=_groups;
@property(readonly, copy) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)modelsWithParentIdentifier:(id)arg1;
@property(readonly, copy) NSString *propertyDescription;
- (id)initWithName:(id)arg1 settings:(id)arg2 groups:(id)arg3;

// Remaining properties
@property(readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *privateDescription;
@property(readonly, copy) NSString *shortDescription;
@property(readonly) Class superclass;

@end

