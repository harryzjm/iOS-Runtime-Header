//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ALAssetsGroupPrivate;

@interface ALAssetsGroup : NSObject
{
    id _internal;
}

@property(retain, nonatomic) ALAssetsGroupPrivate *internal; // @synthesize internal=_internal;
- (_Bool)addAsset:(id)arg1;
@property(readonly, nonatomic, getter=isEditable) _Bool editable;
- (void)enumerateAssetsAtIndexes:(id)arg1 options:(unsigned long long)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)enumerateAssetsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateAssetsUsingBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateAssetsAtIndexes:(id)arg1 options:(unsigned long long)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (long long)numberOfAssets;
- (void)setAssetsFilter:(id)arg1;
- (struct CGImage *)posterImage;
- (id)valueForProperty:(id)arg1;
- (_Bool)isValid;
- (id)description;
- (id)_uuid;
- (id)_typeAsString;
- (void)dealloc;
- (id)initWithPhotoAlbum:(struct NSObject *)arg1 library:(id)arg2 type:(unsigned long long)arg3;

@end

