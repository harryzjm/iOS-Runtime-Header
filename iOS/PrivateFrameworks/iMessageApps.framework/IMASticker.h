//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface IMASticker : NSObject
{
    NSURL *_fileURL;
    NSString *_stickerName;
    NSString *_accessibilityLabel;
}

+ (double)screenScale;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *accessibilityLabel; // @synthesize accessibilityLabel=_accessibilityLabel;
@property(readonly, copy, nonatomic) NSString *stickerName; // @synthesize stickerName=_stickerName;
@property(readonly, copy, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
- (id)initWithFileURL:(id)arg1 stickerName:(id)arg2 accessibilityLabel:(id)arg3;

@end
