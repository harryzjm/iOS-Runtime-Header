//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PrototypeTools/PTButtonRow.h>

@class PHPhotoLibrary;

@interface PXPhotoLibraryProcessingProgressRow : PTButtonRow
{
    PHPhotoLibrary *_photoLibrary;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) PHPhotoLibrary *photoLibrary; // @synthesize photoLibrary=_photoLibrary;
- (id)defaultUIAction;
- (Class)tableViewCellClass;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPhotoLibrary:(id)arg1 titleKeyPath:(id)arg2 imageKeyPath:(id)arg3;
- (id)init;

@end
