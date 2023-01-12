//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNVisualIdentity, NSString;

__attribute__((visibility("hidden")))
@interface CNPhotoPickerAddItemsProvider : NSObject
{
    _Bool _allowsTakePhotoItem;
    _Bool _allowsPhotoFromLibraryItem;
    _Bool _allowsMonograms;
    _Bool _allowsEmoji;
    NSString *_identifier;
    CNVisualIdentity *_visualIdentity;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool allowsEmoji; // @synthesize allowsEmoji=_allowsEmoji;
@property(nonatomic) _Bool allowsMonograms; // @synthesize allowsMonograms=_allowsMonograms;
@property(nonatomic) _Bool allowsPhotoFromLibraryItem; // @synthesize allowsPhotoFromLibraryItem=_allowsPhotoFromLibraryItem;
@property(nonatomic) _Bool allowsTakePhotoItem; // @synthesize allowsTakePhotoItem=_allowsTakePhotoItem;
@property(readonly, nonatomic) CNVisualIdentity *visualIdentity; // @synthesize visualIdentity=_visualIdentity;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)symbolImageNameForAddItemType:(unsigned long long)arg1;
- (id)addItemOfType:(unsigned long long)arg1;
- (id)loadItemsForSize:(struct CGSize)arg1 scale:(double)arg2 RTL:(_Bool)arg3 renderingQueue:(id)arg4 callbackQueue:(id)arg5 itemDelegate:(id)arg6;
- (id)initWithVisualIdentity:(id)arg1;
- (id)initWithVisualIdentity:(id)arg1 allowsTakePhotoItem:(_Bool)arg2 allowsPhotoFromLibraryItem:(_Bool)arg3 allowsMonograms:(_Bool)arg4 allowsEmoji:(_Bool)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

