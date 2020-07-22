//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ContactsUICore/CNUIPRLikenessProvider-Protocol.h>

@class CNCache, NSData, NSString;

@interface CNUIPRLikenessPhotoProvider : NSObject <CNUIPRLikenessProvider>
{
    NSData *_originalPhotoData;
    CNCache *_cache;
}

+ (struct CGImage *)cgImageFromData:(id)arg1;
@property(readonly, nonatomic) CNCache *cache; // @synthesize cache=_cache;
@property(readonly, nonatomic) NSData *originalPhotoData; // @synthesize originalPhotoData=_originalPhotoData;
- (void).cxx_destruct;
- (struct CGImage *)renderRoundedRectImageForSize:(struct CGSize)arg1 scale:(double)arg2;
- (struct CGImage *)renderCircularImageForSize:(struct CGSize)arg1 scale:(double)arg2;
- (struct CGImage *)_cnui_roundedRectImageForSize:(struct CGSize)arg1 scale:(double)arg2;
- (struct CGImage *)_cnui_circularImageForSize:(struct CGSize)arg1 scale:(double)arg2;
- (unsigned long long)_cnui_likenessType;
- (id)_cnui_likenessForSize:(struct CGSize)arg1 scale:(double)arg2;
- (id)_cnui_likenessForSize:(struct CGSize)arg1;
- (id)initWithPhotoData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

