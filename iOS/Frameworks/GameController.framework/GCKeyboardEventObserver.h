//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol GCKeyboardEventObserverDelegate;

@interface GCKeyboardEventObserver : NSObject
{
    id <GCKeyboardEventObserverDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <GCKeyboardEventObserverDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

@end
