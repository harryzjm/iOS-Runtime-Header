//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BLSHPresentationDateSpecifier, NSString;

__attribute__((visibility("hidden")))
@interface BLSHPseudoFlipbookFrame : NSObject
{
    unsigned long long _presentationTime;
    unsigned long long _frameId;
    BLSHPresentationDateSpecifier *_bls_specifier;
    unsigned long long _memoryUsage;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long memoryUsage; // @synthesize memoryUsage=_memoryUsage;
@property(readonly, nonatomic) BLSHPresentationDateSpecifier *bls_specifier; // @synthesize bls_specifier=_bls_specifier;
@property(readonly, nonatomic) unsigned long long frameId; // @synthesize frameId=_frameId;
@property(readonly, nonatomic) unsigned long long presentationTime; // @synthesize presentationTime=_presentationTime;
- (id)bls_shortLoggingString;
- (id)bls_loggingString;
@property(readonly, copy) NSString *description;
- (void)releaseSurface;
@property(readonly, nonatomic) struct __IOSurface *surface;
@property(readonly, nonatomic) float aplDimming;
@property(readonly, nonatomic) float apl;
- (id)initWithPresentationTime:(unsigned long long)arg1 frameId:(unsigned long long)arg2 specifier:(id)arg3 memoryUsage:(unsigned long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

