//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXPeopleDetailSettingsDataSource-Protocol.h>

@class NSArray, NSString;

@interface PXPeopleDetailSettingsKeyFacesDataSource : NSObject <PXPeopleDetailSettingsDataSource>
{
    NSString *_title;
    NSArray *_keyFaces;
}

@property(retain, nonatomic) NSArray *keyFaces; // @synthesize keyFaces=_keyFaces;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)modelObjectForIndex:(long long)arg1;
@property(readonly, nonatomic) long long action;
- (long long)verifyTypeAtIndex:(long long)arg1;
- (unsigned long long)faceCount:(long long)arg1;
- (id)personNameAtIndex:(long long)arg1;
- (void)imageAtIndex:(unsigned long long)arg1 targetSize:(struct CGSize)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) unsigned long long numberOfItems;
@property(readonly, nonatomic) _Bool hasMoreDetails;
- (id)initWithTitle:(id)arg1 keyFaces:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

