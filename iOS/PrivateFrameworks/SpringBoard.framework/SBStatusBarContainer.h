//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIStatusBar;

@interface SBStatusBarContainer : NSObject
{
    UIStatusBar *_statusBar;
    NSString *_reason;
}

@property(retain, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(nonatomic) __weak UIStatusBar *statusBar; // @synthesize statusBar=_statusBar;
- (void).cxx_destruct;
- (id)description;
- (void)dealloc;

@end
