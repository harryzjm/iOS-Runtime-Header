//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NanoTimeKitCompanion/UIImagePickerControllerDelegate-Protocol.h>
#import <NanoTimeKitCompanion/UINavigationControllerDelegate-Protocol.h>

@class NSString;

@interface NTKCPhotosAddController : NSObject <UIImagePickerControllerDelegate, UINavigationControllerDelegate>
{
    CDUnknownBlockType _multipleCompletion;
    CDUnknownBlockType _singleCompletion;
}

+ (id)_sharedInstance;
+ (void)_presentAddControllerFromViewController:(id)arg1 multiple:(_Bool)arg2 limit:(unsigned long long)arg3 completion:(id)arg4;
+ (void)presentSinglePhotoAddControllerFromViewController:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
+ (void)presentPhotosAddControllerFromViewController:(id)arg1 selectionLimit:(unsigned long long)arg2 withCompletion:(CDUnknownBlockType)arg3;
+ (void)presentPhotosAddControllerFromViewController:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
@property(copy, nonatomic) CDUnknownBlockType singleCompletion; // @synthesize singleCompletion=_singleCompletion;
@property(copy, nonatomic) CDUnknownBlockType multipleCompletion; // @synthesize multipleCompletion=_multipleCompletion;
- (void).cxx_destruct;
- (void)_dismiss:(id)arg1 photos:(id)arg2 single:(id)arg3;
- (void)imagePickerController:(id)arg1 didFinishPickingMultipleMediaWithInfo:(id)arg2;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

