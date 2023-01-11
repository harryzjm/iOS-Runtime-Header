//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FAInviteContext;

@interface FAInviteLinkMetadataProvider : NSObject
{
    FAInviteContext *_context;
}

- (void).cxx_destruct;
- (id)_defaultIcon;
- (id)_defaultImage;
- (id)_imageNamed:(id)arg1;
- (id)linkMetadataWithImage:(id)arg1 icon:(id)arg2;
- (id)_colorForString:(id)arg1;
- (void)fetchImageFromURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)loadImageWithURL:(id)arg1 enableTextOverlay:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)loadMetatadataWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithContext:(id)arg1;

@end
