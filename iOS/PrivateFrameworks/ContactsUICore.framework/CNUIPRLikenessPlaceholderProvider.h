//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ContactsUICore/CNUIPRLikenessProvider-Protocol.h>

@class CNCache, NSString;

@interface CNUIPRLikenessPlaceholderProvider : NSObject <CNUIPRLikenessProvider>
{
    CNCache *_cache;
}

+ (id)imageNameForDiameter:(double)arg1;
@property(readonly, nonatomic) CNCache *cache; // @synthesize cache=_cache;
- (void).cxx_destruct;
- (unsigned long long)_cnui_likenessType;
- (id)_cnui_likenessForSize:(struct CGSize)arg1 scale:(double)arg2;
- (id)_cnui_likenessForSize:(struct CGSize)arg1;
- (struct CGImage *)_cnui_roundedRectImageForSize:(struct CGSize)arg1 scale:(double)arg2;
- (struct CGImage *)_cnui_circularImageForSize:(struct CGSize)arg1 scale:(double)arg2;
- (struct CGImage *)renderRoundedRectImageForSilhouetteImage:(struct CGImage *)arg1 size:(struct CGSize)arg2 scale:(double)arg3;
- (struct CGImage *)renderCircularImageForSilhouetteImage:(struct CGImage *)arg1 size:(struct CGSize)arg2 scale:(double)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

