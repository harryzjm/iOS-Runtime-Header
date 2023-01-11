//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKit/NSSecureCoding-Protocol.h>

@class NSArray, NSMutableArray, NSString, NSUUID;

@interface HMSettingGroup : NSObject <NSSecureCoding>
{
    NSString *_keyPath;
    NSUUID *_identifier;
    NSString *_name;
    NSMutableArray *_internalSettings;
    NSMutableArray *_internalGroups;
}

+ (_Bool)supportsSecureCoding;
@property(retain) NSMutableArray *internalGroups; // @synthesize internalGroups=_internalGroups;
@property(retain) NSMutableArray *internalSettings; // @synthesize internalSettings=_internalSettings;
@property(readonly, copy) NSString *name; // @synthesize name=_name;
@property(readonly, copy) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(copy) NSString *keyPath; // @synthesize keyPath=_keyPath;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)merge:(id)arg1;
- (void)addSetting:(id)arg1;
- (void)addGroup:(id)arg1;
@property(readonly, copy) NSArray *settings;
@property(readonly, copy) NSArray *groups;
- (unsigned long long)hash;
@property(readonly, copy) NSString *localizedTitle;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 groups:(id)arg3 settings:(id)arg4;

@end
