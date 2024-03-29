//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIImage, UIMenuElement, UISPasteVariant, UIView;

__attribute__((visibility("hidden")))
@interface _UIEditMenuListItem : NSObject
{
    _Bool _wantsPasteSlotView;
    UIMenuElement *_menuElement;
    NSString *_title;
    UIImage *_image;
    UISPasteVariant *_pasteVariant;
    long long _options;
    UIView *_customView;
    double _overrideMinimumWidth;
    unsigned long long _displayMode;
}

+ (id)itemWithTitle:(id)arg1;
+ (id)itemWithMenuElement:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool wantsPasteSlotView; // @synthesize wantsPasteSlotView=_wantsPasteSlotView;
@property(nonatomic) unsigned long long displayMode; // @synthesize displayMode=_displayMode;
@property(nonatomic) double overrideMinimumWidth; // @synthesize overrideMinimumWidth=_overrideMinimumWidth;
@property(readonly, nonatomic) UIView *customView; // @synthesize customView=_customView;
@property(readonly, nonatomic) long long options; // @synthesize options=_options;
@property(readonly, nonatomic) UISPasteVariant *pasteVariant; // @synthesize pasteVariant=_pasteVariant;
@property(readonly, nonatomic) UIImage *image; // @synthesize image=_image;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) UIMenuElement *menuElement; // @synthesize menuElement=_menuElement;
- (id)description;
- (_Bool)hidesImageForTraitCollection:(id)arg1;
- (_Bool)hidesTitleForTraitCollection:(id)arg1;

@end

