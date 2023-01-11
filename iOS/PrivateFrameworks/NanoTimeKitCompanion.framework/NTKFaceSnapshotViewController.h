//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <NanoTimeKitCompanion/NTKFaceObserver-Protocol.h>

@class NSString, NTKFace, NTKFaceSnapshotCacheRequest, UIImage, UIImageView;

@interface NTKFaceSnapshotViewController : UIViewController <NTKFaceObserver>
{
    NTKFace *_face;
    UIImageView *_imageView;
    UIImage *_snapshotImage;
    NSString *_snapshotKeyOfSnapshotImage;
    NTKFaceSnapshotCacheRequest *_snapshotRequest;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NTKFaceSnapshotCacheRequest *snapshotRequest; // @synthesize snapshotRequest=_snapshotRequest;
@property(retain, nonatomic) NSString *snapshotKeyOfSnapshotImage; // @synthesize snapshotKeyOfSnapshotImage=_snapshotKeyOfSnapshotImage;
@property(retain, nonatomic) UIImage *snapshotImage; // @synthesize snapshotImage=_snapshotImage;
@property(readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(readonly, nonatomic) NTKFace *face; // @synthesize face=_face;
- (void)_updateFaceSnapshotIfNecessaryOfFace;
- (void)faceResourceDirectoryDidChange:(id)arg1;
- (void)faceConfigurationDidChange:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)_handleSnapshot:(id)arg1 forKey:(id)arg2;
- (void)_attemptToFetchSnapshot;
- (void)dealloc;
- (id)initWithFace:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
