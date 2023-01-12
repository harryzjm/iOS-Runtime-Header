//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PrototypeTools/PTSettings.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIButtonSettings : PTSettings
{
    _Bool _highlightMode;
    _Bool _highlightSubclasses;
    _Bool _highlightIgnoresBars;
    _Bool _highlightBelow;
    _Bool _highlightAlternateColor;
}

+ (id)settingsControllerModule;
@property(nonatomic) _Bool highlightAlternateColor; // @synthesize highlightAlternateColor=_highlightAlternateColor;
@property(nonatomic) _Bool highlightBelow; // @synthesize highlightBelow=_highlightBelow;
@property(nonatomic) _Bool highlightIgnoresBars; // @synthesize highlightIgnoresBars=_highlightIgnoresBars;
@property(nonatomic) _Bool highlightSubclasses; // @synthesize highlightSubclasses=_highlightSubclasses;
@property(nonatomic) _Bool highlightMode; // @synthesize highlightMode=_highlightMode;
- (void)setDefaultValues;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (id)initWithDefaultValues;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

