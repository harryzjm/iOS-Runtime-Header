//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, PLAssetsdClient;

__attribute__((visibility("hidden")))
@interface PHLimitedLibraryPickerDelegate : NSObject
{
    CDUnknownBlockType _dismissalBlock;
    CDUnknownBlockType _finishedPickingBlock;
    PLAssetsdClient *_assetsdClient;
}

- (void).cxx_destruct;
@property(retain, nonatomic) PLAssetsdClient *assetsdClient; // @synthesize assetsdClient=_assetsdClient;
@property(copy, nonatomic) CDUnknownBlockType finishedPickingBlock; // @synthesize finishedPickingBlock=_finishedPickingBlock;
@property(copy, nonatomic) CDUnknownBlockType dismissalBlock; // @synthesize dismissalBlock=_dismissalBlock;
- (void)presentationControllerDidDismiss:(id)arg1;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMultipleMediaWithInfo:(id)arg2;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)dismissImagePickerController:(id)arg1;
- (void)_dismissImagePickerController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

