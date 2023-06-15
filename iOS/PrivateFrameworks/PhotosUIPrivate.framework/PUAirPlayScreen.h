//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIScreen, UIViewController, UIWindow;

__attribute__((visibility("hidden")))
@interface PUAirPlayScreen : NSObject
{
    UIScreen *_screen;
    NSString *_identifier;
    unsigned long long _type;
    UIViewController *_rootViewController;
    UIWindow *__window;
    struct CGSize _size;
}

+ (id)new;
- (void).cxx_destruct;
@property(retain, nonatomic, setter=_setWindow:) UIWindow *_window; // @synthesize _window=__window;
@property(retain, nonatomic) UIViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
@property(nonatomic, setter=_setSize:) struct CGSize size; // @synthesize size=_size;
@property(nonatomic, setter=_setType:) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic, setter=_setIdentifier:) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic, setter=_setScreen:) UIScreen *screen; // @synthesize screen=_screen;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)_updateWindow;
- (id)_associatedWindowScene;
@property(readonly, nonatomic, getter=isValid) _Bool valid;
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

