//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUI/PXSettingsKeyObserver-Protocol.h>

@class NSString, UIScreen, UIViewController, UIWindow;

__attribute__((visibility("hidden")))
@interface PUAirPlayScreen : NSObject <PXSettingsKeyObserver>
{
    UIScreen *_screen;
    NSString *_identifier;
    unsigned long long _type;
    UIViewController *_rootViewController;
    UIWindow *__window;
    struct CGSize _size;
}

@property(retain, nonatomic, setter=_setWindow:) UIWindow *_window; // @synthesize _window=__window;
@property(retain, nonatomic) UIViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
@property(nonatomic, setter=_setSize:) struct CGSize size; // @synthesize size=_size;
@property(nonatomic, setter=_setType:) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic, setter=_setIdentifier:) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic, setter=_setScreen:) UIScreen *screen; // @synthesize screen=_screen;
- (void).cxx_destruct;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)_updateWindow;
@property(readonly, nonatomic) NSString *_typeName;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) unsigned long long placeholderType;
- (_Bool)isEqualToAirPlayScreen:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (void)dealloc;
- (id)initWithScreen:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly) Class superclass;

@end

