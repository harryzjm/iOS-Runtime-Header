//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MobileSafariUI/NSObject-Protocol.h>

@class _SFActivity;

@protocol _SFActivityDelegate <NSObject>

@optional
- (long long)provenanceForSafariActivity:(_SFActivity *)arg1;
- (void)safariActivity:(_SFActivity *)arg1 didFinish:(_Bool)arg2;
@end

