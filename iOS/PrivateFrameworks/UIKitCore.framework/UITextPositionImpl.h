//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class WebVisiblePosition;

__attribute__((visibility("hidden")))
@interface UITextPositionImpl
{
    WebVisiblePosition *_webVisiblePosition;
}

+ (id)wrapWebVisiblePosition:(id)arg1;
@property(retain, nonatomic) WebVisiblePosition *webVisiblePosition; // @synthesize webVisiblePosition=_webVisiblePosition;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;

@end
