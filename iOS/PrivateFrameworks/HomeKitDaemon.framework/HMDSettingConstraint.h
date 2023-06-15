//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSNumber, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDSettingConstraint : NSObject
{
    NSUUID *_identifier;
    NSUUID *_parentIdentifier;
    NSNumber *_type;
    NSNumber *_numberValue;
    NSData *_dataValue;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly) NSData *dataValue; // @synthesize dataValue=_dataValue;
@property(readonly) NSNumber *numberValue; // @synthesize numberValue=_numberValue;
@property(readonly, copy) NSNumber *type; // @synthesize type=_type;
@property(readonly, copy) NSUUID *parentIdentifier; // @synthesize parentIdentifier=_parentIdentifier;
@property(readonly, copy) NSUUID *identifier; // @synthesize identifier=_identifier;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, copy) NSString *name;
@property(readonly, copy) id value;
- (id)initWithIdentifier:(id)arg1 parentIdentifier:(id)arg2 type:(id)arg3 numberValue:(id)arg4 dataValue:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

