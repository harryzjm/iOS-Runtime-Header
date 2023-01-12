//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMapTable, NSString, NSTextContainer, NSTextLayoutFragment;
@protocol NSTextLocation, _NSTextLayoutAttachmentLayoutContextDelegate;

__attribute__((visibility("hidden")))
@interface _NSTextAttachmentLayoutContext : NSObject
{
    id <_NSTextLayoutAttachmentLayoutContextDelegate> _delegate;
    NSMapTable *_textAttachmentInfoTable;
    NSArray *_sortedKeys;
    NSArray *_textAttachmentViewProviders;
    id <NSTextLocation> _baseLocation;
    _Bool _allowsFontOverridingTextAttachmentVerticalMetrics;
    _Bool _usesFontLeading;
    _Bool _hasViewProvider;
    _Bool _hasResolvedAttachmentFrame;
    long long _applicationFrameworkContext;
    NSTextContainer *_textContainer;
    NSTextLayoutFragment *_textLayoutFragment;
}

@property _Bool allowsFontOverridingTextAttachmentVerticalMetrics; // @synthesize allowsFontOverridingTextAttachmentVerticalMetrics=_allowsFontOverridingTextAttachmentVerticalMetrics;
@property _Bool hasResolvedAttachmentFrame; // @synthesize hasResolvedAttachmentFrame=_hasResolvedAttachmentFrame;
@property NSTextLayoutFragment *textLayoutFragment; // @synthesize textLayoutFragment=_textLayoutFragment;
@property _Bool hasViewProvider; // @synthesize hasViewProvider=_hasViewProvider;
@property NSTextContainer *textContainer; // @synthesize textContainer=_textContainer;
@property(readonly) id <_NSTextLayoutAttachmentLayoutContextDelegate> delegate; // @synthesize delegate=_delegate;
@property long long applicationFrameworkContext; // @synthesize applicationFrameworkContext=_applicationFrameworkContext;
@property _Bool usesFontLeading; // @synthesize usesFontLeading=_usesFontLeading;
- (void)enumerateViewportElementsFromLocation:(id)arg1 options:(long long)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (struct CGRect)proposedLineFragmentRectForLocation:(id)arg1 attributes:(id)arg2 baselineOffset:(out double *)arg3;
- (id)textContainerForLocation:(id)arg1;
- (void)reset;
@property(readonly, copy) NSArray *textAttachmentViewProviders;
- (id)_sortedKeys;
- (void)_flushCachedInfo;
- (id)textAttachmentLayoutInfoForLocation:(id)arg1 attributes:(id)arg2;
@property(readonly) id <NSTextLocation> baseLocation;
- (void)dealloc;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (void)_adjustLocations;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

