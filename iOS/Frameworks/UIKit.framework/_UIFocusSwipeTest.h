//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIWindow;

@interface _UIFocusSwipeTest
{
    unsigned long long _eventCount;
    const struct {
        double _field1;
        long long _field2;
        double _field3;
        double _field4;
        double _field5;
        double _field6;
    } *_events;
    int _swipeAxis;
    UIWindow *_window;
}

@property(nonatomic) int swipeAxis; // @synthesize swipeAxis=_swipeAxis;
@property(nonatomic) __weak UIWindow *window; // @synthesize window=_window;
- (void).cxx_destruct;
- (void)main;
- (void)prepareWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithIdentifier:(id)arg1;

@end

