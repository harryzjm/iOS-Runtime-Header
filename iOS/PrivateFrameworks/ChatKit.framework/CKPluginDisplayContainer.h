//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <ChatKit/NSSecureCoding-Protocol.h>

@class IMPluginPayload, UIImage;

@interface CKPluginDisplayContainer : NSObject <NSSecureCoding>
{
    IMPluginPayload *_pluginPayload;
    UIImage *_composeImage;
}

+ (_Bool)supportsSecureCoding;
+ (id)pluginDisplayContinerWithPluginPayload:(id)arg1 composeImage:(id)arg2;
@property(retain, nonatomic) UIImage *composeImage; // @synthesize composeImage=_composeImage;
@property(retain, nonatomic) IMPluginPayload *pluginPayload; // @synthesize pluginPayload=_pluginPayload;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)itemProvider;
- (id)pasteboardItem;

@end

