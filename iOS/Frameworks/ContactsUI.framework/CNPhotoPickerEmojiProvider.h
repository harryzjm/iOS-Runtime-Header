//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNPhotoPickerVariantsManager, CNVisualIdentity, NSString;

__attribute__((visibility("hidden")))
@interface CNPhotoPickerEmojiProvider : NSObject
{
    NSString *_identifier;
    CNVisualIdentity *_visualIdentity;
    CNPhotoPickerVariantsManager *_variantsManager;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CNPhotoPickerVariantsManager *variantsManager; // @synthesize variantsManager=_variantsManager;
@property(readonly, nonatomic) CNVisualIdentity *visualIdentity; // @synthesize visualIdentity=_visualIdentity;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)loadItemsForSize:(struct CGSize)arg1 scale:(double)arg2 RTL:(_Bool)arg3 renderingQueue:(id)arg4 callbackQueue:(id)arg5 itemDelegate:(id)arg6;
- (id)initWithVisualIdentity:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

