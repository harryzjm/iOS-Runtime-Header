//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FuseUI/NSObject-Protocol.h>

@class MusicEntityViewContentDescriptor, UITraitCollection;
@protocol MusicEntityValueProviding;

@protocol MusicEntityContentDescriptorViewConfiguring <NSObject>
+ (double)maximumHeightForContentDescriptor:(MusicEntityViewContentDescriptor *)arg1 width:(double)arg2 traitCollection:(UITraitCollection *)arg3;
@property(retain, nonatomic) id <MusicEntityValueProviding> entityValueProvider;
@property(retain, nonatomic) MusicEntityViewContentDescriptor *contentDescriptor;

@optional
- (void)updateForAsynchronousPropertyLoadCompleted;
- (void)setTextLateralEdgePadding:(double)arg1;
- (void)setEntityDisabled:(_Bool)arg1;
@end
