//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITextSelectionRect.h>

@class WebSelectionRect;

__attribute__((visibility("hidden")))
@interface WKTextSelectionRect : UITextSelectionRect
{
    WebSelectionRect *_webRect;
}

+ (id)textSelectionRectsWithWebRects:(id)arg1;
@property(retain, nonatomic) WebSelectionRect *webRect; // @synthesize webRect=_webRect;
- (_Bool)isVertical;
- (_Bool)containsEnd;
- (_Bool)containsStart;
- (id)range;
- (long long)writingDirection;
- (struct CGRect)rect;
- (void)dealloc;
- (id)initWithWebRect:(id)arg1;

@end

