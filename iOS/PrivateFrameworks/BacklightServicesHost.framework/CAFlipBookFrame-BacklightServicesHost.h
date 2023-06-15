//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuartzCore/CAFlipBookFrame.h>

@class BLSHPresentationDateSpecifier, NSString, NSUUID;

@interface CAFlipBookFrame (BacklightServicesHost)
- (id)bls_shortLoggingString;
- (id)bls_loggingString;
@property(readonly, nonatomic) NSUUID *bls_uuid;
@property(readonly, nonatomic) BLSHPresentationDateSpecifier *bls_specifier;

// Remaining properties
@property(readonly, nonatomic) float apl;
@property(readonly, nonatomic) float aplDimming;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) unsigned long long frameId;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=isInverted) _Bool inverted;
@property(readonly, nonatomic) unsigned long long memoryUsage;
@property(readonly, nonatomic) unsigned long long presentationTime;
@property(readonly, nonatomic) struct __IOSurface *rawSurface;
@property(readonly, nonatomic) struct CGRect rawSurfaceFrame;
@property(readonly) Class superclass;
@property(readonly, nonatomic) struct __IOSurface *surface;
@end

