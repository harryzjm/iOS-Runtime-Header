//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ChatKit/NSObject-Protocol.h>

@class CNContact, FMFHandle, FMFMapViewController, UIImage, UIView;
@protocol MKAnnotation;

@protocol FMFMapViewControllerDelegate <NSObject>

@optional
- (CNContact *)annotationContactForHandle:(FMFHandle *)arg1;
- (void *)annotationABRecordForHandle:(FMFHandle *)arg1;
- (UIView *)titleViewForSelectedHandle;
- (UIImage *)annotationImageForHandle:(FMFHandle *)arg1;
- (void)fmfMapViewController:(FMFMapViewController *)arg1 didReceiveLocation:(id <MKAnnotation>)arg2;
- (void)fmfMapViewController:(FMFMapViewController *)arg1 regionDidChangeAnimated:(_Bool)arg2;
- (void)fmfMapViewController:(FMFMapViewController *)arg1 regionWillChangeAnimated:(_Bool)arg2;
- (void)fmfMapViewController:(FMFMapViewController *)arg1 didDeselectHandle:(FMFHandle *)arg2;
- (void)fmfMapViewController:(FMFMapViewController *)arg1 didSelectHandle:(FMFHandle *)arg2;
- (_Bool)canSelectAnnotation:(id <MKAnnotation>)arg1;
@end
