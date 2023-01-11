//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreChart/CCViewRendererDelegateInterface-Protocol.h>

@class CCVegaRenderer;

@interface CCViewRendererDelegate : NSObject <CCViewRendererDelegateInterface>
{
    CCVegaRenderer *vegaRenderer;
}

- (void).cxx_destruct;
@property __weak CCVegaRenderer *vegaRenderer; // @synthesize vegaRenderer;
- (void)updateNativeView;
- (void)loadURL:(id)arg1 options:(id)arg2 withCallback:(id)arg3;
- (id)initWithVegaRenderer:(id)arg1;

@end
