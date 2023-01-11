//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNAvatarImageRenderer, NSCache;

__attribute__((visibility("hidden")))
@interface CKPrintController : NSObject
{
    _Bool _isPrinting;
    CNAvatarImageRenderer *_avatarImageRenderer;
    NSCache *_avatarCache;
}

+ (void)printResolvedColors:(id *)arg1 balloonDescriptor:(struct CKBalloonDescriptor_t *)arg2 coloredBalloonView:(id)arg3;
+ (id)printAttributes:(id)arg1;
+ (id)printBalloonTextColor;
+ (id)printTranscriptTextColor;
+ (id)printBackgroundColor;
+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSCache *avatarCache; // @synthesize avatarCache=_avatarCache;
@property(retain, nonatomic) CNAvatarImageRenderer *avatarImageRenderer; // @synthesize avatarImageRenderer=_avatarImageRenderer;
@property(nonatomic, setter=setPrinting:) _Bool isPrinting; // @synthesize isPrinting=_isPrinting;
- (void)clearAvatarCache;
- (id)avatarImageForContact:(id)arg1 diameter:(double)arg2;
- (id)init;

@end
