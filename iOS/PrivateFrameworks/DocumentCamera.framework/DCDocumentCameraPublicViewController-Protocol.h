//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ICDocCamDocumentInfoCollection, NSError;

@protocol DCDocumentCameraPublicViewController
- (void)didFailWithError:(NSError *)arg1;
- (void)didFinishWithDocumentInfoCollection:(ICDocCamDocumentInfoCollection *)arg1;
- (void)didCancel;
- (void)dismiss;
- (void)viewServicePreferredSizeDidChange:(struct CGSize)arg1;
@end

