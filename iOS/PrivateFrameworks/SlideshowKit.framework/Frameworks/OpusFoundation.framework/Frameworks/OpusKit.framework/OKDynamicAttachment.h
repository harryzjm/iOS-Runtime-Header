//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <OpusKit/OKSettingsSupport-Protocol.h>

@class NSString, UIAttachmentBehavior;

@interface OKDynamicAttachment : NSObject <OKSettingsSupport>
{
    struct UIOffset _localOffsetFromCenter;
    NSString *_remoteWidgetName;
    union {
        struct UIOffset offsetFromCenter;
        struct CGPoint anchorPoint;
    } _remote;
    double _length;
    double _damping;
    double _frequency;
    struct {
        unsigned int needsUpdate:1;
        unsigned int hasLength:1;
        unsigned int hasDamping:1;
        unsigned int hasFrequency:1;
    } _flags;
    UIAttachmentBehavior *_behavior;
}

+ (id)supportedSettings;
@property(readonly) UIAttachmentBehavior *behavior; // @synthesize behavior=_behavior;
- (void)setUserSettingObject:(id)arg1 forKey:(id)arg2;
- (id)settingObjectForKey:(id)arg1;
- (void)updateForOwningDynamicProxy:(id)arg1;
- (void)dealloc;
- (id)initWithSettings:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

