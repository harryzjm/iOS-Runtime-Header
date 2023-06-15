//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Photos/PHPersonSuggestion.h>

@class NSDate, NSString;

@interface PHPersonSuggestion (PXPerson)
+ (void)px_loadRepresentativeFacesForPersons:(id)arg1;
@property(readonly) NSDate *px_keyPhotoDate;
@property(readonly) _Bool px_isPet;
@property(readonly) _Bool px_isHuman;
@property(readonly) short detectionType;
@property(readonly) _Bool isPersonModel;
@property(readonly) _Bool isVerified;
@property(readonly) NSString *px_localIdentifier;
@property(readonly) NSString *px_longStyleLocalizedName;
@property(readonly) NSString *px_localizedName;
@property(readonly) NSString *name;
@property(readonly) unsigned long long numberOfAssets;
- (int)requestFaceCropImageWithTargetSize:(struct CGSize)arg1 displayScale:(double)arg2 cropFactor:(long long)arg3 style:(long long)arg4 cacheResult:(_Bool)arg5 synchronous:(_Bool)arg6 resultHandler:(CDUnknownBlockType)arg7;
- (void)requestFaceTileImageWithTargetSize:(struct CGSize)arg1 cropFactor:(unsigned long long)arg2 style:(unsigned long long)arg3 cacheResult:(_Bool)arg4 boundFaceRect:(_Bool)arg5 completionBlock:(CDUnknownBlockType)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

