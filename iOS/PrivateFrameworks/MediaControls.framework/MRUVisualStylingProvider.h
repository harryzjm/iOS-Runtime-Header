//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaControls/MTVisualStylingProviderObservingPrivate-Protocol.h>

@class MTVisualStylingProvider, NSHashTable, NSString, UIColor;

@interface MRUVisualStylingProvider : NSObject <MTVisualStylingProviderObservingPrivate>
{
    UIColor *_primaryColor;
    UIColor *_secondaryColor;
    UIColor *_tertiaryColor;
    UIColor *_quaternaryColor;
    UIColor *_separatorColor;
    _Bool _supportsVibrancy;
    NSHashTable *_observers;
    MTVisualStylingProvider *_visualStylingProvider;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MTVisualStylingProvider *visualStylingProvider; // @synthesize visualStylingProvider=_visualStylingProvider;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(nonatomic) _Bool supportsVibrancy; // @synthesize supportsVibrancy=_supportsVibrancy;
- (double)alphaForNowPlayingStyle:(long long)arg1;
- (long long)blendModeForNowPlayingStyle:(long long)arg1;
- (id)colorForNowPlayingStyle:(long long)arg1;
- (long long)visualStyleForNowPlayingStyle:(long long)arg1;
- (void)providedStylesDidChangeForProvider:(id)arg1;
- (void)notifyObservers;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)applyStyle:(long long)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)applyStyle:(long long)arg1 toView:(id)arg2;
@property(retain, nonatomic) UIColor *separatorColor;
@property(retain, nonatomic) UIColor *quaternaryColor;
@property(retain, nonatomic) UIColor *tertiaryColor;
@property(retain, nonatomic) UIColor *secondaryColor;
@property(retain, nonatomic) UIColor *primaryColor;
- (id)initWithVisualStylingProvider:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
