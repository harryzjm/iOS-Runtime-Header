//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, URTAlert;
@protocol URTDestinationPresentationDelegate;

__attribute__((visibility("hidden")))
@interface URTDefaultDestinationPresentation
{
    struct __CFRunLoopSource *_runLoopSource;
    URTAlert *_alert;
    long long _destination;
    id <URTDestinationPresentationDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <URTDestinationPresentationDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) long long destination; // @synthesize destination=_destination;
@property(readonly, nonatomic) URTAlert *alert; // @synthesize alert=_alert;
- (void)_invokeDelegateForResponseFlags:(unsigned long long)arg1;
- (void)present;
- (void)invalidate;
- (id)initWithAlert:(id)arg1 forDestination:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

