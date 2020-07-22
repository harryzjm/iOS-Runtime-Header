//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <OpusKit/NSCopying-Protocol.h>
#import <OpusKit/OKPresentationCanvasSubclassingHooks-Protocol.h>

@class NSMutableDictionary, NSString, OKPresentation;

@interface OKPresentationCanvas : NSObject <OKPresentationCanvasSubclassingHooks, NSCopying>
{
    OKPresentation *_presentation;
    id _parent;
    NSString *_name;
    NSString *_uuid;
    NSMutableDictionary *_settings;
    NSMutableDictionary *_userSettings;
    NSMutableDictionary *_userData;
    NSMutableDictionary *_properties;
    _Bool _isTemplate;
    _Bool _isResolved;
}

@property(nonatomic) _Bool isResolved; // @synthesize isResolved=_isResolved;
@property(nonatomic) _Bool isTemplate; // @synthesize isTemplate=_isTemplate;
@property(copy, nonatomic) NSMutableDictionary *properties; // @synthesize properties=_properties;
@property(readonly, copy, nonatomic) NSMutableDictionary *userData; // @synthesize userData=_userData;
@property(readonly, copy, nonatomic) NSMutableDictionary *userSettings; // @synthesize userSettings=_userSettings;
@property(readonly, copy, nonatomic) NSMutableDictionary *settings; // @synthesize settings=_settings;
@property(readonly, copy, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void)resolveIfNeeded;
- (void)parentApplyValueForKeyPath:(id)arg1;
- (void)setPropertiesObject:(id)arg1 forKeyPath:(id)arg2;
- (void)_setPropertiesObject:(id)arg1 forKey:(id)arg2;
- (void)addSettingsFromDictionary:(id)arg1;
- (void)setUserDataObject:(id)arg1 forKeyPath:(id)arg2;
- (void)_setUserDataObject:(id)arg1 forKey:(id)arg2;
- (void)setSettingsObject:(id)arg1 forKeyPath:(id)arg2;
- (void)_setSettingsObject:(id)arg1 forKey:(id)arg2;
- (id)canvasWithName:(id)arg1;
- (id)mergedSettings;
- (id)dictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)keyPath;
@property(readonly, copy) NSString *description;
@property(nonatomic) id parent;
@property(nonatomic) OKPresentation *presentation; // @synthesize presentation=_presentation;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

