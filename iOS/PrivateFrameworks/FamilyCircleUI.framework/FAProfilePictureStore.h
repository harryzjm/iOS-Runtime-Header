//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FAFamilyCircle, NSDictionary, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface FAProfilePictureStore : NSObject
{
    FAFamilyCircle *_familyCircle;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSMutableDictionary *_profileImages;
}

+ (double)screenScale;
+ (id)_dataForImage:(id)arg1;
+ (id)profilePictureForContact:(id)arg1 serverImageData:(id)arg2 firstName:(id)arg3 lastName:(id)arg4 diameter:(double)arg5;
- (void).cxx_destruct;
- (id)resizedPictureWithData:(id)arg1 diameter:(double)arg2;
- (id)profilePictureForFamilyMember:(id)arg1 pictureDiameter:(double)arg2;
- (id)profilePictureForFamilyMemberWithAltDSID:(id)arg1 pictureDiameter:(double)arg2;
- (id)profilePicturesWithDiameter:(double)arg1;
- (void)fetchProfileImagesWithCompletion:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)profilePictureForFamilyMember:(id)arg1;
@property(readonly, copy, nonatomic) NSDictionary *profileImages;
@property(retain, nonatomic) FAFamilyCircle *familyCircle;
- (void)_postReloadNotification;
- (void)_traitCollectionDidChange:(id)arg1;
- (id)initWithFamilyCircle:(id)arg1;

@end
