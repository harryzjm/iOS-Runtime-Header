//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXGViewUserData-Protocol.h>

@class NSString;

@interface PXTitleLegibilityDimmingViewConfiguration : NSObject <PXGViewUserData>
{
    NSString *_gradientImageName;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *gradientImageName; // @synthesize gradientImageName=_gradientImageName;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)prepareForRender;
- (id)initWithGradientImageName:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
