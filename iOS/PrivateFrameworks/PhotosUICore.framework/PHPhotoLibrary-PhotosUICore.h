//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Photos/PHPhotoLibrary.h>

@interface PHPhotoLibrary (PhotosUICore)
+ (id)px_appPhotoLibrary;
- (void)px_endPausingChanges:(id)arg1;
- (id)px_beginPausingChangesWithTimeout:(double)arg1;
- (void)px_unregisterChangeObserver:(id)arg1;
- (void)px_registerChangeObserver:(id)arg1;
- (id)px_changeDistributor;
@end
