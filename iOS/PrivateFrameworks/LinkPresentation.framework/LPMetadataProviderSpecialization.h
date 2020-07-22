//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSURL;
@protocol LPMetadataProviderSpecializationDelegate;

__attribute__((visibility("hidden")))
@interface LPMetadataProviderSpecialization : NSObject
{
    id <LPMetadataProviderSpecializationDelegate> _delegate;
    NSURL *_URL;
}

+ (id)specializedMetadataProviderForMetadata:(id)arg1 URL:(id)arg2;
+ (id)specializedMetadataProviderForResourceWithMIMEType:(id)arg1 URL:(id)arg2;
+ (id)specializedMetadataProviderForURL:(id)arg1;
@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(nonatomic) __weak id <LPMetadataProviderSpecializationDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)cancel;
- (void)start;
- (id)initWithURL:(id)arg1;

@end

