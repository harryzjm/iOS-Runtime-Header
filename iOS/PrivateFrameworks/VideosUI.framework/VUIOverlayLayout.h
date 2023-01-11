//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <VideosUI/VUIOverlayLayoutProtocol-Protocol.h>

@class NSString, VUIImageLayout, VUIProgressBarLayout;

__attribute__((visibility("hidden")))
@interface VUIOverlayLayout : NSObject <VUIOverlayLayoutProtocol>
{
    VUIImageLayout *_appImageLayout;
    VUIProgressBarLayout *_progressBarLayout;
    struct UIEdgeInsets _padding;
}

+ (id)overlayLayoutForInterfaceIdiom:(long long)arg1;
@property(retain, nonatomic) VUIProgressBarLayout *progressBarLayout; // @synthesize progressBarLayout=_progressBarLayout;
@property(retain, nonatomic) VUIImageLayout *appImageLayout; // @synthesize appImageLayout=_appImageLayout;
@property(nonatomic) struct UIEdgeInsets padding; // @synthesize padding=_padding;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long type;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

