//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface AEGridOverlayConfiguration : NSObject
{
    _Bool _showVideoDecoration;
    _Bool _showCloudDecoration;
    _Bool _showLoopDecoration;
}

@property(readonly, nonatomic) _Bool showLoopDecoration; // @synthesize showLoopDecoration=_showLoopDecoration;
@property(readonly, nonatomic) _Bool showCloudDecoration; // @synthesize showCloudDecoration=_showCloudDecoration;
@property(readonly, nonatomic) _Bool showVideoDecoration; // @synthesize showVideoDecoration=_showVideoDecoration;
- (_Bool)isEqual:(id)arg1;
- (id)initWithShowCloudDecoration:(_Bool)arg1 showVideoDecoration:(_Bool)arg2 showLoopDecoration:(_Bool)arg3;

@end

