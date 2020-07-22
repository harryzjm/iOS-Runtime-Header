//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/TSPComponentWriteChannel-Protocol.h>

@class NSError, NSString;

__attribute__((visibility("hidden")))
@interface TSPIOHandlerWriteChannelAdapter : NSObject <TSPComponentWriteChannel>
{
    CDUnknownBlockType _handler;
    NSError *_error;
}

- (void).cxx_destruct;
- (void)close;
- (void)setError:(id)arg1;
- (void)writeData:(id)arg1;
- (id)initWithHandler:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
