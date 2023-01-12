//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUIPrivate/PUPhotoPickerSelectionService-Protocol.h>
#import <PhotosUIPrivate/PUPhotoPickerTestSupportHandler-Protocol.h>

@class NSArray, NSData, NSDictionary, NSNumber;

@protocol PUPhotoPickerHostService <PUPhotoPickerSelectionService, PUPhotoPickerTestSupportHandler>
- (void)performTraitCollectionUpdateUsingData:(NSData *)arg1 completion:(void (^)(NSNumber *))arg2;
- (void)didSelectMultipleMediaItemsWithInfoDictionaries:(NSArray *)arg1;
- (void)didSelectMediaWithInfoDictionary:(NSDictionary *)arg1;
- (void)didDisplayPhotoPickerPreview;
- (void)didDisplayPhotoPickerSourceType:(NSNumber *)arg1;
- (void)dismissCurrentViewControllerFromPhotoPickerAnimated:(NSNumber *)arg1;
- (void)invalidatePhotoPickerHostServices;
- (void)cancelPhotoPicker;
@end

