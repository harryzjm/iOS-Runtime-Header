//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitServices/UISSlotAnyContent-Protocol.h>

@class NSString;

@interface UISSlotLocalContent : NSObject <UISSlotAnyContent>
{
    unsigned char _contentScale;
    struct CGSize _contentSize;
    struct CGImage *_localImage;
}

+ (id)contentWithDrawing:(id)arg1 scale:(unsigned char)arg2 range:(unsigned long long)arg3;
@property(readonly, nonatomic) _Bool shouldReplaceExistingContent;
@property(readonly, nonatomic) struct CGSize contentSize;
@property(readonly, nonatomic) unsigned char contentScale;
@property(readonly, nonatomic) _Bool isRemote;
- (id)image;
- (void)deleteFromLayerContext:(id)arg1;
- (void)dealloc;
- (id)initWithContentSize:(struct CGSize)arg1 contentScale:(unsigned char)arg2 localImage:(struct CGImage *)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
