//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <XCTest/XCTAsyncActivity-Protocol.h>

@class NSError, NSString;

@interface XCTAsyncActivity <XCTAsyncActivity>
{
    NSError *_error;
    _Bool _timedOut;
}

@property _Bool timedOut; // @synthesize timedOut=_timedOut;
@property(retain) NSError *error; // @synthesize error=_error;
- (void)dealloc;
- (void)finishWithError:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

