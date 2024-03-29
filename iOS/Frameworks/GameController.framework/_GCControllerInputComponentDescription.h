//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, _GCControllerInputComponent, _GCControllerInputDescription;
@protocol NSObject><NSCopying><NSSecureCoding;

__attribute__((visibility("hidden")))
@interface _GCControllerInputComponentDescription : NSObject
{
    _GCControllerInputDescription *_controllerInputDescriptions;
    NSArray *_bindingDescriptions;
    _GCControllerInputComponent *_materializedInputComponent;
    id <NSObject><NSCopying><NSSecureCoding> _identifier;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, copy) _GCControllerInputDescription *controllerInputDescriptions; // @synthesize controllerInputDescriptions=_controllerInputDescriptions;
@property(readonly) id <NSObject><NSCopying><NSSecureCoding> identifier; // @synthesize identifier=_identifier;
- (void)_applyBinding:(id)arg1 toComponent:(id)arg2;
- (_Bool)update:(id)arg1 withContext:(id)arg2;
- (id)createWithContext:(id)arg1;
- (id)materializeWithContext:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)initWithIdentifier:(id)arg1 controllerInputs:(id)arg2 bindings:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

